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

// Function: sub_0023E8D0
// Address: 0x23e8d0 - 0x23eb10
void sub_0023E8D0_0x23e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E8D0_0x23e8d0");
#endif

    switch (ctx->pc) {
        case 0x23e8d0u: goto label_23e8d0;
        case 0x23e8d4u: goto label_23e8d4;
        case 0x23e8d8u: goto label_23e8d8;
        case 0x23e8dcu: goto label_23e8dc;
        case 0x23e8e0u: goto label_23e8e0;
        case 0x23e8e4u: goto label_23e8e4;
        case 0x23e8e8u: goto label_23e8e8;
        case 0x23e8ecu: goto label_23e8ec;
        case 0x23e8f0u: goto label_23e8f0;
        case 0x23e8f4u: goto label_23e8f4;
        case 0x23e8f8u: goto label_23e8f8;
        case 0x23e8fcu: goto label_23e8fc;
        case 0x23e900u: goto label_23e900;
        case 0x23e904u: goto label_23e904;
        case 0x23e908u: goto label_23e908;
        case 0x23e90cu: goto label_23e90c;
        case 0x23e910u: goto label_23e910;
        case 0x23e914u: goto label_23e914;
        case 0x23e918u: goto label_23e918;
        case 0x23e91cu: goto label_23e91c;
        case 0x23e920u: goto label_23e920;
        case 0x23e924u: goto label_23e924;
        case 0x23e928u: goto label_23e928;
        case 0x23e92cu: goto label_23e92c;
        case 0x23e930u: goto label_23e930;
        case 0x23e934u: goto label_23e934;
        case 0x23e938u: goto label_23e938;
        case 0x23e93cu: goto label_23e93c;
        case 0x23e940u: goto label_23e940;
        case 0x23e944u: goto label_23e944;
        case 0x23e948u: goto label_23e948;
        case 0x23e94cu: goto label_23e94c;
        case 0x23e950u: goto label_23e950;
        case 0x23e954u: goto label_23e954;
        case 0x23e958u: goto label_23e958;
        case 0x23e95cu: goto label_23e95c;
        case 0x23e960u: goto label_23e960;
        case 0x23e964u: goto label_23e964;
        case 0x23e968u: goto label_23e968;
        case 0x23e96cu: goto label_23e96c;
        case 0x23e970u: goto label_23e970;
        case 0x23e974u: goto label_23e974;
        case 0x23e978u: goto label_23e978;
        case 0x23e97cu: goto label_23e97c;
        case 0x23e980u: goto label_23e980;
        case 0x23e984u: goto label_23e984;
        case 0x23e988u: goto label_23e988;
        case 0x23e98cu: goto label_23e98c;
        case 0x23e990u: goto label_23e990;
        case 0x23e994u: goto label_23e994;
        case 0x23e998u: goto label_23e998;
        case 0x23e99cu: goto label_23e99c;
        case 0x23e9a0u: goto label_23e9a0;
        case 0x23e9a4u: goto label_23e9a4;
        case 0x23e9a8u: goto label_23e9a8;
        case 0x23e9acu: goto label_23e9ac;
        case 0x23e9b0u: goto label_23e9b0;
        case 0x23e9b4u: goto label_23e9b4;
        case 0x23e9b8u: goto label_23e9b8;
        case 0x23e9bcu: goto label_23e9bc;
        case 0x23e9c0u: goto label_23e9c0;
        case 0x23e9c4u: goto label_23e9c4;
        case 0x23e9c8u: goto label_23e9c8;
        case 0x23e9ccu: goto label_23e9cc;
        case 0x23e9d0u: goto label_23e9d0;
        case 0x23e9d4u: goto label_23e9d4;
        case 0x23e9d8u: goto label_23e9d8;
        case 0x23e9dcu: goto label_23e9dc;
        case 0x23e9e0u: goto label_23e9e0;
        case 0x23e9e4u: goto label_23e9e4;
        case 0x23e9e8u: goto label_23e9e8;
        case 0x23e9ecu: goto label_23e9ec;
        case 0x23e9f0u: goto label_23e9f0;
        case 0x23e9f4u: goto label_23e9f4;
        case 0x23e9f8u: goto label_23e9f8;
        case 0x23e9fcu: goto label_23e9fc;
        case 0x23ea00u: goto label_23ea00;
        case 0x23ea04u: goto label_23ea04;
        case 0x23ea08u: goto label_23ea08;
        case 0x23ea0cu: goto label_23ea0c;
        case 0x23ea10u: goto label_23ea10;
        case 0x23ea14u: goto label_23ea14;
        case 0x23ea18u: goto label_23ea18;
        case 0x23ea1cu: goto label_23ea1c;
        case 0x23ea20u: goto label_23ea20;
        case 0x23ea24u: goto label_23ea24;
        case 0x23ea28u: goto label_23ea28;
        case 0x23ea2cu: goto label_23ea2c;
        case 0x23ea30u: goto label_23ea30;
        case 0x23ea34u: goto label_23ea34;
        case 0x23ea38u: goto label_23ea38;
        case 0x23ea3cu: goto label_23ea3c;
        case 0x23ea40u: goto label_23ea40;
        case 0x23ea44u: goto label_23ea44;
        case 0x23ea48u: goto label_23ea48;
        case 0x23ea4cu: goto label_23ea4c;
        case 0x23ea50u: goto label_23ea50;
        case 0x23ea54u: goto label_23ea54;
        case 0x23ea58u: goto label_23ea58;
        case 0x23ea5cu: goto label_23ea5c;
        case 0x23ea60u: goto label_23ea60;
        case 0x23ea64u: goto label_23ea64;
        case 0x23ea68u: goto label_23ea68;
        case 0x23ea6cu: goto label_23ea6c;
        case 0x23ea70u: goto label_23ea70;
        case 0x23ea74u: goto label_23ea74;
        case 0x23ea78u: goto label_23ea78;
        case 0x23ea7cu: goto label_23ea7c;
        case 0x23ea80u: goto label_23ea80;
        case 0x23ea84u: goto label_23ea84;
        case 0x23ea88u: goto label_23ea88;
        case 0x23ea8cu: goto label_23ea8c;
        case 0x23ea90u: goto label_23ea90;
        case 0x23ea94u: goto label_23ea94;
        case 0x23ea98u: goto label_23ea98;
        case 0x23ea9cu: goto label_23ea9c;
        case 0x23eaa0u: goto label_23eaa0;
        case 0x23eaa4u: goto label_23eaa4;
        case 0x23eaa8u: goto label_23eaa8;
        case 0x23eaacu: goto label_23eaac;
        case 0x23eab0u: goto label_23eab0;
        case 0x23eab4u: goto label_23eab4;
        case 0x23eab8u: goto label_23eab8;
        case 0x23eabcu: goto label_23eabc;
        case 0x23eac0u: goto label_23eac0;
        case 0x23eac4u: goto label_23eac4;
        case 0x23eac8u: goto label_23eac8;
        case 0x23eaccu: goto label_23eacc;
        case 0x23ead0u: goto label_23ead0;
        case 0x23ead4u: goto label_23ead4;
        case 0x23ead8u: goto label_23ead8;
        case 0x23eadcu: goto label_23eadc;
        case 0x23eae0u: goto label_23eae0;
        case 0x23eae4u: goto label_23eae4;
        case 0x23eae8u: goto label_23eae8;
        case 0x23eaecu: goto label_23eaec;
        case 0x23eaf0u: goto label_23eaf0;
        case 0x23eaf4u: goto label_23eaf4;
        case 0x23eaf8u: goto label_23eaf8;
        case 0x23eafcu: goto label_23eafc;
        case 0x23eb00u: goto label_23eb00;
        case 0x23eb04u: goto label_23eb04;
        case 0x23eb08u: goto label_23eb08;
        case 0x23eb0cu: goto label_23eb0c;
        default: break;
    }

    ctx->pc = 0x23e8d0u;

