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

// Function: sub_002578C0
// Address: 0x2578c0 - 0x257974
void sub_002578C0_0x2578c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002578C0_0x2578c0");
#endif

    switch (ctx->pc) {
        case 0x25791cu: goto label_25791c;
        default: break;
    }

    ctx->pc = 0x2578c0u;

    // 0x2578c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2578c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2578c4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2578c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2578c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2578c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2578cc: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2578ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2578d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2578d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2578d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2578d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2578d8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2578d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2578dc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2578DCu;
    {
        const bool branch_taken_0x2578dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2578E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578DCu;
        // 0x2578e0: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578dc) {
            ctx->pc = 0x2578F0u;
            goto label_2578f0;
        }
    }
    ctx->pc = 0x2578E4u;
    // 0x2578e4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2578E4u;
    {
        const bool branch_taken_0x2578e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578E4u;
        // 0x2578e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578e4) {
            ctx->pc = 0x257960u;
            goto label_257960;
        }
    }
    ctx->pc = 0x2578ECu;
    // 0x2578ec: 0x0  nop
    ctx->pc = 0x2578ecu;
    // NOP
label_2578f0:
    // 0x2578f0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2578f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2578f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2578F4u;
    {
        const bool branch_taken_0x2578f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2578F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578F4u;
        // 0x2578f8: 0x3122ffff  andi        $v0, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578f4) {
            ctx->pc = 0x25790Cu;
            goto label_25790c;
        }
    }
    ctx->pc = 0x2578FCu;
    // 0x2578fc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2578fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257900: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x257900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x257904: 0x84630022  lh          $v1, 0x22($v1)
    ctx->pc = 0x257904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x257908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25790c:
    // 0x25790c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x25790cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257910: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x257910u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257914: 0xc095ee0  jal         func_257B80
    ctx->pc = 0x257914u;
    SET_GPR_U32(ctx, 31, 0x25791Cu);
    ctx->pc = 0x257918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257914u;
    // 0x257918: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257B80u, 0x257914u, 0x25791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25791Cu;
label_25791c:
    // 0x25791c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25791cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257920: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x257920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x257924: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257924u;
    {
        const bool branch_taken_0x257924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x257928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257924u;
        // 0x257928: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257924) {
            ctx->pc = 0x257948u;
            goto label_257948;
        }
    }
    ctx->pc = 0x25792Cu;
    // 0x25792c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x25792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x257930: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x257930u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x257934: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x257934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x257938: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25793c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x257940: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x257940u;
    {
        const bool branch_taken_0x257940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257940u;
        // 0x257944: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257940) {
            ctx->pc = 0x257960u;
            goto label_257960;
        }
    }
    ctx->pc = 0x257948u;
label_257948:
    // 0x257948: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x257948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x25794c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x25794cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x257950: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x257950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x257954: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x257954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257958: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x257958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25795c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25795cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_257960:
    // 0x257960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x257960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25796c: 0x3e00008  jr          $ra
    ctx->pc = 0x25796Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25796Cu;
        // 0x257970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25796Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257974u;
}
