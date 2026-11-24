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

// Function: sub_003464D0
// Address: 0x3464d0 - 0x346598
void sub_003464D0_0x3464d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003464D0_0x3464d0");
#endif

    switch (ctx->pc) {
        case 0x346520u: goto label_346520;
        case 0x346528u: goto label_346528;
        case 0x34657cu: goto label_34657c;
        default: break;
    }

    ctx->pc = 0x3464d0u;

    // 0x3464d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3464d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3464d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3464d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3464d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3464d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3464dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3464dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3464e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3464e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3464e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3464e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3464e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3464e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3464ec: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x3464ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3464f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3464f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3464f4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x3464f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3464f8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3464f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3464fc: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3464fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346500: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x346500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346504: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x346504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34650c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x34650cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x346510: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x346510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x346514: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x346514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x346518: 0xc0d1744  jal         func_345D10
    ctx->pc = 0x346518u;
    SET_GPR_U32(ctx, 31, 0x346520u);
    ctx->pc = 0x34651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346518u;
    // 0x34651c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D10u, 0x346518u, 0x346520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346520u;
label_346520:
    // 0x346520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_346528:
    // 0x346528: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x346528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34652c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34652Cu;
    {
        const bool branch_taken_0x34652c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34652c) {
            ctx->pc = 0x346548u;
            goto label_346548;
        }
    }
    ctx->pc = 0x346534u;
    // 0x346534: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x346534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x346538: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x346538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x34653c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34653Cu;
    {
        const bool branch_taken_0x34653c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x346540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34653Cu;
        // 0x346540: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34653c) {
            ctx->pc = 0x346528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346528;
        }
    }
    ctx->pc = 0x346544u;
    // 0x346544: 0x0  nop
    ctx->pc = 0x346544u;
    // NOP
label_346548:
    // 0x346548: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x346548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x34654c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x34654Cu;
    {
        const bool branch_taken_0x34654c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x346550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34654Cu;
        // 0x346550: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34654c) {
            ctx->pc = 0x346580u;
            goto label_346580;
        }
    }
    ctx->pc = 0x346554u;
    // 0x346554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346558: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x346558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34655c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x34655cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x346560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x346560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x346564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x346564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346568: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x346568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x34656c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x34656cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x346570: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x346570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x346574: 0xc0d18ec  jal         func_3463B0
    ctx->pc = 0x346574u;
    SET_GPR_U32(ctx, 31, 0x34657Cu);
    ctx->pc = 0x346578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346574u;
    // 0x346578: 0xac710008  sw          $s1, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3463B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3463B0u, 0x346574u, 0x34657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34657Cu;
label_34657c:
    // 0x34657c: 0x0  nop
    ctx->pc = 0x34657cu;
    // NOP
label_346580:
    // 0x346580: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x346580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x346584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34658c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34658cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346590: 0x3e00008  jr          $ra
    ctx->pc = 0x346590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346590u;
        // 0x346594: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346598u;
}