label_23e8d0:
    // 0x23e8d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23e8d4:
    // 0x23e8d4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23e8d8:
    // 0x23e8d8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x23e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_23e8dc:
    // 0x23e8dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23e8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e8e0:
    // 0x23e8e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_23e8e4:
    // 0x23e8e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_23e8e8:
    // 0x23e8e8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x23e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_23e8ec:
    // 0x23e8ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23e8f0:
    // 0x23e8f0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23e8f4:
    // 0x23e8f4: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x23e8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_23e8f8:
    // 0x23e8f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23e8fc:
    // 0x23e8fc: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x23e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_23e900:
    // 0x23e900: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x23e900u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23e904:
    // 0x23e904: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x23e904u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_23e908:
    // 0x23e908: 0x28c50004  slti        $a1, $a2, 0x4
    ctx->pc = 0x23e908u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_23e90c:
    // 0x23e90c: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
label_23e910:
    if (ctx->pc == 0x23E910u) {
        ctx->pc = 0x23E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E90Cu;
        // 0x23e910: 0x290c3  sra         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E914u;
        goto label_23e914;
    }
    ctx->pc = 0x23E90Cu;
    {
        const bool branch_taken_0x23e90c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E90Cu;
        // 0x23e910: 0x290c3  sra         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e90c) {
            ctx->pc = 0x23E9A8u;
            goto label_23e9a8;
        }
    }
    ctx->pc = 0x23E914u;
