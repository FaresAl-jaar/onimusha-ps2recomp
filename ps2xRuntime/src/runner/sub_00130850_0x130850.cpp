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

// Function: sub_00130850
// Address: 0x130850 - 0x130984
void sub_00130850_0x130850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130850_0x130850");
#endif

    switch (ctx->pc) {
        case 0x1308a8u: goto label_1308a8;
        default: break;
    }

    ctx->pc = 0x130850u;

    // 0x130850: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x130850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x130854: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x130854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x130858: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x130858u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x13085c: 0x655821  addu        $t3, $v1, $a1
    ctx->pc = 0x13085cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x130860: 0x902c8474  lbu         $t4, -0x7B8C($at)
    ctx->pc = 0x130860u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935668)));
    // 0x130864: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x130864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x130868: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x130868u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13086c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13086cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130870: 0x56900  sll         $t5, $a1, 4
    ctx->pc = 0x130870u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x130874: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x130874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x130878: 0xc2940  sll         $a1, $t4, 5
    ctx->pc = 0x130878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x13087c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x130880: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x130880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x130884: 0x34218478  ori         $at, $at, 0x8478
    ctx->pc = 0x130884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33912);
    // 0x130888: 0xa12821  addu        $a1, $a1, $at
    ctx->pc = 0x130888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x13088c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x13088cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x130890: 0x8d2c0078  lw          $t4, 0x78($t1)
    ctx->pc = 0x130890u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x130894: 0x8d2b007c  lw          $t3, 0x7C($t1)
    ctx->pc = 0x130894u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 124)));
    // 0x130898: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x130898u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x13089c: 0x918e0034  lbu         $t6, 0x34($t4)
    ctx->pc = 0x13089cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1308a0: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x1308a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x1308a4: 0x8d6c0018  lw          $t4, 0x18($t3)
    ctx->pc = 0x1308a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
label_1308a8:
    // 0x1308a8: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x1308a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1308ac: 0x916b0002  lbu         $t3, 0x2($t3)
    ctx->pc = 0x1308acu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1308b0: 0x15660003  bne         $t3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1308B0u;
    {
        const bool branch_taken_0x1308b0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 6));
        if (branch_taken_0x1308b0) {
            ctx->pc = 0x1308C0u;
            goto label_1308c0;
        }
    }
    ctx->pc = 0x1308B8u;
    // 0x1308b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1308B8u;
    {
        const bool branch_taken_0x1308b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1308BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308B8u;
        // 0x1308bc: 0xacac000c  sw          $t4, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308b8) {
            ctx->pc = 0x1308D0u;
            goto label_1308d0;
        }
    }
    ctx->pc = 0x1308C0u;
label_1308c0:
    // 0x1308c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1308c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1308c4: 0x14e582a  slt         $t3, $t2, $t6
    ctx->pc = 0x1308c4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1308c8: 0x1560fff7  bnez        $t3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1308C8u;
    {
        const bool branch_taken_0x1308c8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1308CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308C8u;
        // 0x1308cc: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308c8) {
            ctx->pc = 0x1308A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1308a8;
        }
    }
    ctx->pc = 0x1308D0u;
label_1308d0:
    // 0x1308d0: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x1308d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1308d4: 0x15400006  bnez        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1308D4u;
    {
        const bool branch_taken_0x1308d4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1308d4) {
            ctx->pc = 0x1308F0u;
            goto label_1308f0;
        }
    }
    ctx->pc = 0x1308DCu;
    // 0x1308dc: 0x8d2a007c  lw          $t2, 0x7C($t1)
    ctx->pc = 0x1308dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 124)));
    // 0x1308e0: 0x1aa5021  addu        $t2, $t5, $t2
    ctx->pc = 0x1308e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x1308e4: 0x8d4a0018  lw          $t2, 0x18($t2)
    ctx->pc = 0x1308e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1308e8: 0xacaa000c  sw          $t2, 0xC($a1)
    ctx->pc = 0x1308e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 10));
    // 0x1308ec: 0x0  nop
    ctx->pc = 0x1308ecu;
    // NOP
label_1308f0:
    // 0x1308f0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1308f4: 0xa0aa0000  sb          $t2, 0x0($a1)
    ctx->pc = 0x1308f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1308f8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1308f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1308fc: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1308fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x130900: 0x65040  sll         $t2, $a2, 1
    ctx->pc = 0x130900u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x130904: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x130904u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x130908: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x130908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x13090c: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x13090cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x130910: 0x650c0  sll         $t2, $a2, 3
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x130914: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x130914u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130918: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x130918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13091c: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x13091cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x130920: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x130920u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x130924: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x130924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x130928: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x130928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x13092c: 0x8d26008c  lw          $a2, 0x8C($t1)
    ctx->pc = 0x13092cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 140)));
    // 0x130930: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x130930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x130934: 0x90c6000b  lbu         $a2, 0xB($a2)
    ctx->pc = 0x130934u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x130938: 0xc73004  sllv        $a2, $a3, $a2
    ctx->pc = 0x130938u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x13093c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13093cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x130940: 0xa4a6001c  sh          $a2, 0x1C($a1)
    ctx->pc = 0x130940u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x130944: 0x8d26008c  lw          $a2, 0x8C($t1)
    ctx->pc = 0x130944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 140)));
    // 0x130948: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x130948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x13094c: 0x90c6000c  lbu         $a2, 0xC($a2)
    ctx->pc = 0x13094cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x130950: 0xc73004  sllv        $a2, $a3, $a2
    ctx->pc = 0x130950u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x130954: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x130954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x130958: 0xa4a6001e  sh          $a2, 0x1E($a1)
    ctx->pc = 0x130958u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 6));
    // 0x13095c: 0x8d260078  lw          $a2, 0x78($t1)
    ctx->pc = 0x13095cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x130960: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x130960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x130964: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x130964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x130968: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x130968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x13096c: 0x90238474  lbu         $v1, -0x7B8C($at)
    ctx->pc = 0x13096cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935668)));
    // 0x130970: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x130970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x130974: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130978: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x130978u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x13097c: 0x3e00008  jr          $ra
    ctx->pc = 0x13097Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13097Cu;
        // 0x130980: 0xa0238474  sb          $v1, -0x7B8C($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294935668), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13097Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130984u;
}
