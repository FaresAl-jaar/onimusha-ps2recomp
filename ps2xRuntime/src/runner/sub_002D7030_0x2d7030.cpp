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

// Function: sub_002D7030
// Address: 0x2d7030 - 0x2d7118
void sub_002D7030_0x2d7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7030_0x2d7030");
#endif

    switch (ctx->pc) {
        case 0x2d7098u: goto label_2d7098;
        case 0x2d70a0u: goto label_2d70a0;
        case 0x2d70bcu: goto label_2d70bc;
        case 0x2d70c8u: goto label_2d70c8;
        case 0x2d70d0u: goto label_2d70d0;
        case 0x2d70ecu: goto label_2d70ec;
        case 0x2d70f8u: goto label_2d70f8;
        case 0x2d7104u: goto label_2d7104;
        default: break;
    }

    ctx->pc = 0x2d7030u;

    // 0x2d7030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7034: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d7034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d7038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d7038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d703c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2d703cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2d7040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d7044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7048: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2d7048u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2d704c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d704cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7050: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D7050u;
    {
        const bool branch_taken_0x2d7050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7050) {
            ctx->pc = 0x2D7108u;
            goto label_2d7108;
        }
    }
    ctx->pc = 0x2D7058u;
    // 0x2d7058: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d705c: 0x30651000  andi        $a1, $v1, 0x1000
    ctx->pc = 0x2d705cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2d7060: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7060u;
    {
        const bool branch_taken_0x2d7060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7060u;
        // 0x2d7064: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7060) {
            ctx->pc = 0x2D7088u;
            goto label_2d7088;
        }
    }
    ctx->pc = 0x2D7068u;
    // 0x2d7068: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2d7068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d706c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2d706cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2d7070: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2d7070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2d7074: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d7074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d7078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d7078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d707c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7080: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D7080u;
    {
        const bool branch_taken_0x2d7080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7080) {
            ctx->pc = 0x2D7108u;
            goto label_2d7108;
        }
    }
    ctx->pc = 0x2D7088u;
label_2d7088:
    // 0x2d7088: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7088u;
    {
        const bool branch_taken_0x2d7088 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7088u;
        // 0x2d708c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7088) {
            ctx->pc = 0x2D70C0u;
            goto label_2d70c0;
        }
    }
    ctx->pc = 0x2D7090u;
    // 0x2d7090: 0xc0b608c  jal         func_2D8230
    ctx->pc = 0x2D7090u;
    SET_GPR_U32(ctx, 31, 0x2D7098u);
    ctx->pc = 0x2D8230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8230u, 0x2D7090u, 0x2D7098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7098u;
label_2d7098:
    // 0x2d7098: 0xc0b624c  jal         func_2D8930
    ctx->pc = 0x2D7098u;
    SET_GPR_U32(ctx, 31, 0x2D70A0u);
    ctx->pc = 0x2D709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7098u;
    // 0x2d709c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8930u, 0x2D7098u, 0x2D70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70A0u;
label_2d70a0:
    // 0x2d70a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d70a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d70a4: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2d70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2d70a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2d70a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2d70ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D70ACu;
    {
        const bool branch_taken_0x2d70ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70ACu;
        // 0x2d70b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70ac) {
            ctx->pc = 0x2D70C0u;
            goto label_2d70c0;
        }
    }
    ctx->pc = 0x2D70B4u;
    // 0x2d70b4: 0xc0b62f0  jal         func_2D8BC0
    ctx->pc = 0x2D70B4u;
    SET_GPR_U32(ctx, 31, 0x2D70BCu);
    ctx->pc = 0x2D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8BC0u, 0x2D70B4u, 0x2D70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70BCu;
label_2d70bc:
    // 0x2d70bc: 0x0  nop
    ctx->pc = 0x2d70bcu;
    // NOP
label_2d70c0:
    // 0x2d70c0: 0xc0b6170  jal         func_2D85C0
    ctx->pc = 0x2D70C0u;
    SET_GPR_U32(ctx, 31, 0x2D70C8u);
    ctx->pc = 0x2D70C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D70C0u;
    // 0x2d70c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D85C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D85C0u, 0x2D70C0u, 0x2D70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70C8u;
label_2d70c8:
    // 0x2d70c8: 0xc0b5c48  jal         func_2D7120
    ctx->pc = 0x2D70C8u;
    SET_GPR_U32(ctx, 31, 0x2D70D0u);
    ctx->pc = 0x2D70CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D70C8u;
    // 0x2d70cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7120u, 0x2D70C8u, 0x2D70D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70D0u;
label_2d70d0:
    // 0x2d70d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d70d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d70d4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x2d70d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2d70d8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D70D8u;
    {
        const bool branch_taken_0x2d70d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70D8u;
        // 0x2d70dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70d8) {
            ctx->pc = 0x2D7108u;
            goto label_2d7108;
        }
    }
    ctx->pc = 0x2D70E0u;
    // 0x2d70e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d70e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70e4: 0xc0b5598  jal         func_2D5660
    ctx->pc = 0x2D70E4u;
    SET_GPR_U32(ctx, 31, 0x2D70ECu);
    ctx->pc = 0x2D70E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D70E4u;
    // 0x2d70e8: 0x240601c0  addiu       $a2, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5660u, 0x2D70E4u, 0x2D70ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70ECu;
label_2d70ec:
    // 0x2d70ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d70ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70f0: 0xc0b5f5c  jal         func_2D7D70
    ctx->pc = 0x2D70F0u;
    SET_GPR_U32(ctx, 31, 0x2D70F8u);
    ctx->pc = 0x2D70F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D70F0u;
    // 0x2d70f4: 0x26050170  addiu       $a1, $s0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D70u, 0x2D70F0u, 0x2D70F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70F8u;
label_2d70f8:
    // 0x2d70f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d70f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70fc: 0xc0b5f5c  jal         func_2D7D70
    ctx->pc = 0x2D70FCu;
    SET_GPR_U32(ctx, 31, 0x2D7104u);
    ctx->pc = 0x2D7100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D70FCu;
    // 0x2d7100: 0x260501b0  addiu       $a1, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D70u, 0x2D70FCu, 0x2D7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7104u;
label_2d7104:
    // 0x2d7104: 0x0  nop
    ctx->pc = 0x2d7104u;
    // NOP
label_2d7108:
    // 0x2d7108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d710c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d710cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7110: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7110u;
        // 0x2d7114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7118u;
}