label_23e914:
    // 0x23e914: 0x2633001c  addiu       $s3, $s1, 0x1C
    ctx->pc = 0x23e914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_23e918:
    // 0x23e918: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x23e918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_23e91c:
    // 0x23e91c: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x23e91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_23e920:
    // 0x23e920: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x23e920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_23e924:
    // 0x23e924: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x23e924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_23e928:
    // 0x23e928: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23e928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23e92c:
    // 0x23e92c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_23e930:
    if (ctx->pc == 0x23E930u) {
        ctx->pc = 0x23E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E92Cu;
        // 0x23e930: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E934u;
        goto label_23e934;
    }
    ctx->pc = 0x23E92Cu;
    {
        const bool branch_taken_0x23e92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E92Cu;
        // 0x23e930: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e92c) {
            ctx->pc = 0x23E978u;
            goto label_23e978;
        }
    }
    ctx->pc = 0x23E934u;
label_23e934:
    // 0x23e934: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x23e934u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_23e938:
    // 0x23e938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23e938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23e93c:
    // 0x23e93c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23e93cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e940:
    // 0x23e940: 0xc094854  jal         func_252150
label_23e944:
    if (ctx->pc == 0x23E944u) {
        ctx->pc = 0x23E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E940u;
        // 0x23e944: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E948u;
        goto label_23e948;
    }
    ctx->pc = 0x23E940u;
    SET_GPR_U32(ctx, 31, 0x23E948u);
    ctx->pc = 0x23E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E940u;
    // 0x23e944: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x23E940u, 0x23E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E948u;
label_23e948:
    // 0x23e948: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x23e948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23e94c:
    // 0x23e94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e950:
    // 0x23e950: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23e950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e954:
    // 0x23e954: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23e958:
    // 0x23e958: 0x40f809  jalr        $v0
label_23e95c:
    if (ctx->pc == 0x23E95Cu) {
        ctx->pc = 0x23E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E958u;
        // 0x23e95c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E960u;
        goto label_23e960;
    }
    ctx->pc = 0x23E958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E960u);
        ctx->pc = 0x23E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E958u;
        // 0x23e95c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E958u, 0x23E960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E960u;
label_23e960:
    // 0x23e960: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x23e960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23e964:
    // 0x23e964: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23e964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e968:
    // 0x23e968: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e96c:
    // 0x23e96c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23e970:
    // 0x23e970: 0x40f809  jalr        $v0
label_23e974:
    if (ctx->pc == 0x23E974u) {
        ctx->pc = 0x23E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E970u;
        // 0x23e974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E978u;
        goto label_23e978;
    }
    ctx->pc = 0x23E970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E978u);
        ctx->pc = 0x23E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E970u;
        // 0x23e974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E970u, 0x23E978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E978u;
label_23e978:
    // 0x23e978: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x23e978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23e97c:
    // 0x23e97c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23e97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e980:
    // 0x23e980: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x23e980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_23e984:
    // 0x23e984: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e988:
    // 0x23e988: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_23e98c:
    // 0x23e98c: 0x40f809  jalr        $v0
label_23e990:
    if (ctx->pc == 0x23E990u) {
        ctx->pc = 0x23E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E98Cu;
        // 0x23e990: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E994u;
        goto label_23e994;
    }
    ctx->pc = 0x23E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E994u);
        ctx->pc = 0x23E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E98Cu;
        // 0x23e990: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E98Cu, 0x23E994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E994u;
label_23e994:
    // 0x23e994: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x23e994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23e998:
    // 0x23e998: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x23e998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_23e99c:
    // 0x23e99c: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x23e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_23e9a0:
    // 0x23e9a0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_23e9a4:
    // 0x23e9a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e9a8:
    // 0x23e9a8: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x23e9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_23e9ac:
    // 0x23e9ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23e9b0:
    // 0x23e9b0: 0xc2900a  movz        $s2, $a2, $v0
    ctx->pc = 0x23e9b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
