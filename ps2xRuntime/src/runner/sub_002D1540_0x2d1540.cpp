#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1540
// Address: 0x2d1540 - 0x2d1614
void sub_002D1540_0x2d1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1540_0x2d1540");
#endif

    switch (ctx->pc) {
        case 0x2d1554u: goto label_2d1554;
        case 0x2d1598u: goto label_2d1598;
        default: break;
    }

    ctx->pc = 0x2d1540u;

    // 0x2d1540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1544: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d1544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d154c: 0xc0b4344  jal         func_2D0D10
    ctx->pc = 0x2D154Cu;
    SET_GPR_U32(ctx, 31, 0x2D1554u);
    ctx->pc = 0x2D1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D154Cu;
    // 0x2d1550: 0x90840014  lbu         $a0, 0x14($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D10u, 0x2D154Cu, 0x2D1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1554u;
label_2d1554:
    // 0x2d1554: 0xa0a20047  sb          $v0, 0x47($a1)
    ctx->pc = 0x2d1554u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d1558: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d1558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d155c: 0x90a30018  lbu         $v1, 0x18($a1)
    ctx->pc = 0x2d155cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d1560: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2d1560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1564: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d1564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1568: 0xa0a300d6  sb          $v1, 0xD6($a1)
    ctx->pc = 0x2d1568u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 214), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d156c: 0x90a30045  lbu         $v1, 0x45($a1)
    ctx->pc = 0x2d156cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 69)));
    // 0x2d1570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d1570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d1574: 0xa0a300d7  sb          $v1, 0xD7($a1)
    ctx->pc = 0x2d1574u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 215), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1578: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x2d1578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x2d157c: 0xaca30104  sw          $v1, 0x104($a1)
    ctx->pc = 0x2d157cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 3));
    // 0x2d1580: 0x8ca300a8  lw          $v1, 0xA8($a1)
    ctx->pc = 0x2d1580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x2d1584: 0xaca30108  sw          $v1, 0x108($a1)
    ctx->pc = 0x2d1584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 3));
    // 0x2d1588: 0x8ca3009c  lw          $v1, 0x9C($a1)
    ctx->pc = 0x2d1588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x2d158c: 0xaca300fc  sw          $v1, 0xFC($a1)
    ctx->pc = 0x2d158cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 3));
    // 0x2d1590: 0x8ca300a0  lw          $v1, 0xA0($a1)
    ctx->pc = 0x2d1590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x2d1594: 0xaca30100  sw          $v1, 0x100($a1)
    ctx->pc = 0x2d1594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 3));
label_2d1598:
    // 0x2d1598: 0x8d0400c4  lw          $a0, 0xC4($t0)
    ctx->pc = 0x2d1598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2d159c: 0xa93021  addu        $a2, $a1, $t1
    ctx->pc = 0x2d159cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2d15a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d15a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d15a4: 0x2d230002  sltiu       $v1, $t1, 0x2
    ctx->pc = 0x2d15a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d15a8: 0xad04010c  sw          $a0, 0x10C($t0)
    ctx->pc = 0x2d15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 268), GPR_U32(ctx, 4));
    // 0x2d15ac: 0x8d04007c  lw          $a0, 0x7C($t0)
    ctx->pc = 0x2d15acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 124)));
    // 0x2d15b0: 0xad0400dc  sw          $a0, 0xDC($t0)
    ctx->pc = 0x2d15b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 220), GPR_U32(ctx, 4));
    // 0x2d15b4: 0x8d040084  lw          $a0, 0x84($t0)
    ctx->pc = 0x2d15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x2d15b8: 0xad0400e4  sw          $a0, 0xE4($t0)
    ctx->pc = 0x2d15b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 228), GPR_U32(ctx, 4));
    // 0x2d15bc: 0x8d04008c  lw          $a0, 0x8C($t0)
    ctx->pc = 0x2d15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x2d15c0: 0xad0400ec  sw          $a0, 0xEC($t0)
    ctx->pc = 0x2d15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 236), GPR_U32(ctx, 4));
    // 0x2d15c4: 0x8d040094  lw          $a0, 0x94($t0)
    ctx->pc = 0x2d15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
    // 0x2d15c8: 0xad0400f4  sw          $a0, 0xF4($t0)
    ctx->pc = 0x2d15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 244), GPR_U32(ctx, 4));
    // 0x2d15cc: 0x8ce400ac  lw          $a0, 0xAC($a3)
    ctx->pc = 0x2d15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
    // 0x2d15d0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2d15d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2d15d4: 0xace40114  sw          $a0, 0x114($a3)
    ctx->pc = 0x2d15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 276), GPR_U32(ctx, 4));
    // 0x2d15d8: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x2d15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x2d15dc: 0xace40118  sw          $a0, 0x118($a3)
    ctx->pc = 0x2d15dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 280), GPR_U32(ctx, 4));
    // 0x2d15e0: 0x8ce400b4  lw          $a0, 0xB4($a3)
    ctx->pc = 0x2d15e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x2d15e4: 0xace4011c  sw          $a0, 0x11C($a3)
    ctx->pc = 0x2d15e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 284), GPR_U32(ctx, 4));
    // 0x2d15e8: 0x90c400d4  lbu         $a0, 0xD4($a2)
    ctx->pc = 0x2d15e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2d15ec: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x2d15ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2d15f0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D15F0u;
    {
        const bool branch_taken_0x2d15f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15F0u;
        // 0x2d15f4: 0xa0c40134  sb          $a0, 0x134($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 308), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d15f0) {
            ctx->pc = 0x2D1598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1598;
        }
    }
    ctx->pc = 0x2D15F8u;
    // 0x2d15f8: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x2d15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x2d15fc: 0xaca3012c  sw          $v1, 0x12C($a1)
    ctx->pc = 0x2d15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 3));
    // 0x2d1600: 0x8ca300d0  lw          $v1, 0xD0($a1)
    ctx->pc = 0x2d1600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2d1604: 0xaca30130  sw          $v1, 0x130($a1)
    ctx->pc = 0x2d1604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 3));
    // 0x2d1608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d160c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D160Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D160Cu;
        // 0x2d1610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D160Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1614u;
}
