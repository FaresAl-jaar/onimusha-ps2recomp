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

// Function: sub_002F31C0
// Address: 0x2f31c0 - 0x2f3238
void sub_002F31C0_0x2f31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F31C0_0x2f31c0");
#endif

    switch (ctx->pc) {
        case 0x2f31d8u: goto label_2f31d8;
        default: break;
    }

    ctx->pc = 0x2f31c0u;

    // 0x2f31c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f31c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f31c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f31c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f31cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f31ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f31d0: 0xc0bcc14  jal         func_2F3050
    ctx->pc = 0x2F31D0u;
    SET_GPR_U32(ctx, 31, 0x2F31D8u);
    ctx->pc = 0x2F31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31D0u;
    // 0x2f31d4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3050u, 0x2F31D0u, 0x2F31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31D8u;
label_2f31d8:
    // 0x2f31d8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F31D8u;
    {
        const bool branch_taken_0x2f31d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31D8u;
        // 0x2f31dc: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31d8) {
            ctx->pc = 0x2F31F8u;
            goto label_2f31f8;
        }
    }
    ctx->pc = 0x2F31E0u;
    // 0x2f31e0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f31e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f31e4: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x2f31e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2f31e8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2f31e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2f31ec: 0x24420e00  addiu       $v0, $v0, 0xE00
    ctx->pc = 0x2f31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    // 0x2f31f0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f31f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f31f4: 0x0  nop
    ctx->pc = 0x2f31f4u;
    // NOP
label_2f31f8:
    // 0x2f31f8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f31f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f31fc: 0x30430f00  andi        $v1, $v0, 0xF00
    ctx->pc = 0x2f31fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2f3200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3204: 0x32203  sra         $a0, $v1, 8
    ctx->pc = 0x2f3204u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f3208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f320c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f320cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f3210: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2f3210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f3214: 0x24638f98  addiu       $v1, $v1, -0x7068
    ctx->pc = 0x2f3214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938520));
    // 0x2f3218: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f3218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2f321c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f3220: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2f3220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f3224: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2f3224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f322c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f322cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3230: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3230u;
        // 0x2f3234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3238u;
}
