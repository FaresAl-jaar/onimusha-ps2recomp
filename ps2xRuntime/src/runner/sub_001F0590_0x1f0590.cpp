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

// Function: sub_001F0590
// Address: 0x1f0590 - 0x1f062c
void sub_001F0590_0x1f0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0590_0x1f0590");
#endif

    switch (ctx->pc) {
        case 0x1f0590u: goto label_1f0590;
        case 0x1f0594u: goto label_1f0594;
        case 0x1f0598u: goto label_1f0598;
        case 0x1f059cu: goto label_1f059c;
        case 0x1f05a0u: goto label_1f05a0;
        case 0x1f05a4u: goto label_1f05a4;
        case 0x1f05a8u: goto label_1f05a8;
        case 0x1f05acu: goto label_1f05ac;
        case 0x1f05b0u: goto label_1f05b0;
        case 0x1f05b4u: goto label_1f05b4;
        case 0x1f05b8u: goto label_1f05b8;
        case 0x1f05bcu: goto label_1f05bc;
        case 0x1f05c0u: goto label_1f05c0;
        case 0x1f05c4u: goto label_1f05c4;
        case 0x1f05c8u: goto label_1f05c8;
        case 0x1f05ccu: goto label_1f05cc;
        case 0x1f05d0u: goto label_1f05d0;
        case 0x1f05d4u: goto label_1f05d4;
        case 0x1f05d8u: goto label_1f05d8;
        case 0x1f05dcu: goto label_1f05dc;
        case 0x1f05e0u: goto label_1f05e0;
        case 0x1f05e4u: goto label_1f05e4;
        case 0x1f05e8u: goto label_1f05e8;
        case 0x1f05ecu: goto label_1f05ec;
        case 0x1f05f0u: goto label_1f05f0;
        case 0x1f05f4u: goto label_1f05f4;
        case 0x1f05f8u: goto label_1f05f8;
        case 0x1f05fcu: goto label_1f05fc;
        case 0x1f0600u: goto label_1f0600;
        case 0x1f0604u: goto label_1f0604;
        case 0x1f0608u: goto label_1f0608;
        case 0x1f060cu: goto label_1f060c;
        case 0x1f0610u: goto label_1f0610;
        case 0x1f0614u: goto label_1f0614;
        case 0x1f0618u: goto label_1f0618;
        case 0x1f061cu: goto label_1f061c;
        case 0x1f0620u: goto label_1f0620;
        case 0x1f0624u: goto label_1f0624;
        case 0x1f0628u: goto label_1f0628;
        default: break;
    }

    ctx->pc = 0x1f0590u;

label_1f0590:
    // 0x1f0590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f0590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f0594:
    // 0x1f0594: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f0594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f0598:
    // 0x1f0598: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f0598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f059c:
    // 0x1f059c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f05a0:
    // 0x1f05a0: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x1f05a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1f05a4:
    // 0x1f05a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f05a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f05a8:
    // 0x1f05a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f05a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f05ac:
    // 0x1f05ac: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1f05acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1f05b0:
    // 0x1f05b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f05b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f05b4:
    // 0x1f05b4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f05b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f05b8:
    // 0x1f05b8: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x1f05b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_1f05bc:
    // 0x1f05bc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1f05c0:
    if (ctx->pc == 0x1F05C0u) {
        ctx->pc = 0x1F05C4u;
        goto label_1f05c4;
    }
    ctx->pc = 0x1F05BCu;
    {
        const bool branch_taken_0x1f05bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05bc) {
            ctx->pc = 0x1F0610u;
            goto label_1f0610;
        }
    }
    ctx->pc = 0x1F05C4u;
label_1f05c4:
    // 0x1f05c4: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x1f05c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1f05c8:
    // 0x1f05c8: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x1f05c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1f05cc:
    // 0x1f05cc: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x1f05ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1f05d0:
    // 0x1f05d0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f05d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f05d4:
    // 0x1f05d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f05d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f05d8:
    // 0x1f05d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f05d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f05dc:
    // 0x1f05dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f05dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f05e0:
    // 0x1f05e0: 0x320f809  jalr        $t9
label_1f05e4:
    if (ctx->pc == 0x1F05E4u) {
        ctx->pc = 0x1F05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05E0u;
        // 0x1f05e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F05E8u;
        goto label_1f05e8;
    }
    ctx->pc = 0x1F05E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F05E8u);
        ctx->pc = 0x1F05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05E0u;
        // 0x1f05e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F05E0u, 0x1F05E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F05E8u;
label_1f05e8:
    // 0x1f05e8: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1f05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_1f05ec:
    // 0x1f05ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1f05f0:
    // 0x1f05f0: 0x94630580  lhu         $v1, 0x580($v1)
    ctx->pc = 0x1f05f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1408)));
label_1f05f4:
    // 0x1f05f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f05f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f05f8:
    // 0x1f05f8: 0x0  nop
    ctx->pc = 0x1f05f8u;
    // NOP
label_1f05fc:
    // 0x1f05fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f05fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f0600:
    // 0x1f0600: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x1f0600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
label_1f0604:
    // 0x1f0604: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f0604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f0608:
    // 0x1f0608: 0xac710054  sw          $s1, 0x54($v1)
    ctx->pc = 0x1f0608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 17));
label_1f060c:
    // 0x1f060c: 0x0  nop
    ctx->pc = 0x1f060cu;
    // NOP
label_1f0610:
    // 0x1f0610: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f0610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0614:
    // 0x1f0614: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f0614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0618:
    // 0x1f0618: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f061c:
    // 0x1f061c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f061cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0620:
    // 0x1f0620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0624:
    // 0x1f0624: 0x3e00008  jr          $ra
label_1f0628:
    if (ctx->pc == 0x1F0628u) {
        ctx->pc = 0x1F0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0624u;
        // 0x1f0628: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F062Cu;
        goto label_fallthrough_0x1f0624;
    }
    ctx->pc = 0x1F0624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0624u;
        // 0x1f0628: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f0624:
    ctx->pc = 0x1F062Cu;
}
