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

// Function: sub_0029F8F0
// Address: 0x29f8f0 - 0x29f9a0
void sub_0029F8F0_0x29f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F8F0_0x29f8f0");
#endif

    switch (ctx->pc) {
        case 0x29f8f0u: goto label_29f8f0;
        case 0x29f8f4u: goto label_29f8f4;
        case 0x29f8f8u: goto label_29f8f8;
        case 0x29f8fcu: goto label_29f8fc;
        case 0x29f900u: goto label_29f900;
        case 0x29f904u: goto label_29f904;
        case 0x29f908u: goto label_29f908;
        case 0x29f90cu: goto label_29f90c;
        case 0x29f910u: goto label_29f910;
        case 0x29f914u: goto label_29f914;
        case 0x29f918u: goto label_29f918;
        case 0x29f91cu: goto label_29f91c;
        case 0x29f920u: goto label_29f920;
        case 0x29f924u: goto label_29f924;
        case 0x29f928u: goto label_29f928;
        case 0x29f92cu: goto label_29f92c;
        case 0x29f930u: goto label_29f930;
        case 0x29f934u: goto label_29f934;
        case 0x29f938u: goto label_29f938;
        case 0x29f93cu: goto label_29f93c;
        case 0x29f940u: goto label_29f940;
        case 0x29f944u: goto label_29f944;
        case 0x29f948u: goto label_29f948;
        case 0x29f94cu: goto label_29f94c;
        case 0x29f950u: goto label_29f950;
        case 0x29f954u: goto label_29f954;
        case 0x29f958u: goto label_29f958;
        case 0x29f95cu: goto label_29f95c;
        case 0x29f960u: goto label_29f960;
        case 0x29f964u: goto label_29f964;
        case 0x29f968u: goto label_29f968;
        case 0x29f96cu: goto label_29f96c;
        case 0x29f970u: goto label_29f970;
        case 0x29f974u: goto label_29f974;
        case 0x29f978u: goto label_29f978;
        case 0x29f97cu: goto label_29f97c;
        case 0x29f980u: goto label_29f980;
        case 0x29f984u: goto label_29f984;
        case 0x29f988u: goto label_29f988;
        case 0x29f98cu: goto label_29f98c;
        case 0x29f990u: goto label_29f990;
        case 0x29f994u: goto label_29f994;
        case 0x29f998u: goto label_29f998;
        case 0x29f99cu: goto label_29f99c;
        default: break;
    }

    ctx->pc = 0x29f8f0u;

label_29f8f0:
    // 0x29f8f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_29f8f4:
    // 0x29f8f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_29f8f8:
    // 0x29f8f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_29f8fc:
    // 0x29f8fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_29f900:
    // 0x29f900: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x29f900u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29f904:
    // 0x29f904: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29f908:
    // 0x29f908: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29f908u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f90c:
    // 0x29f90c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29f90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29f910:
    // 0x29f910: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29f914:
    // 0x29f914: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29f918:
    // 0x29f918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29f91c:
    // 0x29f91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29f920:
    // 0x29f920: 0x8c95007c  lw          $s5, 0x7C($a0)
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_29f924:
    // 0x29f924: 0x94940068  lhu         $s4, 0x68($a0)
    ctx->pc = 0x29f924u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
label_29f928:
    // 0x29f928: 0x8eb1000c  lw          $s1, 0xC($s5)
    ctx->pc = 0x29f928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_29f92c:
    // 0x29f92c: 0x92b20001  lbu         $s2, 0x1($s5)
    ctx->pc = 0x29f92cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_29f930:
    // 0x29f930: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29f930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f934:
    // 0x29f934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29f934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f938:
    // 0x29f938: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x29f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_29f93c:
    // 0x29f93c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x29f93cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f940:
    // 0x29f940: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29f940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29f944:
    // 0x29f944: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29f944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29f948:
    // 0x29f948: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x29f948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f94c:
    // 0x29f94c: 0x2e0f809  jalr        $s7
label_29f950:
    if (ctx->pc == 0x29F950u) {
        ctx->pc = 0x29F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F94Cu;
        // 0x29f950: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F954u;
        goto label_29f954;
    }
    ctx->pc = 0x29F94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x29F954u);
        ctx->pc = 0x29F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F94Cu;
        // 0x29f950: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F94Cu, 0x29F954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F954u;
label_29f954:
    // 0x29f954: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29f954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29f958:
    // 0x29f958: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x29f958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_29f95c:
    // 0x29f95c: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x29f95cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_29f960:
    // 0x29f960: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_29f964:
    if (ctx->pc == 0x29F964u) {
        ctx->pc = 0x29F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F960u;
        // 0x29f964: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F968u;
        goto label_29f968;
    }
    ctx->pc = 0x29F960u;
    {
        const bool branch_taken_0x29f960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F960u;
        // 0x29f964: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f960) {
            ctx->pc = 0x29F938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f938;
        }
    }
    ctx->pc = 0x29F968u;
label_29f968:
    // 0x29f968: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x29f968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_29f96c:
    // 0x29f96c: 0x1e80ffee  bgtz        $s4, . + 4 + (-0x12 << 2)
label_29f970:
    if (ctx->pc == 0x29F970u) {
        ctx->pc = 0x29F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F96Cu;
        // 0x29f970: 0x26b501f0  addiu       $s5, $s5, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F974u;
        goto label_29f974;
    }
    ctx->pc = 0x29F96Cu;
    {
        const bool branch_taken_0x29f96c = (GPR_S64(ctx, 20) > 0);
        ctx->pc = 0x29F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F96Cu;
        // 0x29f970: 0x26b501f0  addiu       $s5, $s5, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f96c) {
            ctx->pc = 0x29F928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f928;
        }
    }
    ctx->pc = 0x29F974u;
label_29f974:
    // 0x29f974: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29f974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29f978:
    // 0x29f978: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29f978u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29f97c:
    // 0x29f97c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29f97cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29f980:
    // 0x29f980: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29f980u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29f984:
    // 0x29f984: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29f984u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29f988:
    // 0x29f988: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29f988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29f98c:
    // 0x29f98c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f98cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f990:
    // 0x29f990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29f994:
    // 0x29f994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29f998:
    // 0x29f998: 0x3e00008  jr          $ra
label_29f99c:
    if (ctx->pc == 0x29F99Cu) {
        ctx->pc = 0x29F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F998u;
        // 0x29f99c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F9A0u;
        goto label_fallthrough_0x29f998;
    }
    ctx->pc = 0x29F998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F998u;
        // 0x29f99c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29f998:
    ctx->pc = 0x29F9A0u;
}
