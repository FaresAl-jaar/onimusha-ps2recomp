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

// Function: sub_00282560
// Address: 0x282560 - 0x282630
void sub_00282560_0x282560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282560_0x282560");
#endif

    switch (ctx->pc) {
        case 0x28257cu: goto label_28257c;
        case 0x282620u: goto label_282620;
        default: break;
    }

    ctx->pc = 0x282560u;

    // 0x282560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28256c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28256cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282574: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x282574u;
    SET_GPR_U32(ctx, 31, 0x28257Cu);
    ctx->pc = 0x282578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282574u;
    // 0x282578: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x282574u, 0x28257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28257Cu;
label_28257c:
    // 0x28257c: 0x96030784  lhu         $v1, 0x784($s0)
    ctx->pc = 0x28257cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1924)));
    // 0x282580: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282580u;
    {
        const bool branch_taken_0x282580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282580) {
            ctx->pc = 0x282590u;
            goto label_282590;
        }
    }
    ctx->pc = 0x282588u;
    // 0x282588: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x282588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28258c: 0xa6030784  sh          $v1, 0x784($s0)
    ctx->pc = 0x28258cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 3));
label_282590:
    // 0x282590: 0x92050821  lbu         $a1, 0x821($s0)
    ctx->pc = 0x282590u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x282594: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282598: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x282598u;
    {
        const bool branch_taken_0x282598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x28259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282598u;
        // 0x28259c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282598) {
            ctx->pc = 0x2825F0u;
            goto label_2825f0;
        }
    }
    ctx->pc = 0x2825A0u;
    // 0x2825a0: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2825A0u;
    {
        const bool branch_taken_0x2825a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2825a0) {
            ctx->pc = 0x2825E0u;
            goto label_2825e0;
        }
    }
    ctx->pc = 0x2825A8u;
    // 0x2825a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2825A8u;
    {
        const bool branch_taken_0x2825a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2825a8) {
            ctx->pc = 0x2825B8u;
            goto label_2825b8;
        }
    }
    ctx->pc = 0x2825B0u;
    // 0x2825b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2825B0u;
    {
        const bool branch_taken_0x2825b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2825b0) {
            ctx->pc = 0x282620u;
            goto label_282620;
        }
    }
    ctx->pc = 0x2825B8u;
label_2825b8:
    // 0x2825b8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2825b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2825bc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2825bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2825c0: 0x24030094  addiu       $v1, $zero, 0x94
    ctx->pc = 0x2825c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2825c4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2825c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2825c8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2825c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2825cc: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2825ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x2825d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2825d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2825d4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2825d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2825d8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2825d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2825dc: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x2825dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_2825e0:
    // 0x2825e0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2825e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2825e4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2825E4u;
    {
        const bool branch_taken_0x2825e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2825E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825E4u;
        // 0x2825e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825e4) {
            ctx->pc = 0x282620u;
            goto label_282620;
        }
    }
    ctx->pc = 0x2825ECu;
    // 0x2825ec: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2825ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2825f0:
    // 0x2825f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2825F0u;
    {
        const bool branch_taken_0x2825f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2825f0) {
            ctx->pc = 0x282620u;
            goto label_282620;
        }
    }
    ctx->pc = 0x2825F8u;
    // 0x2825f8: 0x96030784  lhu         $v1, 0x784($s0)
    ctx->pc = 0x2825f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1924)));
    // 0x2825fc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2825FCu;
    {
        const bool branch_taken_0x2825fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2825fc) {
            ctx->pc = 0x282620u;
            goto label_282620;
        }
    }
    ctx->pc = 0x282604u;
    // 0x282604: 0x960329de  lhu         $v1, 0x29DE($s0)
    ctx->pc = 0x282604u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x282608: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x282608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x28260c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28260Cu;
    {
        const bool branch_taken_0x28260c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28260Cu;
        // 0x282610: 0x3062ffef  andi        $v0, $v1, 0xFFEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28260c) {
            ctx->pc = 0x282618u;
            goto label_282618;
        }
    }
    ctx->pc = 0x282614u;
    // 0x282614: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x282614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
label_282618:
    // 0x282618: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x282618u;
    SET_GPR_U32(ctx, 31, 0x282620u);
    ctx->pc = 0x28261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282618u;
    // 0x28261c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x282618u, 0x282620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282620u;
label_282620:
    // 0x282620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282628: 0x3e00008  jr          $ra
    ctx->pc = 0x282628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282628u;
        // 0x28262c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282630u;
}