label_23e9b4:
    // 0x23e9b4: 0x56430014  bnel        $s2, $v1, . + 4 + (0x14 << 2)
label_23e9b8:
    if (ctx->pc == 0x23E9B8u) {
        ctx->pc = 0x23E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9B4u;
        // 0x23e9b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9BCu;
        goto label_23e9bc;
    }
    ctx->pc = 0x23E9B4u;
    {
        const bool branch_taken_0x23e9b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e9b4) {
            ctx->pc = 0x23E9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E9B4u;
            // 0x23e9b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA08u;
            goto label_23ea08;
        }
    }
    ctx->pc = 0x23E9BCu;
label_23e9bc:
    // 0x23e9bc: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x23e9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_23e9c0:
    // 0x23e9c0: 0x24c6fffd  addiu       $a2, $a2, -0x3
    ctx->pc = 0x23e9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_23e9c4:
    // 0x23e9c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23e9c8:
    // 0x23e9c8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x23e9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23e9cc:
    // 0x23e9cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23e9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23e9d0:
    // 0x23e9d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23e9d4:
    // 0x23e9d4: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x23e9d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23e9d8:
    // 0x23e9d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23e9dc:
    // 0x23e9dc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23e9e0:
    // 0x23e9e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23e9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23e9e4:
    // 0x23e9e4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23e9e8:
    // 0x23e9e8: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x23e9e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23e9ec:
    // 0x23e9ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23e9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23e9f0:
    // 0x23e9f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23e9f4:
    // 0x23e9f4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x23e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_23e9f8:
    // 0x23e9f8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23e9fc:
    // 0x23e9fc: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x23e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
label_23ea00:
    // 0x23ea00: 0x10000039  b           . + 4 + (0x39 << 2)
label_23ea04:
    if (ctx->pc == 0x23EA04u) {
        ctx->pc = 0x23EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA00u;
        // 0x23ea04: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA08u;
        goto label_23ea08;
    }
    ctx->pc = 0x23EA00u;
    {
        const bool branch_taken_0x23ea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA00u;
        // 0x23ea04: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea00) {
            ctx->pc = 0x23EAE8u;
            goto label_23eae8;
        }
    }
    ctx->pc = 0x23EA08u;
label_23ea08:
    // 0x23ea08: 0x56420011  bnel        $s2, $v0, . + 4 + (0x11 << 2)
label_23ea0c:
    if (ctx->pc == 0x23EA0Cu) {
        ctx->pc = 0x23EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA08u;
        // 0x23ea0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA10u;
        goto label_23ea10;
    }
    ctx->pc = 0x23EA08u;
    {
        const bool branch_taken_0x23ea08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ea08) {
            ctx->pc = 0x23EA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EA08u;
            // 0x23ea0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA50u;
            goto label_23ea50;
        }
    }
    ctx->pc = 0x23EA10u;
label_23ea10:
    // 0x23ea10: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x23ea10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_23ea14:
    // 0x23ea14: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x23ea14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_23ea18:
    // 0x23ea18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23ea1c:
    // 0x23ea1c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x23ea1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23ea20:
    // 0x23ea20: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23ea20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23ea24:
    // 0x23ea24: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23ea28:
    // 0x23ea28: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x23ea28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23ea2c:
    // 0x23ea2c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23ea30:
    // 0x23ea30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23ea34:
    // 0x23ea34: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23ea38:
    // 0x23ea38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23ea38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23ea3c:
    // 0x23ea3c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23ea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_23ea40:
    // 0x23ea40: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23ea44:
    // 0x23ea44: 0x10000028  b           . + 4 + (0x28 << 2)
label_23ea48:
    if (ctx->pc == 0x23EA48u) {
        ctx->pc = 0x23EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA44u;
        // 0x23ea48: 0xae260024  sw          $a2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA4Cu;
        goto label_23ea4c;
    }
    ctx->pc = 0x23EA44u;
    {
        const bool branch_taken_0x23ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA44u;
        // 0x23ea48: 0xae260024  sw          $a2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea44) {
            ctx->pc = 0x23EAE8u;
            goto label_23eae8;
        }
    }
    ctx->pc = 0x23EA4Cu;
label_23ea4c:
    // 0x23ea4c: 0x0  nop
    ctx->pc = 0x23ea4cu;
    // NOP
