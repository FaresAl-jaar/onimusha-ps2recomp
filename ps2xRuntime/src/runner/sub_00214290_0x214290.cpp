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

// Function: sub_00214290
// Address: 0x214290 - 0x214340
void sub_00214290_0x214290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214290_0x214290");
#endif

    switch (ctx->pc) {
        case 0x2142a4u: goto label_2142a4;
        default: break;
    }

    ctx->pc = 0x214290u;

    // 0x214290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21429c: 0xc085202  jal         func_214808
    ctx->pc = 0x21429Cu;
    SET_GPR_U32(ctx, 31, 0x2142A4u);
    ctx->pc = 0x2142A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21429Cu;
    // 0x2142a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214808u, 0x21429Cu, 0x2142A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142A4u;
label_2142a4:
    // 0x2142a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2142a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2142a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2142ac: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2142acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2142b0: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2142B0u;
    {
        const bool branch_taken_0x2142b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2142B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142B0u;
        // 0x2142b4: 0x26070d30  addiu       $a3, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142b0) {
            ctx->pc = 0x214330u;
            goto label_214330;
        }
    }
    ctx->pc = 0x2142B8u;
    // 0x2142b8: 0x8e061f7c  lw          $a2, 0x1F7C($s0)
    ctx->pc = 0x2142b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    // 0x2142bc: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x2142bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2142c0: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2142C0u;
    {
        const bool branch_taken_0x2142c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2142C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142C0u;
        // 0x2142c4: 0x2608090c  addiu       $t0, $s0, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142c0) {
            ctx->pc = 0x214330u;
            goto label_214330;
        }
    }
    ctx->pc = 0x2142C8u;
    // 0x2142c8: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x2142c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2142cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2142ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2142d0: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x2142d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x2142d4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2142D4u;
    {
        const bool branch_taken_0x2142d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2142D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142D4u;
        // 0x2142d8: 0xfce20158  sd          $v0, 0x158($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 344), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142d4) {
            ctx->pc = 0x214330u;
            goto label_214330;
        }
    }
    ctx->pc = 0x2142DCu;
    // 0x2142dc: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x2142dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2142e0: 0xdce40150  ld          $a0, 0x150($a3)
    ctx->pc = 0x2142e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x2142e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2142e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2142e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2142e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2142ec: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x2142ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x2142f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2142f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2142f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2142f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2142f8: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x2142f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2142fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2142fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x214300: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x214300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x214304: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x214304u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x214308: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x214308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x21430c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x21430cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x214310: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x214310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x214314: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x214314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x214318: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x214318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21431c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x21431cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x214320: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x214320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x214324: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x214324u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x214328: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x214328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x21432c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x21432cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_214330:
    // 0x214330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214338: 0x3e00008  jr          $ra
    ctx->pc = 0x214338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214338u;
        // 0x21433c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214340u;
}
