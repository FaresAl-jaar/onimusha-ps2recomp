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

// Function: sub_0014D6B0
// Address: 0x14d6b0 - 0x14d76c
void sub_0014D6B0_0x14d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D6B0_0x14d6b0");
#endif

    switch (ctx->pc) {
        case 0x14d758u: goto label_14d758;
        default: break;
    }

    ctx->pc = 0x14d6b0u;

    // 0x14d6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d6b4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x14d6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x14d6b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d6bc: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x14d6bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x14d6c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d6c4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x14d6c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6c8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x14D6C8u;
    {
        const bool branch_taken_0x14d6c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6C8u;
        // 0x14d6cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6c8) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D6D0u;
    // 0x14d6d0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x14d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x14d6d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d6d8: 0x246349f0  addiu       $v1, $v1, 0x49F0
    ctx->pc = 0x14d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18928));
    // 0x14d6dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d6e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d6e4: 0x400008  jr          $v0
    ctx->pc = 0x14D6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D6F0u: goto label_14d6f0;
            case 0x14D6F8u: goto label_14d6f8;
            case 0x14D700u: goto label_14d700;
            case 0x14D708u: goto label_14d708;
            case 0x14D710u: goto label_14d710;
            case 0x14D718u: goto label_14d718;
            case 0x14D720u: goto label_14d720;
            case 0x14D728u: goto label_14d728;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D6E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14D6ECu;
    // 0x14d6ec: 0x0  nop
    ctx->pc = 0x14d6ecu;
    // NOP
label_14d6f0:
    // 0x14d6f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14D6F0u;
    {
        const bool branch_taken_0x14d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6F0u;
        // 0x14d6f4: 0x640b0001  daddiu      $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6f0) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D6F8u;
label_14d6f8:
    // 0x14d6f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14D6F8u;
    {
        const bool branch_taken_0x14d6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6F8u;
        // 0x14d6fc: 0x640b0002  daddiu      $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6f8) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D700u;
label_14d700:
    // 0x14d700: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14D700u;
    {
        const bool branch_taken_0x14d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D700u;
        // 0x14d704: 0x640b0003  daddiu      $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d700) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D708u;
label_14d708:
    // 0x14d708: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14D708u;
    {
        const bool branch_taken_0x14d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D708u;
        // 0x14d70c: 0x640b0004  daddiu      $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d708) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D710u;
label_14d710:
    // 0x14d710: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14D710u;
    {
        const bool branch_taken_0x14d710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D710u;
        // 0x14d714: 0x640b0005  daddiu      $t3, $zero, 0x5 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d710) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D718u;
label_14d718:
    // 0x14d718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14D718u;
    {
        const bool branch_taken_0x14d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D718u;
        // 0x14d71c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d718) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D720u;
label_14d720:
    // 0x14d720: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D720u;
    {
        const bool branch_taken_0x14d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D720u;
        // 0x14d724: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d720) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D728u;
label_14d728:
    // 0x14d728: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14d728u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d72c: 0x0  nop
    ctx->pc = 0x14d72cu;
    // NOP
label_14d730:
    // 0x14d730: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D730u;
    {
        const bool branch_taken_0x14d730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d730) {
            ctx->pc = 0x14D758u;
            goto label_14d758;
        }
    }
    ctx->pc = 0x14D738u;
    // 0x14d738: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x14d738u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14d73c: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x14d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    // 0x14d740: 0x91470001  lbu         $a3, 0x1($t2)
    ctx->pc = 0x14d740u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x14d744: 0x91480002  lbu         $t0, 0x2($t2)
    ctx->pc = 0x14d744u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x14d748: 0x91490003  lbu         $t1, 0x3($t2)
    ctx->pc = 0x14d748u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x14d74c: 0x8d4a000c  lw          $t2, 0xC($t2)
    ctx->pc = 0x14d74cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x14d750: 0xc050da4  jal         func_143690
    ctx->pc = 0x14D750u;
    SET_GPR_U32(ctx, 31, 0x14D758u);
    ctx->pc = 0x14D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D750u;
    // 0x14d754: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143690u, 0x14D750u, 0x14D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D758u;
label_14d758:
    // 0x14d758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14d758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d75c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d764: 0x3e00008  jr          $ra
    ctx->pc = 0x14D764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D764u;
        // 0x14d768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D76Cu;
}
