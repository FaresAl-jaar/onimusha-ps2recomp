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

// Function: sub_0034D830
// Address: 0x34d830 - 0x34d910
void sub_0034D830_0x34d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D830_0x34d830");
#endif

    switch (ctx->pc) {
        case 0x34d85cu: goto label_34d85c;
        case 0x34d874u: goto label_34d874;
        case 0x34d8f8u: goto label_34d8f8;
        default: break;
    }

    ctx->pc = 0x34d830u;

    // 0x34d830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d834: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34d838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34d83c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34d83cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d844: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34d844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d848: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34d848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d84c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34d850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d854: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34D854u;
    SET_GPR_U32(ctx, 31, 0x34D85Cu);
    ctx->pc = 0x34D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D854u;
    // 0x34d858: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34D854u, 0x34D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D85Cu;
label_34d85c:
    // 0x34d85c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34d85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d860: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34D860u;
    {
        const bool branch_taken_0x34d860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D860u;
        // 0x34d864: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d860) {
            ctx->pc = 0x34D8F8u;
            goto label_34d8f8;
        }
    }
    ctx->pc = 0x34D868u;
    // 0x34d868: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x34d868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34d86c: 0xc0d3838  jal         func_34E0E0
    ctx->pc = 0x34D86Cu;
    SET_GPR_U32(ctx, 31, 0x34D874u);
    ctx->pc = 0x34D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D86Cu;
    // 0x34d870: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E0E0u, 0x34D86Cu, 0x34D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D874u;
label_34d874:
    // 0x34d874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34d874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d878: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x34D878u;
    {
        const bool branch_taken_0x34d878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d878) {
            ctx->pc = 0x34D8F8u;
            goto label_34d8f8;
        }
    }
    ctx->pc = 0x34D880u;
    // 0x34d880: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x34d880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34d884: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34D884u;
    {
        const bool branch_taken_0x34d884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D884u;
        // 0x34d888: 0x92040017  lbu         $a0, 0x17($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d884) {
            ctx->pc = 0x34D890u;
            goto label_34d890;
        }
    }
    ctx->pc = 0x34D88Cu;
    // 0x34d88c: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x34d88cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_34d890:
    // 0x34d890: 0xacb2000c  sw          $s2, 0xC($a1)
    ctx->pc = 0x34d890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 18));
    // 0x34d894: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34D894u;
    {
        const bool branch_taken_0x34d894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D894u;
        // 0x34d898: 0xa0b10018  sb          $s1, 0x18($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d894) {
            ctx->pc = 0x34D8E0u;
            goto label_34d8e0;
        }
    }
    ctx->pc = 0x34D89Cu;
    // 0x34d89c: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34d89cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34d8a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D8A0u;
    {
        const bool branch_taken_0x34d8a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d8a0) {
            ctx->pc = 0x34D8B0u;
            goto label_34d8b0;
        }
    }
    ctx->pc = 0x34D8A8u;
    // 0x34d8a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34D8A8u;
    {
        const bool branch_taken_0x34d8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D8A8u;
        // 0x34d8ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d8a8) {
            ctx->pc = 0x34D8D0u;
            goto label_34d8d0;
        }
    }
    ctx->pc = 0x34D8B0u;
label_34d8b0:
    // 0x34d8b0: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34d8b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34d8b4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D8B4u;
    {
        const bool branch_taken_0x34d8b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d8b4) {
            ctx->pc = 0x34D8C8u;
            goto label_34d8c8;
        }
    }
    ctx->pc = 0x34D8BCu;
    // 0x34d8bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34D8BCu;
    {
        const bool branch_taken_0x34d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D8BCu;
        // 0x34d8c0: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d8bc) {
            ctx->pc = 0x34D8D0u;
            goto label_34d8d0;
        }
    }
    ctx->pc = 0x34D8C4u;
    // 0x34d8c4: 0x0  nop
    ctx->pc = 0x34d8c4u;
    // NOP
label_34d8c8:
    // 0x34d8c8: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34d8cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34d8d0:
    // 0x34d8d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d8d4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34d8d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34D8D8u;
    {
        const bool branch_taken_0x34d8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D8D8u;
        // 0x34d8dc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d8d8) {
            ctx->pc = 0x34D8E8u;
            goto label_34d8e8;
        }
    }
    ctx->pc = 0x34D8E0u;
label_34d8e0:
    // 0x34d8e0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x34d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x34d8e4: 0x0  nop
    ctx->pc = 0x34d8e4u;
    // NOP
label_34d8e8:
    // 0x34d8e8: 0xa0a20013  sb          $v0, 0x13($a1)
    ctx->pc = 0x34d8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x34d8ec: 0xa0a40014  sb          $a0, 0x14($a1)
    ctx->pc = 0x34d8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20), (uint8_t)GPR_U32(ctx, 4));
    // 0x34d8f0: 0xc0d4420  jal         func_351080
    ctx->pc = 0x34D8F0u;
    SET_GPR_U32(ctx, 31, 0x34D8F8u);
    ctx->pc = 0x34D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D8F0u;
    // 0x34d8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351080u, 0x34D8F0u, 0x34D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D8F8u;
label_34d8f8:
    // 0x34d8f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34d8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d8fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34d8fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d908: 0x3e00008  jr          $ra
    ctx->pc = 0x34D908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D908u;
        // 0x34d90c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D910u;
}
