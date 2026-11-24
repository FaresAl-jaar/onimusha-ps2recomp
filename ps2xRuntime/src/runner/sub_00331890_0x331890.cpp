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

// Function: sub_00331890
// Address: 0x331890 - 0x331974
void sub_00331890_0x331890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331890_0x331890");
#endif

    switch (ctx->pc) {
        case 0x3318d0u: goto label_3318d0;
        case 0x3318e0u: goto label_3318e0;
        case 0x33191cu: goto label_33191c;
        case 0x331924u: goto label_331924;
        case 0x331954u: goto label_331954;
        default: break;
    }

    ctx->pc = 0x331890u;

    // 0x331890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x331890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x331894: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x331894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x331898: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x331898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33189c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x33189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3318a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3318a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3318a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3318a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3318a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3318a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3318acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3318b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3318b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3318b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3318b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3318b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3318bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3318bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318c0: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3318c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3318c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3318c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3318c8: 0xc0bd2ec  jal         func_2F4BB0
    ctx->pc = 0x3318C8u;
    SET_GPR_U32(ctx, 31, 0x3318D0u);
    ctx->pc = 0x3318CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3318C8u;
    // 0x3318cc: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4BB0u, 0x3318C8u, 0x3318D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3318D0u;
label_3318d0:
    // 0x3318d0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3318d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3318d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3318d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318d8: 0xc0bd2d4  jal         func_2F4B50
    ctx->pc = 0x3318D8u;
    SET_GPR_U32(ctx, 31, 0x3318E0u);
    ctx->pc = 0x3318DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3318D8u;
    // 0x3318dc: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B50u, 0x3318D8u, 0x3318E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3318E0u;
label_3318e0:
    // 0x3318e0: 0x52082b  sltu        $at, $v0, $s2
    ctx->pc = 0x3318e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3318e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3318E4u;
    {
        const bool branch_taken_0x3318e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3318e4) {
            ctx->pc = 0x3318F4u;
            goto label_3318f4;
        }
    }
    ctx->pc = 0x3318ECu;
    // 0x3318ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3318ECu;
    {
        const bool branch_taken_0x3318ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3318F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318ECu;
        // 0x3318f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3318ec) {
            ctx->pc = 0x3318F8u;
            goto label_3318f8;
        }
    }
    ctx->pc = 0x3318F4u;
label_3318f4:
    // 0x3318f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3318f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3318f8:
    // 0x3318f8: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x3318f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3318fc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3318fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331900: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x331900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x331904: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x331904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331908: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x331908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x33190c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33190cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331910: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x331910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x331914: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x331914u;
    SET_GPR_U32(ctx, 31, 0x33191Cu);
    ctx->pc = 0x331918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331914u;
    // 0x331918: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x331914u, 0x33191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33191Cu;
label_33191c:
    // 0x33191c: 0xc0e5d4c  jal         func_397530
    ctx->pc = 0x33191Cu;
    SET_GPR_U32(ctx, 31, 0x331924u);
    ctx->pc = 0x397530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397530u, 0x33191Cu, 0x331924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331924u;
label_331924:
    // 0x331924: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x331924u;
    {
        const bool branch_taken_0x331924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331924) {
            ctx->pc = 0x331958u;
            goto label_331958;
        }
    }
    ctx->pc = 0x33192Cu;
    // 0x33192c: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x33192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x331930: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x331930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x331934: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x331934u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x331938: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x331938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x33193c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x33193cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x331940: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x331940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x331944: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x331944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x331948: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x331948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33194c: 0xc095f88  jal         func_257E20
    ctx->pc = 0x33194Cu;
    SET_GPR_U32(ctx, 31, 0x331954u);
    ctx->pc = 0x331950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33194Cu;
    // 0x331950: 0x2529ce08  addiu       $t1, $t1, -0x31F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x33194Cu, 0x331954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331954u;
label_331954:
    // 0x331954: 0x0  nop
    ctx->pc = 0x331954u;
    // NOP
label_331958:
    // 0x331958: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x331958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33195c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33195cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33196c: 0x3e00008  jr          $ra
    ctx->pc = 0x33196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33196Cu;
        // 0x331970: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331974u;
}
