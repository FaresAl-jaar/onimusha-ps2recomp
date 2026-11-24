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

// Function: sub_002F44E0
// Address: 0x2f44e0 - 0x2f45a0
void sub_002F44E0_0x2f44e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F44E0_0x2f44e0");
#endif

    switch (ctx->pc) {
        case 0x2f450cu: goto label_2f450c;
        default: break;
    }

    ctx->pc = 0x2f44e0u;

    // 0x2f44e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f44e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f44e4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2f44e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f44e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f44e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f44ec: 0x30830f00  andi        $v1, $a0, 0xF00
    ctx->pc = 0x2f44ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x2f44f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f44f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f44f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f44f8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2f44f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f44fc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F44FCu;
    {
        const bool branch_taken_0x2f44fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44FCu;
        // 0x2f4500: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44fc) {
            ctx->pc = 0x2F4530u;
            goto label_2f4530;
        }
    }
    ctx->pc = 0x2F4504u;
    // 0x2f4504: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x2F4504u;
    SET_GPR_U32(ctx, 31, 0x2F450Cu);
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2F4504u, 0x2F450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F450Cu;
label_2f450c:
    // 0x2f450c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F450Cu;
    {
        const bool branch_taken_0x2f450c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f450c) {
            ctx->pc = 0x2F4520u;
            goto label_2f4520;
        }
    }
    ctx->pc = 0x2F4514u;
    // 0x2f4514: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2F4514u;
    {
        const bool branch_taken_0x2f4514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4514u;
        // 0x2f4518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4514) {
            ctx->pc = 0x2F4590u;
            goto label_2f4590;
        }
    }
    ctx->pc = 0x2F451Cu;
    // 0x2f451c: 0x0  nop
    ctx->pc = 0x2f451cu;
    // NOP
label_2f4520:
    // 0x2f4520: 0x90420022  lbu         $v0, 0x22($v0)
    ctx->pc = 0x2f4520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x2f4524: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2f4524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2f4528: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4528u;
    {
        const bool branch_taken_0x2f4528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4528u;
        // 0x2f452c: 0x24c690e0  addiu       $a2, $a2, -0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4528) {
            ctx->pc = 0x2F4540u;
            goto label_2f4540;
        }
    }
    ctx->pc = 0x2F4530u;
label_2f4530:
    // 0x2f4530: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2f4530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2f4534: 0x24c690ec  addiu       $a2, $a2, -0x6F14
    ctx->pc = 0x2f4534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938860));
    // 0x2f4538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f453c: 0x0  nop
    ctx->pc = 0x2f453cu;
    // NOP
label_2f4540:
    // 0x2f4540: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4544: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x2f4544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f4548: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f4548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f454c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F454Cu;
    {
        const bool branch_taken_0x2f454c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f454c) {
            ctx->pc = 0x2F4560u;
            goto label_2f4560;
        }
    }
    ctx->pc = 0x2F4554u;
    // 0x2f4554: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F4554u;
    {
        const bool branch_taken_0x2f4554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4554u;
        // 0x2f4558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4554) {
            ctx->pc = 0x2F4590u;
            goto label_2f4590;
        }
    }
    ctx->pc = 0x2F455Cu;
    // 0x2f455c: 0x0  nop
    ctx->pc = 0x2f455cu;
    // NOP
label_2f4560:
    // 0x2f4560: 0x94c4000a  lhu         $a0, 0xA($a2)
    ctx->pc = 0x2f4560u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x2f4564: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x2f4564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2f4568: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2f4568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f456c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2f456cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f4570: 0x41280a  movz        $a1, $v0, $at
    ctx->pc = 0x2f4570u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x2f4574: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2f4574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f4578: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f4578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f457c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2f457cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f4580: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f4580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f4584: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2f4584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2f4588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f458c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2f458cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4590:
    // 0x2f4590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4598: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4598u;
        // 0x2f459c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F45A0u;
}
