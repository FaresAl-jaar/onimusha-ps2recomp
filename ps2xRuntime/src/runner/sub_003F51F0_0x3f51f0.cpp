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

// Function: sub_003F51F0
// Address: 0x3f51f0 - 0x3f5300
void sub_003F51F0_0x3f51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F51F0_0x3f51f0");
#endif

    switch (ctx->pc) {
        case 0x3f5248u: goto label_3f5248;
        case 0x3f52b8u: goto label_3f52b8;
        default: break;
    }

    ctx->pc = 0x3f51f0u;

    // 0x3f51f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f51f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3f51f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f51f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3f51f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f51f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3f51fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f51fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f5200: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f5200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f5204: 0x8f918d50  lw          $s1, -0x72B0($gp)
    ctx->pc = 0x3f5204u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937936)));
    // 0x3f5208: 0x2e220145  sltiu       $v0, $s1, 0x145
    ctx->pc = 0x3f5208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)325) ? 1 : 0);
    // 0x3f520c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F520Cu;
    {
        const bool branch_taken_0x3f520c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F520Cu;
        // 0x3f5210: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f520c) {
            ctx->pc = 0x3F5220u;
            goto label_3f5220;
        }
    }
    ctx->pc = 0x3F5214u;
    // 0x3f5214: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3F5214u;
    {
        const bool branch_taken_0x3f5214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5214) {
            ctx->pc = 0x3F52E8u;
            goto label_3f52e8;
        }
    }
    ctx->pc = 0x3F521Cu;
    // 0x3f521c: 0x0  nop
    ctx->pc = 0x3f521cu;
    // NOP
label_3f5220:
    // 0x3f5220: 0x8f82849c  lw          $v0, -0x7B64($gp)
    ctx->pc = 0x3f5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935708)));
    // 0x3f5224: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f5224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f5228: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x3f5228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3f522c: 0x24630390  addiu       $v1, $v1, 0x390
    ctx->pc = 0x3f522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 912));
    // 0x3f5230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f5230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3f5234: 0xaf82849c  sw          $v0, -0x7B64($gp)
    ctx->pc = 0x3f5234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935708), GPR_U32(ctx, 2));
    // 0x3f5238: 0x8f92849c  lw          $s2, -0x7B64($gp)
    ctx->pc = 0x3f5238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935708)));
    // 0x3f523c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3F523Cu;
    {
        const bool branch_taken_0x3f523c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F523Cu;
        // 0x3f5240: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f523c) {
            ctx->pc = 0x3F52C8u;
            goto label_3f52c8;
        }
    }
    ctx->pc = 0x3F5244u;
    // 0x3f5244: 0x0  nop
    ctx->pc = 0x3f5244u;
    // NOP
label_3f5248:
    // 0x3f5248: 0x2a41ffed  slti        $at, $s2, -0x13
    ctx->pc = 0x3f5248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4294967277) ? 1 : 0);
    // 0x3f524c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3F524Cu;
    {
        const bool branch_taken_0x3f524c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f524c) {
            ctx->pc = 0x3F5278u;
            goto label_3f5278;
        }
    }
    ctx->pc = 0x3F5254u;
    // 0x3f5254: 0x8f828d50  lw          $v0, -0x72B0($gp)
    ctx->pc = 0x3f5254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937936)));
    // 0x3f5258: 0x8f83849c  lw          $v1, -0x7B64($gp)
    ctx->pc = 0x3f5258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935708)));
    // 0x3f525c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f5260: 0xaf828d50  sw          $v0, -0x72B0($gp)
    ctx->pc = 0x3f5260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 2));
    // 0x3f5264: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3f5264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f5268: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3f5268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f526c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3F526Cu;
    {
        const bool branch_taken_0x3f526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F526Cu;
        // 0x3f5270: 0xaf82849c  sw          $v0, -0x7B64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f526c) {
            ctx->pc = 0x3F52B8u;
            goto label_3f52b8;
        }
    }
    ctx->pc = 0x3F5274u;
    // 0x3f5274: 0x0  nop
    ctx->pc = 0x3f5274u;
    // NOP
label_3f5278:
    // 0x3f5278: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f527c: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3F527Cu;
    {
        const bool branch_taken_0x3f527c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3f527c) {
            ctx->pc = 0x3F52B8u;
            goto label_3f52b8;
        }
    }
    ctx->pc = 0x3F5284u;
    // 0x3f5284: 0x8f848d4c  lw          $a0, -0x72B4($gp)
    ctx->pc = 0x3f5284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937932)));
    // 0x3f5288: 0x860b000a  lh          $t3, 0xA($s0)
    ctx->pc = 0x3f5288u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3f528c: 0x860a0008  lh          $t2, 0x8($s0)
    ctx->pc = 0x3f528cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f5290: 0x86090006  lh          $t1, 0x6($s0)
    ctx->pc = 0x3f5290u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3f5294: 0x86080004  lh          $t0, 0x4($s0)
    ctx->pc = 0x3f5294u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f5298: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5298u;
    {
        const bool branch_taken_0x3f5298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5298u;
        // 0x3f529c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5298) {
            ctx->pc = 0x3F52B8u;
            goto label_3f52b8;
        }
    }
    ctx->pc = 0x3F52A0u;
    // 0x3f52a0: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x3f52a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3f52a4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x3f52a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x3f52a8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x3f52a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x3f52ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f52acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f52b0: 0xc0fd778  jal         func_3F5DE0
    ctx->pc = 0x3F52B0u;
    SET_GPR_U32(ctx, 31, 0x3F52B8u);
    ctx->pc = 0x3F52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F52B0u;
    // 0x3f52b4: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5DE0u, 0x3F52B0u, 0x3F52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F52B8u;
label_3f52b8:
    // 0x3f52b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3f52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f52bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f52bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f52c0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3f52c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3f52c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3f52c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3f52c8:
    // 0x3f52c8: 0x2a4101c0  slti        $at, $s2, 0x1C0
    ctx->pc = 0x3f52c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)448) ? 1 : 0);
    // 0x3f52cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F52CCu;
    {
        const bool branch_taken_0x3f52cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F52CCu;
        // 0x3f52d0: 0x2e220145  sltiu       $v0, $s1, 0x145 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)325) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f52cc) {
            ctx->pc = 0x3F52E0u;
            goto label_3f52e0;
        }
    }
    ctx->pc = 0x3F52D4u;
    // 0x3f52d4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3F52D4u;
    {
        const bool branch_taken_0x3f52d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f52d4) {
            ctx->pc = 0x3F5248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5248;
        }
    }
    ctx->pc = 0x3F52DCu;
    // 0x3f52dc: 0x0  nop
    ctx->pc = 0x3f52dcu;
    // NOP
label_3f52e0:
    // 0x3f52e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f52e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f52e4: 0x0  nop
    ctx->pc = 0x3f52e4u;
    // NOP
label_3f52e8:
    // 0x3f52e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f52e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f52ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f52ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f52f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f52f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f52f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f52f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f52f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F52F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F52F8u;
        // 0x3f52fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F52F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5300u;
}
