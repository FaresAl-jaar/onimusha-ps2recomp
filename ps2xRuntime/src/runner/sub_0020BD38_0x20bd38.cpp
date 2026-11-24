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

// Function: sub_0020BD38
// Address: 0x20bd38 - 0x20bdf4
void sub_0020BD38_0x20bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BD38_0x20bd38");
#endif

    switch (ctx->pc) {
        case 0x20bd38u: goto label_20bd38;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd40u: goto label_20bd40;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd4cu: goto label_20bd4c;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bd54u: goto label_20bd54;
        case 0x20bd58u: goto label_20bd58;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd60u: goto label_20bd60;
        case 0x20bd64u: goto label_20bd64;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd6cu: goto label_20bd6c;
        case 0x20bd70u: goto label_20bd70;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd78u: goto label_20bd78;
        case 0x20bd7cu: goto label_20bd7c;
        case 0x20bd80u: goto label_20bd80;
        case 0x20bd84u: goto label_20bd84;
        case 0x20bd88u: goto label_20bd88;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bd90u: goto label_20bd90;
        case 0x20bd94u: goto label_20bd94;
        case 0x20bd98u: goto label_20bd98;
        case 0x20bd9cu: goto label_20bd9c;
        case 0x20bda0u: goto label_20bda0;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bda8u: goto label_20bda8;
        case 0x20bdacu: goto label_20bdac;
        case 0x20bdb0u: goto label_20bdb0;
        case 0x20bdb4u: goto label_20bdb4;
        case 0x20bdb8u: goto label_20bdb8;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdc0u: goto label_20bdc0;
        case 0x20bdc4u: goto label_20bdc4;
        case 0x20bdc8u: goto label_20bdc8;
        case 0x20bdccu: goto label_20bdcc;
        case 0x20bdd0u: goto label_20bdd0;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdd8u: goto label_20bdd8;
        case 0x20bddcu: goto label_20bddc;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bde4u: goto label_20bde4;
        case 0x20bde8u: goto label_20bde8;
        case 0x20bdecu: goto label_20bdec;
        case 0x20bdf0u: goto label_20bdf0;
        default: break;
    }

    ctx->pc = 0x20bd38u;

label_20bd38:
    // 0x20bd38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20bd3c:
    // 0x20bd3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20bd40:
    // 0x20bd40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20bd40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20bd44:
    // 0x20bd44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20bd48:
    // 0x20bd48: 0xc0832ca  jal         func_20CB28
label_20bd4c:
    if (ctx->pc == 0x20BD4Cu) {
        ctx->pc = 0x20BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD48u;
        // 0x20bd4c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD50u;
        goto label_20bd50;
    }
    ctx->pc = 0x20BD48u;
    SET_GPR_U32(ctx, 31, 0x20BD50u);
    ctx->pc = 0x20BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD48u;
    // 0x20bd4c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB28u, 0x20BD48u, 0x20BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD50u;
label_20bd50:
    // 0x20bd50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bd54:
    // 0x20bd54: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_20bd58:
    if (ctx->pc == 0x20BD58u) {
        ctx->pc = 0x20BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD54u;
        // 0x20bd58: 0x8e0401bc  lw          $a0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD5Cu;
        goto label_20bd5c;
    }
    ctx->pc = 0x20BD54u;
    {
        const bool branch_taken_0x20bd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20bd54) {
            ctx->pc = 0x20BD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BD54u;
            // 0x20bd58: 0x8e0401bc  lw          $a0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BD68u;
            goto label_20bd68;
        }
    }
    ctx->pc = 0x20BD5Cu;
label_20bd5c:
    // 0x20bd5c: 0x10000021  b           . + 4 + (0x21 << 2)
label_20bd60:
    if (ctx->pc == 0x20BD60u) {
        ctx->pc = 0x20BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD5Cu;
        // 0x20bd60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD64u;
        goto label_20bd64;
    }
    ctx->pc = 0x20BD5Cu;
    {
        const bool branch_taken_0x20bd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD5Cu;
        // 0x20bd60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd5c) {
            ctx->pc = 0x20BDE4u;
            goto label_20bde4;
        }
    }
    ctx->pc = 0x20BD64u;
label_20bd64:
    // 0x20bd64: 0x0  nop
    ctx->pc = 0x20bd64u;
    // NOP
label_20bd68:
    // 0x20bd68: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_20bd6c:
    if (ctx->pc == 0x20BD6Cu) {
        ctx->pc = 0x20BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD68u;
        // 0x20bd6c: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD70u;
        goto label_20bd70;
    }
    ctx->pc = 0x20BD68u;
    {
        const bool branch_taken_0x20bd68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bd68) {
            ctx->pc = 0x20BD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BD68u;
            // 0x20bd6c: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BD84u;
            goto label_20bd84;
        }
    }
    ctx->pc = 0x20BD70u;
label_20bd70:
    // 0x20bd70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20bd74:
    // 0x20bd74: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x20bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_20bd78:
    // 0x20bd78: 0x40f809  jalr        $v0
label_20bd7c:
    if (ctx->pc == 0x20BD7Cu) {
        ctx->pc = 0x20BD80u;
        goto label_20bd80;
    }
    ctx->pc = 0x20BD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BD80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BD78u, 0x20BD80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BD80u;
