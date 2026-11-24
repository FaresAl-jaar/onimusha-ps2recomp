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

// Function: sub_003B28B0
// Address: 0x3b28b0 - 0x3b29dc
void sub_003B28B0_0x3b28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B28B0_0x3b28b0");
#endif

    switch (ctx->pc) {
        case 0x3b28ccu: goto label_3b28cc;
        case 0x3b292cu: goto label_3b292c;
        case 0x3b2950u: goto label_3b2950;
        default: break;
    }

    ctx->pc = 0x3b28b0u;

    // 0x3b28b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b28b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b28b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b28b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b28b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b28bc: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x3b28bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x3b28c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b28c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b28c4: 0xc049590  jal         func_125640
    ctx->pc = 0x3B28C4u;
    SET_GPR_U32(ctx, 31, 0x3B28CCu);
    ctx->pc = 0x3B28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B28C4u;
    // 0x3b28c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3B28C4u, 0x3B28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B28CCu;
label_3b28cc:
    // 0x3b28cc: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x3b28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x3b28d0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3b28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3b28d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3b28d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3b28d8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3b28d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3b28dc: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x3b28dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x3b28e0: 0x24a5dd90  addiu       $a1, $a1, -0x2270
    ctx->pc = 0x3b28e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958480));
    // 0x3b28e4: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x3b28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x3b28e8: 0xae0500d8  sw          $a1, 0xD8($s0)
    ctx->pc = 0x3b28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 5));
    // 0x3b28ec: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x3b28ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x3b28f0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3b28f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3b28f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3b28f8: 0xae0500d4  sw          $a1, 0xD4($s0)
    ctx->pc = 0x3b28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
    // 0x3b28fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b28fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b2900: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3b2900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3b2904: 0x27878060  addiu       $a3, $gp, -0x7FA0
    ctx->pc = 0x3b2904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3b2908: 0x2484ddb0  addiu       $a0, $a0, -0x2250
    ctx->pc = 0x3b2908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958512));
    // 0x3b290c: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x3b290cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3b2910: 0x24c6ddd0  addiu       $a2, $a2, -0x2230
    ctx->pc = 0x3b2910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958544));
    // 0x3b2914: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b2914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b2918: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3b2918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3b291c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2920: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x3b2920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x3b2924: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3B2924u;
    SET_GPR_U32(ctx, 31, 0x3B292Cu);
    ctx->pc = 0x3B2928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2924u;
    // 0x3b2928: 0xae0300b0  sw          $v1, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3B2924u, 0x3B292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B292Cu;
label_3b292c:
    // 0x3b292c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b292cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3b2930: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3b2930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3b2934: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3b2934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3b2938: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3b2938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3b293c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b293cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b2940: 0x2484ddc0  addiu       $a0, $a0, -0x2240
    ctx->pc = 0x3b2940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958528));
    // 0x3b2944: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x3b2944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x3b2948: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3B2948u;
    SET_GPR_U32(ctx, 31, 0x3B2950u);
    ctx->pc = 0x3B294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2948u;
    // 0x3b294c: 0x24c6dde0  addiu       $a2, $a2, -0x2220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3B2948u, 0x3B2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2950u;
label_3b2950:
    // 0x3b2950: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3b2950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3b2954: 0x24030684  addiu       $v1, $zero, 0x684
    ctx->pc = 0x3b2954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1668));
    // 0x3b2958: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x3b2958u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3b295c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B295Cu;
    {
        const bool branch_taken_0x3b295c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B295Cu;
        // 0x3b2960: 0x24030683  addiu       $v1, $zero, 0x683 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1667));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b295c) {
            ctx->pc = 0x3B29B0u;
            goto label_3b29b0;
        }
    }
    ctx->pc = 0x3B2964u;
    // 0x3b2964: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B2964u;
    {
        const bool branch_taken_0x3b2964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b2964) {
            ctx->pc = 0x3B29B0u;
            goto label_3b29b0;
        }
    }
    ctx->pc = 0x3B296Cu;
    // 0x3b296c: 0x24030682  addiu       $v1, $zero, 0x682
    ctx->pc = 0x3b296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1666));
    // 0x3b2970: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3B2970u;
    {
        const bool branch_taken_0x3b2970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2970u;
        // 0x3b2974: 0x24030681  addiu       $v1, $zero, 0x681 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1665));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2970) {
            ctx->pc = 0x3B29B0u;
            goto label_3b29b0;
        }
    }
    ctx->pc = 0x3B2978u;
    // 0x3b2978: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B2978u;
    {
        const bool branch_taken_0x3b2978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b2978) {
            ctx->pc = 0x3B29B0u;
            goto label_3b29b0;
        }
    }
    ctx->pc = 0x3B2980u;
    // 0x3b2980: 0x24030680  addiu       $v1, $zero, 0x680
    ctx->pc = 0x3b2980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x3b2984: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B2984u;
    {
        const bool branch_taken_0x3b2984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2984u;
        // 0x3b2988: 0x24030182  addiu       $v1, $zero, 0x182 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2984) {
            ctx->pc = 0x3B29B0u;
            goto label_3b29b0;
        }
    }
    ctx->pc = 0x3B298Cu;
    // 0x3b298c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B298Cu;
    {
        const bool branch_taken_0x3b298c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b298c) {
            ctx->pc = 0x3B29A0u;
            goto label_3b29a0;
        }
    }
    ctx->pc = 0x3B2994u;
    // 0x3b2994: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B2994u;
    {
        const bool branch_taken_0x3b2994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2994) {
            ctx->pc = 0x3B29C0u;
            goto label_3b29c0;
        }
    }
    ctx->pc = 0x3B299Cu;
    // 0x3b299c: 0x0  nop
    ctx->pc = 0x3b299cu;
    // NOP
label_3b29a0:
    // 0x3b29a0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3b29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3b29a4: 0x2463ddf0  addiu       $v1, $v1, -0x2210
    ctx->pc = 0x3b29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958576));
    // 0x3b29a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B29A8u;
    {
        const bool branch_taken_0x3b29a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B29A8u;
        // 0x3b29ac: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b29a8) {
            ctx->pc = 0x3B29C0u;
            goto label_3b29c0;
        }
    }
    ctx->pc = 0x3B29B0u;
label_3b29b0:
    // 0x3b29b0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3b29b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3b29b4: 0x2463dd90  addiu       $v1, $v1, -0x2270
    ctx->pc = 0x3b29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958480));
    // 0x3b29b8: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x3b29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x3b29bc: 0x0  nop
    ctx->pc = 0x3b29bcu;
    // NOP
label_3b29c0:
    // 0x3b29c0: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x3b29c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b29c4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3b29c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3b29c8: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3b29c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x3b29cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b29ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b29d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b29d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b29d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B29D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B29D4u;
        // 0x3b29d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B29D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B29DCu;
}
