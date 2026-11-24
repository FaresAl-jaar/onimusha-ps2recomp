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

// Function: sub_003B7FD0
// Address: 0x3b7fd0 - 0x3b8074
void sub_003B7FD0_0x3b7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7FD0_0x3b7fd0");
#endif

    switch (ctx->pc) {
        case 0x3b8008u: goto label_3b8008;
        case 0x3b803cu: goto label_3b803c;
        case 0x3b8054u: goto label_3b8054;
        default: break;
    }

    ctx->pc = 0x3b7fd0u;

    // 0x3b7fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b7fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b7fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7fd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b7fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b7fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b7fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b7fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b7fe4: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7FE4u;
    {
        const bool branch_taken_0x3b7fe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FE4u;
        // 0x3b7fe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7fe4) {
            ctx->pc = 0x3B8000u;
            goto label_3b8000;
        }
    }
    ctx->pc = 0x3B7FECu;
    // 0x3b7fec: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7FECu;
    {
        const bool branch_taken_0x3b7fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7fec) {
            ctx->pc = 0x3B8000u;
            goto label_3b8000;
        }
    }
    ctx->pc = 0x3B7FF4u;
    // 0x3b7ff4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3B7FF4u;
    {
        const bool branch_taken_0x3b7ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7ff4) {
            ctx->pc = 0x3B8060u;
            goto label_3b8060;
        }
    }
    ctx->pc = 0x3B7FFCu;
    // 0x3b7ffc: 0x0  nop
    ctx->pc = 0x3b7ffcu;
    // NOP
label_3b8000:
    // 0x3b8000: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B8000u;
    SET_GPR_U32(ctx, 31, 0x3B8008u);
    ctx->pc = 0x3B8004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8000u;
    // 0x3b8004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B8000u, 0x3B8008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8008u;
label_3b8008:
    // 0x3b8008: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3b8008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b800c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x3b800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x3b8010: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3b8010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3b8014: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x3b8014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x3b8018: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3b8018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b801c: 0x0  nop
    ctx->pc = 0x3b801cu;
    // NOP
    // 0x3b8020: 0x0  nop
    ctx->pc = 0x3b8020u;
    // NOP
    // 0x3b8024: 0x1010  mfhi        $v0
    ctx->pc = 0x3b8024u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b8028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b8028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b802c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x3b802cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x3b8030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b8030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b8034: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B8034u;
    SET_GPR_U32(ctx, 31, 0x3B803Cu);
    ctx->pc = 0x3B8038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8034u;
    // 0x3b8038: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B8034u, 0x3B803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B803Cu;
label_3b803c:
    // 0x3b803c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3b803cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b8040: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x3b8040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3b8044: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3b8044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3b8048: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3b8048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b804c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3B804Cu;
    SET_GPR_U32(ctx, 31, 0x3B8054u);
    ctx->pc = 0x3B8050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B804Cu;
    // 0x3b8050: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3B804Cu, 0x3B8054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8054u;
label_3b8054:
    // 0x3b8054: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3b8054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3b8058: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3b8058u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b805c: 0x0  nop
    ctx->pc = 0x3b805cu;
    // NOP
label_3b8060:
    // 0x3b8060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b8060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b8064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b8064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b806c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B806Cu;
        // 0x3b8070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8074u;
}
