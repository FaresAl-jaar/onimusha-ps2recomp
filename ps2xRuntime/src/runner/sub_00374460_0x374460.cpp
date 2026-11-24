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

// Function: sub_00374460
// Address: 0x374460 - 0x37455c
void sub_00374460_0x374460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374460_0x374460");
#endif

    switch (ctx->pc) {
        case 0x37447cu: goto label_37447c;
        case 0x3744b4u: goto label_3744b4;
        case 0x3744ccu: goto label_3744cc;
        case 0x3744e4u: goto label_3744e4;
        case 0x374530u: goto label_374530;
        default: break;
    }

    ctx->pc = 0x374460u;

    // 0x374460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x374464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x374464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x374468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37446c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37446cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x374470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374474: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x374474u;
    SET_GPR_U32(ctx, 31, 0x37447Cu);
    ctx->pc = 0x374478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374474u;
    // 0x374478: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x374474u, 0x37447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37447Cu;
label_37447c:
    // 0x37447c: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x37447cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x374480: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x374480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x374484: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x374484u;
    {
        const bool branch_taken_0x374484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x374488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374484u;
        // 0x374488: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374484) {
            ctx->pc = 0x3744D8u;
            goto label_3744d8;
        }
    }
    ctx->pc = 0x37448Cu;
    // 0x37448c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37448Cu;
    {
        const bool branch_taken_0x37448c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37448c) {
            ctx->pc = 0x3744C0u;
            goto label_3744c0;
        }
    }
    ctx->pc = 0x374494u;
    // 0x374494: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x374494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x374498: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x374498u;
    {
        const bool branch_taken_0x374498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x374498) {
            ctx->pc = 0x3744A8u;
            goto label_3744a8;
        }
    }
    ctx->pc = 0x3744A0u;
    // 0x3744a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3744A0u;
    {
        const bool branch_taken_0x3744a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3744a0) {
            ctx->pc = 0x3744E8u;
            goto label_3744e8;
        }
    }
    ctx->pc = 0x3744A8u;
label_3744a8:
    // 0x3744a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3744a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744ac: 0xc0dd158  jal         func_374560
    ctx->pc = 0x3744ACu;
    SET_GPR_U32(ctx, 31, 0x3744B4u);
    ctx->pc = 0x3744B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744ACu;
    // 0x3744b0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x374560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374560u, 0x3744ACu, 0x3744B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744B4u;
label_3744b4:
    // 0x3744b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3744B4u;
    {
        const bool branch_taken_0x3744b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3744b4) {
            ctx->pc = 0x3744E8u;
            goto label_3744e8;
        }
    }
    ctx->pc = 0x3744BCu;
    // 0x3744bc: 0x0  nop
    ctx->pc = 0x3744bcu;
    // NOP
label_3744c0:
    // 0x3744c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3744c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744c4: 0xc0dd190  jal         func_374640
    ctx->pc = 0x3744C4u;
    SET_GPR_U32(ctx, 31, 0x3744CCu);
    ctx->pc = 0x3744C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744C4u;
    // 0x3744c8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x374640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374640u, 0x3744C4u, 0x3744CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744CCu;
label_3744cc:
    // 0x3744cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3744CCu;
    {
        const bool branch_taken_0x3744cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3744cc) {
            ctx->pc = 0x3744E8u;
            goto label_3744e8;
        }
    }
    ctx->pc = 0x3744D4u;
    // 0x3744d4: 0x0  nop
    ctx->pc = 0x3744d4u;
    // NOP
label_3744d8:
    // 0x3744d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3744d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744dc: 0xc0dd278  jal         func_3749E0
    ctx->pc = 0x3744DCu;
    SET_GPR_U32(ctx, 31, 0x3744E4u);
    ctx->pc = 0x3744E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744DCu;
    // 0x3744e0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3749E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3749E0u, 0x3744DCu, 0x3744E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744E4u;
label_3744e4:
    // 0x3744e4: 0x0  nop
    ctx->pc = 0x3744e4u;
    // NOP
label_3744e8:
    // 0x3744e8: 0x92232b60  lbu         $v1, 0x2B60($s1)
    ctx->pc = 0x3744e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11104)));
    // 0x3744ec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3744ECu;
    {
        const bool branch_taken_0x3744ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3744ec) {
            ctx->pc = 0x374540u;
            goto label_374540;
        }
    }
    ctx->pc = 0x3744F4u;
    // 0x3744f4: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x3744f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x3744f8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3744f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3744fc: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x3744fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x374500: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x374500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x374504: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x374504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x374508: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x374508u;
    {
        const bool branch_taken_0x374508 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374508u;
        // 0x37450c: 0xae230148  sw          $v1, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374508) {
            ctx->pc = 0x374530u;
            goto label_374530;
        }
    }
    ctx->pc = 0x374510u;
    // 0x374510: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x374510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x374514: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x374514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x374518: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x374518u;
    {
        const bool branch_taken_0x374518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374518) {
            ctx->pc = 0x374530u;
            goto label_374530;
        }
    }
    ctx->pc = 0x374520u;
    // 0x374520: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x374520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x374524: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x374524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x374528: 0xc0c78c0  jal         func_31E300
    ctx->pc = 0x374528u;
    SET_GPR_U32(ctx, 31, 0x374530u);
    ctx->pc = 0x37452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374528u;
    // 0x37452c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E300u, 0x374528u, 0x374530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374530u;
label_374530:
    // 0x374530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x374530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374534: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x374534u;
    {
        const bool branch_taken_0x374534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374534u;
        // 0x374538: 0xa22329d1  sb          $v1, 0x29D1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10705), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374534) {
            ctx->pc = 0x374548u;
            goto label_374548;
        }
    }
    ctx->pc = 0x37453Cu;
    // 0x37453c: 0x0  nop
    ctx->pc = 0x37453cu;
    // NOP
label_374540:
    // 0x374540: 0xa22029d1  sb          $zero, 0x29D1($s1)
    ctx->pc = 0x374540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x374544: 0x0  nop
    ctx->pc = 0x374544u;
    // NOP
label_374548:
    // 0x374548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x374548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37454c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37454cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374554: 0x3e00008  jr          $ra
    ctx->pc = 0x374554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374554u;
        // 0x374558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37455Cu;
}
