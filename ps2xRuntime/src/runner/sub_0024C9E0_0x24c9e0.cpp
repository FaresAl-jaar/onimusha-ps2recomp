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

// Function: sub_0024C9E0
// Address: 0x24c9e0 - 0x24ca9c
void sub_0024C9E0_0x24c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C9E0_0x24c9e0");
#endif

    switch (ctx->pc) {
        case 0x24ca10u: goto label_24ca10;
        case 0x24ca20u: goto label_24ca20;
        case 0x24ca80u: goto label_24ca80;
        default: break;
    }

    ctx->pc = 0x24c9e0u;

    // 0x24c9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c9e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c9e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c9f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24c9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c9f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24c9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9fc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C9FCu;
    {
        const bool branch_taken_0x24c9fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9FCu;
        // 0x24ca00: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9fc) {
            ctx->pc = 0x24CA18u;
            goto label_24ca18;
        }
    }
    ctx->pc = 0x24CA04u;
    // 0x24ca04: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24ca04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24ca08: 0xc093184  jal         func_24C610
    ctx->pc = 0x24CA08u;
    SET_GPR_U32(ctx, 31, 0x24CA10u);
    ctx->pc = 0x24CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA08u;
    // 0x24ca0c: 0x24a5dc90  addiu       $a1, $a1, -0x2370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C610u, 0x24CA08u, 0x24CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA10u;
label_24ca10:
    // 0x24ca10: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24CA10u;
    {
        const bool branch_taken_0x24ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA10u;
        // 0x24ca14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca10) {
            ctx->pc = 0x24CA84u;
            goto label_24ca84;
        }
    }
    ctx->pc = 0x24CA18u;
label_24ca18:
    // 0x24ca18: 0xc093172  jal         func_24C5C8
    ctx->pc = 0x24CA18u;
    SET_GPR_U32(ctx, 31, 0x24CA20u);
    ctx->pc = 0x24C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5C8u, 0x24CA18u, 0x24CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA20u;
label_24ca20:
    // 0x24ca20: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CA20u;
    {
        const bool branch_taken_0x24ca20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA20u;
        // 0x24ca24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca20) {
            ctx->pc = 0x24CA30u;
            goto label_24ca30;
        }
    }
    ctx->pc = 0x24CA28u;
    // 0x24ca28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24CA28u;
    {
        const bool branch_taken_0x24ca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA28u;
        // 0x24ca2c: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca28) {
            ctx->pc = 0x24CA60u;
            goto label_24ca60;
        }
    }
    ctx->pc = 0x24CA30u;
label_24ca30:
    // 0x24ca30: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CA30u;
    {
        const bool branch_taken_0x24ca30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA30u;
        // 0x24ca34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca30) {
            ctx->pc = 0x24CA48u;
            goto label_24ca48;
        }
    }
    ctx->pc = 0x24CA38u;
    // 0x24ca38: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24ca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24ca3c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x24ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x24ca40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24CA40u;
    {
        const bool branch_taken_0x24ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA40u;
        // 0x24ca44: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca40) {
            ctx->pc = 0x24CA64u;
            goto label_24ca64;
        }
    }
    ctx->pc = 0x24CA48u;
label_24ca48:
    // 0x24ca48: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CA48u;
    {
        const bool branch_taken_0x24ca48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA48u;
        // 0x24ca4c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca48) {
            ctx->pc = 0x24CA64u;
            goto label_24ca64;
        }
    }
    ctx->pc = 0x24CA50u;
    // 0x24ca50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ca54: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24ca58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24CA58u;
    {
        const bool branch_taken_0x24ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA58u;
        // 0x24ca5c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca58) {
            ctx->pc = 0x24CA64u;
            goto label_24ca64;
        }
    }
    ctx->pc = 0x24CA60u;
label_24ca60:
    // 0x24ca60: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24ca60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24ca64:
    // 0x24ca64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ca68: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x24ca68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24ca6c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x24ca6cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x24ca70: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x24ca70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x24ca74: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x24ca74u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x24ca78: 0xc093178  jal         func_24C5E0
    ctx->pc = 0x24CA78u;
    SET_GPR_U32(ctx, 31, 0x24CA80u);
    ctx->pc = 0x24CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA78u;
    // 0x24ca7c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5E0u, 0x24CA78u, 0x24CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA80u;
label_24ca80:
    // 0x24ca80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24ca84:
    // 0x24ca84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ca84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ca88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24ca88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ca8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24ca8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ca90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24ca90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24ca94: 0x3e00008  jr          $ra
    ctx->pc = 0x24CA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA94u;
        // 0x24ca98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CA9Cu;
}