label_23ea50:
    // 0x23ea50: 0x5642000d  bnel        $s2, $v0, . + 4 + (0xD << 2)
label_23ea54:
    if (ctx->pc == 0x23EA54u) {
        ctx->pc = 0x23EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA50u;
        // 0x23ea54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA58u;
        goto label_23ea58;
    }
    ctx->pc = 0x23EA50u;
    {
        const bool branch_taken_0x23ea50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ea50) {
            ctx->pc = 0x23EA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EA50u;
            // 0x23ea54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA88u;
            goto label_23ea88;
        }
    }
    ctx->pc = 0x23EA58u;
label_23ea58:
    // 0x23ea58: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x23ea58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_23ea5c:
    // 0x23ea5c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x23ea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23ea60:
    // 0x23ea60: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23ea64:
    // 0x23ea64: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x23ea64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23ea68:
    // 0x23ea68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23ea68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23ea6c:
    // 0x23ea6c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23ea70:
    // 0x23ea70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23ea74:
    // 0x23ea74: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23ea78:
    // 0x23ea78: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x23ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
label_23ea7c:
    // 0x23ea7c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_23ea80:
    if (ctx->pc == 0x23EA80u) {
        ctx->pc = 0x23EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA7Cu;
        // 0x23ea80: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA84u;
        goto label_23ea84;
    }
    ctx->pc = 0x23EA7Cu;
    {
        const bool branch_taken_0x23ea7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA7Cu;
        // 0x23ea80: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea7c) {
            ctx->pc = 0x23EAE8u;
            goto label_23eae8;
        }
    }
    ctx->pc = 0x23EA84u;
label_23ea84:
    // 0x23ea84: 0x0  nop
    ctx->pc = 0x23ea84u;
    // NOP
label_23ea88:
    // 0x23ea88: 0x1642001b  bne         $s2, $v0, . + 4 + (0x1B << 2)
label_23ea8c:
    if (ctx->pc == 0x23EA8Cu) {
        ctx->pc = 0x23EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA88u;
        // 0x23ea8c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA90u;
        goto label_23ea90;
    }
    ctx->pc = 0x23EA88u;
    {
        const bool branch_taken_0x23ea88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA88u;
        // 0x23ea8c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea88) {
            ctx->pc = 0x23EAF8u;
            goto label_23eaf8;
        }
    }
    ctx->pc = 0x23EA90u;
label_23ea90:
    // 0x23ea90: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x23ea90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_23ea94:
    // 0x23ea94: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x23ea94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_23ea98:
    // 0x23ea98: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23ea9c:
    // 0x23ea9c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x23ea9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23eaa0:
    // 0x23eaa0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23eaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23eaa4:
    // 0x23eaa4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23eaa8:
    // 0x23eaa8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x23eaa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23eaac:
    // 0x23eaac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23eaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23eab0:
    // 0x23eab0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23eab4:
    // 0x23eab4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23eab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23eab8:
    // 0x23eab8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23eabc:
    // 0x23eabc: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x23eabcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23eac0:
    // 0x23eac0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23eac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23eac4:
    // 0x23eac4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23eac8:
    // 0x23eac8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x23eac8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23eacc:
    // 0x23eacc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23ead0:
    // 0x23ead0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x23ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_23ead4:
    // 0x23ead4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23ead4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_23ead8:
    // 0x23ead8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23ead8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23eadc:
    // 0x23eadc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23eae0:
    // 0x23eae0: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x23eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
label_23eae4:
    // 0x23eae4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23eae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23eae8:
    // 0x23eae8: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x23eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
label_23eaec:
    // 0x23eaec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x23eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_23eaf0:
    // 0x23eaf0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x23eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_23eaf4:
    // 0x23eaf4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23eaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23eaf8:
    // 0x23eaf8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x23eaf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23eafc:
    // 0x23eafc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23eafcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23eb00:
    // 0x23eb00: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x23eb00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23eb04:
    // 0x23eb04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23eb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23eb08:
    // 0x23eb08: 0x3e00008  jr          $ra
label_23eb0c:
    if (ctx->pc == 0x23EB0Cu) {
        ctx->pc = 0x23EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB08u;
        // 0x23eb0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB10u;
        goto label_fallthrough_0x23eb08;
    }
    ctx->pc = 0x23EB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB08u;
        // 0x23eb0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23eb08:
    ctx->pc = 0x23EB10u;
}
