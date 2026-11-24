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

// Function: sub_0037C230
// Address: 0x37c230 - 0x37c2d4
void sub_0037C230_0x37c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C230_0x37c230");
#endif

    switch (ctx->pc) {
        case 0x37c268u: goto label_37c268;
        case 0x37c29cu: goto label_37c29c;
        case 0x37c2b4u: goto label_37c2b4;
        default: break;
    }

    ctx->pc = 0x37c230u;

    // 0x37c230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37c234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37c238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37c23c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37c240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37c244: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37C244u;
    {
        const bool branch_taken_0x37c244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C244u;
        // 0x37c248: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c244) {
            ctx->pc = 0x37C260u;
            goto label_37c260;
        }
    }
    ctx->pc = 0x37C24Cu;
    // 0x37c24c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C24Cu;
    {
        const bool branch_taken_0x37c24c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c24c) {
            ctx->pc = 0x37C260u;
            goto label_37c260;
        }
    }
    ctx->pc = 0x37C254u;
    // 0x37c254: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37C254u;
    {
        const bool branch_taken_0x37c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c254) {
            ctx->pc = 0x37C2C0u;
            goto label_37c2c0;
        }
    }
    ctx->pc = 0x37C25Cu;
    // 0x37c25c: 0x0  nop
    ctx->pc = 0x37c25cu;
    // NOP
label_37c260:
    // 0x37c260: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x37C260u;
    SET_GPR_U32(ctx, 31, 0x37C268u);
    ctx->pc = 0x37C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C260u;
    // 0x37c264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x37C260u, 0x37C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C268u;
label_37c268:
    // 0x37c268: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x37c268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c26c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x37c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x37c270: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x37c270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x37c274: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x37c274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x37c278: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x37c278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37c27c: 0x0  nop
    ctx->pc = 0x37c27cu;
    // NOP
    // 0x37c280: 0x0  nop
    ctx->pc = 0x37c280u;
    // NOP
    // 0x37c284: 0x1010  mfhi        $v0
    ctx->pc = 0x37c284u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37c288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c28c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x37c28cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x37c290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c294: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x37C294u;
    SET_GPR_U32(ctx, 31, 0x37C29Cu);
    ctx->pc = 0x37C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C294u;
    // 0x37c298: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x37C294u, 0x37C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C29Cu;
label_37c29c:
    // 0x37c29c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x37c29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c2a0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x37c2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x37c2a4: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x37c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37c2a8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x37c2a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37c2ac: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x37C2ACu;
    SET_GPR_U32(ctx, 31, 0x37C2B4u);
    ctx->pc = 0x37C2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C2ACu;
    // 0x37c2b0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x37C2ACu, 0x37C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2B4u;
label_37c2b4:
    // 0x37c2b4: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x37c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37c2b8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x37c2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c2bc: 0x0  nop
    ctx->pc = 0x37c2bcu;
    // NOP
label_37c2c0:
    // 0x37c2c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37c2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c2c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c2c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x37C2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2CCu;
        // 0x37c2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C2D4u;
}
