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

// Function: sub_00339790
// Address: 0x339790 - 0x339860
void sub_00339790_0x339790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339790_0x339790");
#endif

    switch (ctx->pc) {
        case 0x3397fcu: goto label_3397fc;
        case 0x339850u: goto label_339850;
        default: break;
    }

    ctx->pc = 0x339790u;

    // 0x339790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339794: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x339794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x339798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33979c: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x33979cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3397a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3397a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3397a4: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3397a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3397a8: 0x8f8885b0  lw          $t0, -0x7A50($gp)
    ctx->pc = 0x3397a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x3397ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3397acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3397b0: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x3397b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3397b4: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x3397b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3397b8: 0x24e7eea0  addiu       $a3, $a3, -0x1160
    ctx->pc = 0x3397b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962848));
    // 0x3397bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3397bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3397c0: 0x8282b  sltu        $a1, $zero, $t0
    ctx->pc = 0x3397c0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3397c4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3397c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3397c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3397c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3397cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3397ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3397d0: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x3397d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3397d4: 0x1810  mfhi        $v1
    ctx->pc = 0x3397d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3397d8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3397d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3397dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3397dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3397e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3397e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3397e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3397e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3397e8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3397e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3397ec: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3397ECu;
    {
        const bool branch_taken_0x3397ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3397ec) {
            ctx->pc = 0x339840u;
            goto label_339840;
        }
    }
    ctx->pc = 0x3397F4u;
    // 0x3397f4: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x3397F4u;
    SET_GPR_U32(ctx, 31, 0x3397FCu);
    ctx->pc = 0x3397F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3397F4u;
    // 0x3397f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x3397F4u, 0x3397FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3397FCu;
label_3397fc:
    // 0x3397fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3397fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339800: 0x8f858ba8  lw          $a1, -0x7458($gp)
    ctx->pc = 0x339800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x339804: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x339804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x339808: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x339808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33980c: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x33980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x339810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339814: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x339814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x339818: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x339818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33981c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33981cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x339820: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x339820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x339824: 0x9063005b  lbu         $v1, 0x5B($v1)
    ctx->pc = 0x339824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 91)));
    // 0x339828: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x339828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x33982c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x33982cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x339830: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x339830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x339834: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x339834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x339838: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x339838u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33983c: 0x0  nop
    ctx->pc = 0x33983cu;
    // NOP
label_339840:
    // 0x339840: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x339840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x339844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339848: 0xc0ce590  jal         func_339640
    ctx->pc = 0x339848u;
    SET_GPR_U32(ctx, 31, 0x339850u);
    ctx->pc = 0x33984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339848u;
    // 0x33984c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x339848u, 0x339850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339850u;
label_339850:
    // 0x339850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339858: 0x3e00008  jr          $ra
    ctx->pc = 0x339858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339858u;
        // 0x33985c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339860u;
}
