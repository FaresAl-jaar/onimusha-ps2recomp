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

// Function: sub_0021B890
// Address: 0x21b890 - 0x21b9bc
void sub_0021B890_0x21b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B890_0x21b890");
#endif

    switch (ctx->pc) {
        case 0x21b904u: goto label_21b904;
        case 0x21b914u: goto label_21b914;
        case 0x21b928u: goto label_21b928;
        case 0x21b944u: goto label_21b944;
        case 0x21b954u: goto label_21b954;
        case 0x21b968u: goto label_21b968;
        case 0x21b978u: goto label_21b978;
        case 0x21b988u: goto label_21b988;
        default: break;
    }

    ctx->pc = 0x21b890u;

    // 0x21b890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21b894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b89c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x21b89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b8a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21b8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21b8ac: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x21b8acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8b0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x21b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x21b8b4: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x21b8b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x21b8b8: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x21b8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x21b8bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b8c0: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x21b8c0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x21b8c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21b8c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21b8cc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x21b8ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8d0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x21b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x21b8d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x21b8d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21b8dc: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x21b8dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21b8e0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x21b8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x21b8e4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x21b8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8e8: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x21B8E8u;
    {
        const bool branch_taken_0x21b8e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8E8u;
        // 0x21b8ec: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8e8) {
            ctx->pc = 0x21B98Cu;
            goto label_21b98c;
        }
    }
    ctx->pc = 0x21B8F0u;
    // 0x21b8f0: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x21B8F0u;
    {
        const bool branch_taken_0x21b8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b8f0) {
            ctx->pc = 0x21B8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B8F0u;
            // 0x21b8f4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B930u;
            goto label_21b930;
        }
    }
    ctx->pc = 0x21B8F8u;
    // 0x21b8f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21b8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8fc: 0xc049522  jal         func_125488
    ctx->pc = 0x21B8FCu;
    SET_GPR_U32(ctx, 31, 0x21B904u);
    ctx->pc = 0x21B900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8FCu;
    // 0x21b900: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x21B8FCu, 0x21B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B904u;
label_21b904:
    // 0x21b904: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21b904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b908: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x21b908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x21b90c: 0xc049522  jal         func_125488
    ctx->pc = 0x21B90Cu;
    SET_GPR_U32(ctx, 31, 0x21B914u);
    ctx->pc = 0x21B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B90Cu;
    // 0x21b910: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x21B90Cu, 0x21B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B914u;
label_21b914:
    // 0x21b914: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x21b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x21b918: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x21b918u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x21b91c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21b91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b920: 0xc049522  jal         func_125488
    ctx->pc = 0x21B920u;
    SET_GPR_U32(ctx, 31, 0x21B928u);
    ctx->pc = 0x21B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B920u;
    // 0x21b924: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x21B920u, 0x21B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B928u;
label_21b928:
    // 0x21b928: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21B928u;
    {
        const bool branch_taken_0x21b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B928u;
        // 0x21b92c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b928) {
            ctx->pc = 0x21B98Cu;
            goto label_21b98c;
        }
    }
    ctx->pc = 0x21B930u;
label_21b930:
    // 0x21b930: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x21b930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21b934: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21B934u;
    {
        const bool branch_taken_0x21b934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B934u;
        // 0x21b938: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b934) {
            ctx->pc = 0x21B970u;
            goto label_21b970;
        }
    }
    ctx->pc = 0x21B93Cu;
    // 0x21b93c: 0xc049522  jal         func_125488
    ctx->pc = 0x21B93Cu;
    SET_GPR_U32(ctx, 31, 0x21B944u);
    ctx->pc = 0x21B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B93Cu;
    // 0x21b940: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x21B93Cu, 0x21B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B944u;
label_21b944:
    // 0x21b944: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21b944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b948: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21b948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b94c: 0xc049522  jal         func_125488
    ctx->pc = 0x21B94Cu;
    SET_GPR_U32(ctx, 31, 0x21B954u);
    ctx->pc = 0x21B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B94Cu;
    // 0x21b950: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x21B94Cu, 0x21B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B954u;
label_21b954:
    // 0x21b954: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x21b954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x21b958: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x21b958u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x21b95c: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x21b95cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x21b960: 0xc049522  jal         func_125488
    ctx->pc = 0x21B960u;
    SET_GPR_U32(ctx, 31, 0x21B968u);
    ctx->pc = 0x21B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B960u;
    // 0x21b964: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x21B960u, 0x21B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B968u;
label_21b968:
    // 0x21b968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21B968u;
    {
        const bool branch_taken_0x21b968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B968u;
        // 0x21b96c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b968) {
            ctx->pc = 0x21B98Cu;
            goto label_21b98c;
        }
    }
    ctx->pc = 0x21B970u;
label_21b970:
    // 0x21b970: 0xc049522  jal         func_125488
    ctx->pc = 0x21B970u;
    SET_GPR_U32(ctx, 31, 0x21B978u);
    ctx->pc = 0x21B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B970u;
    // 0x21b974: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x21B970u, 0x21B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B978u;
label_21b978:
    // 0x21b978: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x21b978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b97c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21b97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b980: 0xc049522  jal         func_125488
    ctx->pc = 0x21B980u;
    SET_GPR_U32(ctx, 31, 0x21B988u);
    ctx->pc = 0x21B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B980u;
    // 0x21b984: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x21B980u, 0x21B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B988u;
label_21b988:
    // 0x21b988: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x21b988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_21b98c:
    // 0x21b98c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b998: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21b998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b99c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21b99cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b9a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21b9a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b9a4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21b9a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b9a8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x21b9a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21b9ac: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x21b9acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b9b0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21b9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21b9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x21B9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9B4u;
        // 0x21b9b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B9BCu;
}
