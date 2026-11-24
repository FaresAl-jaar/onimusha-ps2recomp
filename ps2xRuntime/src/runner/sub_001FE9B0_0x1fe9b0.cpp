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

// Function: sub_001FE9B0
// Address: 0x1fe9b0 - 0x1fea5c
void sub_001FE9B0_0x1fe9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE9B0_0x1fe9b0");
#endif

    switch (ctx->pc) {
        case 0x1fe9d8u: goto label_1fe9d8;
        case 0x1fea1cu: goto label_1fea1c;
        default: break;
    }

    ctx->pc = 0x1fe9b0u;

    // 0x1fe9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe9b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe9b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fe9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe9bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fe9c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe9c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fe9c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe9cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fe9d0: 0xc080496  jal         func_201258
    ctx->pc = 0x1FE9D0u;
    SET_GPR_U32(ctx, 31, 0x1FE9D8u);
    ctx->pc = 0x1FE9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9D0u;
    // 0x1fe9d4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FE9D0u, 0x1FE9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9D8u;
label_1fe9d8:
    // 0x1fe9d8: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1fe9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1fe9dc: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x1fe9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1fe9e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fe9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe9e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE9E4u;
    {
        const bool branch_taken_0x1fe9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9E4u;
        // 0x1fe9e8: 0x34a5020a  ori         $a1, $a1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9e4) {
            ctx->pc = 0x1FEA08u;
            goto label_1fea08;
        }
    }
    ctx->pc = 0x1FE9ECu;
    // 0x1fe9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe9f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe9f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe9f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe9f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe9f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fea00: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FEA00u;
    ctx->pc = 0x1FEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA00u;
    // 0x1fea04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEA08u;
label_1fea08:
    // 0x1fea08: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1fea08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fea0c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1fea0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fea10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fea10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea14: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1FEA14u;
    SET_GPR_U32(ctx, 31, 0x1FEA1Cu);
    ctx->pc = 0x1FEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA14u;
    // 0x1fea18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1FEA14u, 0x1FEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA1Cu;
label_1fea1c:
    // 0x1fea1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea20: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1fea20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1fea24: 0x508023  subu        $s0, $v0, $s0
    ctx->pc = 0x1fea24u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fea28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEA28u;
    {
        const bool branch_taken_0x1fea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA28u;
        // 0x1fea2c: 0x34a50305  ori         $a1, $a1, 0x305 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea28) {
            ctx->pc = 0x1FEA38u;
            goto label_1fea38;
        }
    }
    ctx->pc = 0x1FEA30u;
    // 0x1fea30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEA30u;
    {
        const bool branch_taken_0x1fea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA30u;
        // 0x1fea34: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea30) {
            ctx->pc = 0x1FEA40u;
            goto label_1fea40;
        }
    }
    ctx->pc = 0x1FEA38u;
label_1fea38:
    // 0x1fea38: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1fea38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x1fea3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fea3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fea40:
    // 0x1fea40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fea40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fea44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fea44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fea48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fea48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fea4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fea4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fea50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fea54: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FEA54u;
    ctx->pc = 0x1FEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA54u;
    // 0x1fea58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEA5Cu;
}
