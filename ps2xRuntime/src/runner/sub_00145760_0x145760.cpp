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

// Function: sub_00145760
// Address: 0x145760 - 0x145818
void sub_00145760_0x145760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145760_0x145760");
#endif

    switch (ctx->pc) {
        case 0x145798u: goto label_145798;
        case 0x1457b8u: goto label_1457b8;
        case 0x1457e0u: goto label_1457e0;
        default: break;
    }

    ctx->pc = 0x145760u;

    // 0x145760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x145760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x145764: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x145764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145768: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x145768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14576c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145774: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x145774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14577c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14577Cu;
    {
        const bool branch_taken_0x14577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14577Cu;
        // 0x145780: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14577c) {
            ctx->pc = 0x145790u;
            goto label_145790;
        }
    }
    ctx->pc = 0x145784u;
    // 0x145784: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x145784u;
    {
        const bool branch_taken_0x145784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145784) {
            ctx->pc = 0x1457F8u;
            goto label_1457f8;
        }
    }
    ctx->pc = 0x14578Cu;
    // 0x14578c: 0x0  nop
    ctx->pc = 0x14578cu;
    // NOP
label_145790:
    // 0x145790: 0xc051594  jal         func_145650
    ctx->pc = 0x145790u;
    SET_GPR_U32(ctx, 31, 0x145798u);
    ctx->pc = 0x145650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145650u, 0x145790u, 0x145798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145798u;
label_145798:
    // 0x145798: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145798u;
    {
        const bool branch_taken_0x145798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145798) {
            ctx->pc = 0x1457A8u;
            goto label_1457a8;
        }
    }
    ctx->pc = 0x1457A0u;
    // 0x1457a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1457A0u;
    {
        const bool branch_taken_0x1457a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1457A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457A0u;
        // 0x1457a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457a0) {
            ctx->pc = 0x145800u;
            goto label_145800;
        }
    }
    ctx->pc = 0x1457A8u;
label_1457a8:
    // 0x1457a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1457a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1457acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457b0: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x1457B0u;
    SET_GPR_U32(ctx, 31, 0x1457B8u);
    ctx->pc = 0x1457B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1457B0u;
    // 0x1457b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x1457B0u, 0x1457B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457B8u;
label_1457b8:
    // 0x1457b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1457b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457bc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1457BCu;
    {
        const bool branch_taken_0x1457bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1457bc) {
            ctx->pc = 0x1457D0u;
            goto label_1457d0;
        }
    }
    ctx->pc = 0x1457C4u;
    // 0x1457c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1457C4u;
    {
        const bool branch_taken_0x1457c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1457C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457C4u;
        // 0x1457c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457c4) {
            ctx->pc = 0x145800u;
            goto label_145800;
        }
    }
    ctx->pc = 0x1457CCu;
    // 0x1457cc: 0x0  nop
    ctx->pc = 0x1457ccu;
    // NOP
label_1457d0:
    // 0x1457d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1457d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1457d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457d8: 0xc049590  jal         func_125640
    ctx->pc = 0x1457D8u;
    SET_GPR_U32(ctx, 31, 0x1457E0u);
    ctx->pc = 0x1457DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1457D8u;
    // 0x1457dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1457D8u, 0x1457E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457E0u;
label_1457e0:
    // 0x1457e0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1457E0u;
    {
        const bool branch_taken_0x1457e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1457E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457E0u;
        // 0x1457e4: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457e0) {
            ctx->pc = 0x1457F0u;
            goto label_1457f0;
        }
    }
    ctx->pc = 0x1457E8u;
    // 0x1457e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1457e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1457ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1457ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1457f0:
    // 0x1457f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1457F0u;
    {
        const bool branch_taken_0x1457f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1457F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457F0u;
        // 0x1457f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457f0) {
            ctx->pc = 0x145800u;
            goto label_145800;
        }
    }
    ctx->pc = 0x1457F8u;
label_1457f8:
    // 0x1457f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1457f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457fc: 0x0  nop
    ctx->pc = 0x1457fcu;
    // NOP
label_145800:
    // 0x145800: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14580c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14580cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145810: 0x3e00008  jr          $ra
    ctx->pc = 0x145810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145810u;
        // 0x145814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145818u;
}