label_20bd80:
    // 0x20bd80: 0x8e0501a4  lw          $a1, 0x1A4($s0)
    ctx->pc = 0x20bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_20bd84:
    // 0x20bd84: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x20bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_20bd88:
    // 0x20bd88: 0x8e0601b0  lw          $a2, 0x1B0($s0)
    ctx->pc = 0x20bd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_20bd8c:
    // 0x20bd8c: 0x8e0701b4  lw          $a3, 0x1B4($s0)
    ctx->pc = 0x20bd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_20bd90:
    // 0x20bd90: 0xc083292  jal         func_20CA48
label_20bd94:
    if (ctx->pc == 0x20BD94u) {
        ctx->pc = 0x20BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD90u;
        // 0x20bd94: 0x8e0801b8  lw          $t0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD98u;
        goto label_20bd98;
    }
    ctx->pc = 0x20BD90u;
    SET_GPR_U32(ctx, 31, 0x20BD98u);
    ctx->pc = 0x20BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD90u;
    // 0x20bd94: 0x8e0801b8  lw          $t0, 0x1B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CA48u, 0x20BD90u, 0x20BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD98u;
label_20bd98:
    // 0x20bd98: 0xc0832b0  jal         func_20CAC0
label_20bd9c:
    if (ctx->pc == 0x20BD9Cu) {
        ctx->pc = 0x20BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD98u;
        // 0x20bd9c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDA0u;
        goto label_20bda0;
    }
    ctx->pc = 0x20BD98u;
    SET_GPR_U32(ctx, 31, 0x20BDA0u);
    ctx->pc = 0x20BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD98u;
    // 0x20bd9c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAC0u, 0x20BD98u, 0x20BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDA0u;
label_20bda0:
    // 0x20bda0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20bda4:
    // 0x20bda4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_20bda8:
    if (ctx->pc == 0x20BDA8u) {
        ctx->pc = 0x20BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDA4u;
        // 0x20bda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDACu;
        goto label_20bdac;
    }
    ctx->pc = 0x20BDA4u;
    {
        const bool branch_taken_0x20bda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDA4u;
        // 0x20bda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bda4) {
            ctx->pc = 0x20BDD8u;
            goto label_20bdd8;
        }
    }
    ctx->pc = 0x20BDACu;
label_20bdac:
    // 0x20bdac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20bdb0:
    // 0x20bdb0: 0x2404ff9a  addiu       $a0, $zero, -0x66
    ctx->pc = 0x20bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967194));
label_20bdb4:
    // 0x20bdb4: 0xc08168c  jal         func_205A30
label_20bdb8:
    if (ctx->pc == 0x20BDB8u) {
        ctx->pc = 0x20BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDB4u;
        // 0x20bdb8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDBCu;
        goto label_20bdbc;
    }
    ctx->pc = 0x20BDB4u;
    SET_GPR_U32(ctx, 31, 0x20BDBCu);
    ctx->pc = 0x20BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDB4u;
    // 0x20bdb8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x20BDB4u, 0x20BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDBCu;
label_20bdbc:
    // 0x20bdbc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_20bdc0:
    // 0x20bdc0: 0x8e0501a4  lw          $a1, 0x1A4($s0)
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_20bdc4:
    // 0x20bdc4: 0xc082e3e  jal         func_20B8F8
label_20bdc8:
    if (ctx->pc == 0x20BDC8u) {
        ctx->pc = 0x20BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDC4u;
        // 0x20bdc8: 0x24848650  addiu       $a0, $a0, -0x79B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDCCu;
        goto label_20bdcc;
    }
    ctx->pc = 0x20BDC4u;
    SET_GPR_U32(ctx, 31, 0x20BDCCu);
    ctx->pc = 0x20BDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDC4u;
    // 0x20bdc8: 0x24848650  addiu       $a0, $a0, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20BDC4u, 0x20BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDCCu;
label_20bdcc:
    // 0x20bdcc: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x20bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
label_20bdd0:
    // 0x20bdd0: 0x10000004  b           . + 4 + (0x4 << 2)
label_20bdd4:
    if (ctx->pc == 0x20BDD4u) {
        ctx->pc = 0x20BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDD0u;
        // 0x20bdd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDD8u;
        goto label_20bdd8;
    }
    ctx->pc = 0x20BDD0u;
    {
        const bool branch_taken_0x20bdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDD0u;
        // 0x20bdd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdd0) {
            ctx->pc = 0x20BDE4u;
            goto label_20bde4;
        }
    }
    ctx->pc = 0x20BDD8u;
label_20bdd8:
    // 0x20bdd8: 0xc080930  jal         func_2024C0
label_20bddc:
    if (ctx->pc == 0x20BDDCu) {
        ctx->pc = 0x20BDE0u;
        goto label_20bde0;
    }
    ctx->pc = 0x20BDD8u;
    SET_GPR_U32(ctx, 31, 0x20BDE0u);
    ctx->pc = 0x2024C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024C0u, 0x20BDD8u, 0x20BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDE0u;
label_20bde0:
    // 0x20bde0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bde4:
    // 0x20bde4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bde4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20bde8:
    // 0x20bde8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20bde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20bdec:
    // 0x20bdec: 0x3e00008  jr          $ra
label_20bdf0:
    if (ctx->pc == 0x20BDF0u) {
        ctx->pc = 0x20BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDECu;
        // 0x20bdf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDF4u;
        goto label_fallthrough_0x20bdec;
    }
    ctx->pc = 0x20BDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDECu;
        // 0x20bdf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20bdec:
    ctx->pc = 0x20BDF4u;
}
