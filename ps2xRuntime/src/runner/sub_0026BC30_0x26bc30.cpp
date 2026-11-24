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

// Function: sub_0026BC30
// Address: 0x26bc30 - 0x26bff8
void sub_0026BC30_0x26bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BC30_0x26bc30");
#endif

    switch (ctx->pc) {
        case 0x26bc7cu: goto label_26bc7c;
        case 0x26bcb8u: goto label_26bcb8;
        case 0x26bcecu: goto label_26bcec;
        case 0x26bcfcu: goto label_26bcfc;
        case 0x26bd0cu: goto label_26bd0c;
        case 0x26bd1cu: goto label_26bd1c;
        case 0x26bd28u: goto label_26bd28;
        case 0x26bd30u: goto label_26bd30;
        case 0x26bd40u: goto label_26bd40;
        case 0x26bd58u: goto label_26bd58;
        case 0x26bd7cu: goto label_26bd7c;
        case 0x26bdb0u: goto label_26bdb0;
        case 0x26be00u: goto label_26be00;
        case 0x26be1cu: goto label_26be1c;
        case 0x26be3cu: goto label_26be3c;
        case 0x26be4cu: goto label_26be4c;
        case 0x26be70u: goto label_26be70;
        case 0x26be78u: goto label_26be78;
        case 0x26be88u: goto label_26be88;
        case 0x26be90u: goto label_26be90;
        case 0x26be98u: goto label_26be98;
        case 0x26bec0u: goto label_26bec0;
        case 0x26bec8u: goto label_26bec8;
        case 0x26bed0u: goto label_26bed0;
        case 0x26beecu: goto label_26beec;
        case 0x26befcu: goto label_26befc;
        case 0x26bf04u: goto label_26bf04;
        case 0x26bf24u: goto label_26bf24;
        case 0x26bf70u: goto label_26bf70;
        case 0x26bf9cu: goto label_26bf9c;
        case 0x26bfa8u: goto label_26bfa8;
        default: break;
    }

    ctx->pc = 0x26bc30u;

    // 0x26bc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26bc34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26bc38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26bc3c: 0x8c8500ac  lw          $a1, 0xAC($a0)
    ctx->pc = 0x26bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x26bc40: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x26bc40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x26bc44: 0x102000e6  beqz        $at, . + 4 + (0xE6 << 2)
    ctx->pc = 0x26BC44u;
    {
        const bool branch_taken_0x26bc44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC44u;
        // 0x26bc48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc44) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BC4Cu;
    // 0x26bc4c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x26bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x26bc50: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x26bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26bc54: 0x24635920  addiu       $v1, $v1, 0x5920
    ctx->pc = 0x26bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22816));
    // 0x26bc58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26bc5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26bc60: 0x400008  jr          $v0
    ctx->pc = 0x26BC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26BC68u: goto label_26bc68;
            case 0x26BCB0u: goto label_26bcb0;
            case 0x26BD50u: goto label_26bd50;
            case 0x26BE30u: goto label_26be30;
            case 0x26BE80u: goto label_26be80;
            case 0x26BEA0u: goto label_26bea0;
            case 0x26BEE0u: goto label_26bee0;
            case 0x26BF40u: goto label_26bf40;
            case 0x26BFB0u: goto label_26bfb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BC60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26BC68u;
label_26bc68:
    // 0x26bc68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bc6c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bc70: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x26bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x26bc74: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x26BC74u;
    SET_GPR_U32(ctx, 31, 0x26BC7Cu);
    ctx->pc = 0x26BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC74u;
    // 0x26bc78: 0xa022cea9  sb          $v0, -0x3157($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954665), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x26BC74u, 0x26BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC7Cu;
label_26bc7c:
    // 0x26bc7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bc80: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x26bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26bc84: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x26bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x26bc88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bc8c: 0xa20000ab  sb          $zero, 0xAB($s0)
    ctx->pc = 0x26bc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 171), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bc90: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x26bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x26bc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26bc98: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x26bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x26bc9c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x26bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x26bca0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x26bca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x26bca4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bca8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x26BCA8u;
    {
        const bool branch_taken_0x26bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCA8u;
        // 0x26bcac: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bca8) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BCB0u;
label_26bcb0:
    // 0x26bcb0: 0xc05551c  jal         func_155470
    ctx->pc = 0x26BCB0u;
    SET_GPR_U32(ctx, 31, 0x26BCB8u);
    ctx->pc = 0x26BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BCB0u;
    // 0x26bcb4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x26BCB0u, 0x26BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BCB8u;
label_26bcb8:
    // 0x26bcb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bcbc: 0x104300c8  beq         $v0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x26BCBCu;
    {
        const bool branch_taken_0x26bcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCBCu;
        // 0x26bcc0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcbc) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BCC4u;
    // 0x26bcc4: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x26bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x26bcc8: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x26bccc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26bcd0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26bcd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26bcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26bcd8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x26bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x26bcdc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26bce0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bce4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x26BCE4u;
    SET_GPR_U32(ctx, 31, 0x26BCECu);
    ctx->pc = 0x26BCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BCE4u;
    // 0x26bce8: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x26BCE4u, 0x26BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BCECu;
label_26bcec:
    // 0x26bcec: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26bcf0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26bcf4: 0xc04ca14  jal         func_132850
    ctx->pc = 0x26BCF4u;
    SET_GPR_U32(ctx, 31, 0x26BCFCu);
    ctx->pc = 0x26BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BCF4u;
    // 0x26bcf8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x26BCF4u, 0x26BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BCFCu;
label_26bcfc:
    // 0x26bcfc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26bd00: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x26bd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26bd04: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x26BD04u;
    SET_GPR_U32(ctx, 31, 0x26BD0Cu);
    ctx->pc = 0x26BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD04u;
    // 0x26bd08: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x26BD04u, 0x26BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD0Cu;
label_26bd0c:
    // 0x26bd0c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26bd10: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x26bd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26bd14: 0xc04ca14  jal         func_132850
    ctx->pc = 0x26BD14u;
    SET_GPR_U32(ctx, 31, 0x26BD1Cu);
    ctx->pc = 0x26BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD14u;
    // 0x26bd18: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x26BD14u, 0x26BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD1Cu;
label_26bd1c:
    // 0x26bd1c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x26bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x26bd20: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x26BD20u;
    SET_GPR_U32(ctx, 31, 0x26BD28u);
    ctx->pc = 0x26BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD20u;
    // 0x26bd24: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x26BD20u, 0x26BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD28u;
label_26bd28:
    // 0x26bd28: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x26BD28u;
    SET_GPR_U32(ctx, 31, 0x26BD30u);
    ctx->pc = 0x26BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD28u;
    // 0x26bd2c: 0x24040ebc  addiu       $a0, $zero, 0xEBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x26BD28u, 0x26BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD30u;
label_26bd30:
    // 0x26bd30: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x26bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x26bd34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26bd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd38: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x26BD38u;
    SET_GPR_U32(ctx, 31, 0x26BD40u);
    ctx->pc = 0x26BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD38u;
    // 0x26bd3c: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x26BD38u, 0x26BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD40u;
label_26bd40:
    // 0x26bd40: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x26bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x26bd44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26bd48: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x26BD48u;
    {
        const bool branch_taken_0x26bd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD48u;
        // 0x26bd4c: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd48) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BD50u;
label_26bd50:
    // 0x26bd50: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x26BD50u;
    SET_GPR_U32(ctx, 31, 0x26BD58u);
    ctx->pc = 0x26BD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD50u;
    // 0x26bd54: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x26BD50u, 0x26BD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD58u;
label_26bd58:
    // 0x26bd58: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x26BD58u;
    {
        const bool branch_taken_0x26bd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD58u;
        // 0x26bd5c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd58) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BD60u;
    // 0x26bd60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26bd64: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x26bd68: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x26bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x26bd6c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26bd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26bd70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bd74: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x26BD74u;
    SET_GPR_U32(ctx, 31, 0x26BD7Cu);
    ctx->pc = 0x26BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD74u;
    // 0x26bd78: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x26BD74u, 0x26BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD7Cu;
label_26bd7c:
    // 0x26bd7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26bd80: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26bd84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26bd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26bd88: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26bd8c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x26bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x26bd90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26bd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd94: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26bd94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26bd98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26bd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26bd9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bda0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26bda0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bda4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26bda4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bda8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26BDA8u;
    SET_GPR_U32(ctx, 31, 0x26BDB0u);
    ctx->pc = 0x26BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDA8u;
    // 0x26bdac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26BDA8u, 0x26BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDB0u;
label_26bdb0:
    // 0x26bdb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bdb4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26bdb8: 0x8c2aceb8  lw          $t2, -0x3148($at)
    ctx->pc = 0x26bdb8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26bdbc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x26bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x26bdc0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x26bdc4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26bdc8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26bdcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26bdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26bdd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26bdd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdd8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x26bdd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26bddc: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x26bddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x26bde0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bde4: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x26bde4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26bde8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bdec: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26bdf0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26bdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26bdf4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bdf8: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x26BDF8u;
    SET_GPR_U32(ctx, 31, 0x26BE00u);
    ctx->pc = 0x26BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDF8u;
    // 0x26bdfc: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x26BDF8u, 0x26BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE00u;
label_26be00:
    // 0x26be00: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26be00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26be04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26be04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26be08: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x26be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x26be0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26be10: 0x2406010e  addiu       $a2, $zero, 0x10E
    ctx->pc = 0x26be10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x26be14: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x26BE14u;
    SET_GPR_U32(ctx, 31, 0x26BE1Cu);
    ctx->pc = 0x26BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE14u;
    // 0x26be18: 0xa020cea9  sb          $zero, -0x3157($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954665), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x26BE14u, 0x26BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE1Cu;
label_26be1c:
    // 0x26be1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x26be20: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x26be20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x26be24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26be28: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x26BE28u;
    {
        const bool branch_taken_0x26be28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE28u;
        // 0x26be2c: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be28) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BE30u;
label_26be30:
    // 0x26be30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26be30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26be34: 0xc063d48  jal         func_18F520
    ctx->pc = 0x26BE34u;
    SET_GPR_U32(ctx, 31, 0x26BE3Cu);
    ctx->pc = 0x26BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE34u;
    // 0x26be38: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x26BE34u, 0x26BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE3Cu;
label_26be3c:
    // 0x26be3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26BE3Cu;
    {
        const bool branch_taken_0x26be3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE3Cu;
        // 0x26be40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be3c) {
            ctx->pc = 0x26BE68u;
            goto label_26be68;
        }
    }
    ctx->pc = 0x26BE44u;
    // 0x26be44: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26BE44u;
    SET_GPR_U32(ctx, 31, 0x26BE4Cu);
    ctx->pc = 0x26BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE44u;
    // 0x26be48: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26BE44u, 0x26BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE4Cu;
label_26be4c:
    // 0x26be4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26be50: 0xa20200a0  sb          $v0, 0xA0($s0)
    ctx->pc = 0x26be50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x26be54: 0xa20000a1  sb          $zero, 0xA1($s0)
    ctx->pc = 0x26be54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 161), (uint8_t)GPR_U32(ctx, 0));
    // 0x26be58: 0xa20000a2  sb          $zero, 0xA2($s0)
    ctx->pc = 0x26be58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 0));
    // 0x26be5c: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x26be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x26be60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26be60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26be64: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x26be64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_26be68:
    // 0x26be68: 0xc09b814  jal         func_26E050
    ctx->pc = 0x26BE68u;
    SET_GPR_U32(ctx, 31, 0x26BE70u);
    ctx->pc = 0x26BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE68u;
    // 0x26be6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E050u, 0x26BE68u, 0x26BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE70u;
label_26be70:
    // 0x26be70: 0xc09b9c4  jal         func_26E710
    ctx->pc = 0x26BE70u;
    SET_GPR_U32(ctx, 31, 0x26BE78u);
    ctx->pc = 0x26BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE70u;
    // 0x26be74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E710u, 0x26BE70u, 0x26BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE78u;
label_26be78:
    // 0x26be78: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x26BE78u;
    {
        const bool branch_taken_0x26be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26be78) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BE80u;
label_26be80:
    // 0x26be80: 0xc09b0a4  jal         func_26C290
    ctx->pc = 0x26BE80u;
    SET_GPR_U32(ctx, 31, 0x26BE88u);
    ctx->pc = 0x26C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C290u, 0x26BE80u, 0x26BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE88u;
label_26be88:
    // 0x26be88: 0xc09b814  jal         func_26E050
    ctx->pc = 0x26BE88u;
    SET_GPR_U32(ctx, 31, 0x26BE90u);
    ctx->pc = 0x26BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE88u;
    // 0x26be8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E050u, 0x26BE88u, 0x26BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE90u;
label_26be90:
    // 0x26be90: 0xc09b9c4  jal         func_26E710
    ctx->pc = 0x26BE90u;
    SET_GPR_U32(ctx, 31, 0x26BE98u);
    ctx->pc = 0x26BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE90u;
    // 0x26be94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E710u, 0x26BE90u, 0x26BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE98u;
label_26be98:
    // 0x26be98: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x26BE98u;
    {
        const bool branch_taken_0x26be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26be98) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BEA0u;
label_26bea0:
    // 0x26bea0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26bea4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26bea8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26beac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26beacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26beb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26beb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26beb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26beb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26beb8: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x26BEB8u;
    SET_GPR_U32(ctx, 31, 0x26BEC0u);
    ctx->pc = 0x26BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEB8u;
    // 0x26bebc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x26BEB8u, 0x26BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEC0u;
label_26bec0:
    // 0x26bec0: 0xc09b814  jal         func_26E050
    ctx->pc = 0x26BEC0u;
    SET_GPR_U32(ctx, 31, 0x26BEC8u);
    ctx->pc = 0x26BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEC0u;
    // 0x26bec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E050u, 0x26BEC0u, 0x26BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEC8u;
label_26bec8:
    // 0x26bec8: 0xc09b9c4  jal         func_26E710
    ctx->pc = 0x26BEC8u;
    SET_GPR_U32(ctx, 31, 0x26BED0u);
    ctx->pc = 0x26BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEC8u;
    // 0x26becc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E710u, 0x26BEC8u, 0x26BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BED0u;
label_26bed0:
    // 0x26bed0: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x26bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x26bed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26bed8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x26BED8u;
    {
        const bool branch_taken_0x26bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BED8u;
        // 0x26bedc: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bed8) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BEE0u;
label_26bee0:
    // 0x26bee0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26bee4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x26BEE4u;
    SET_GPR_U32(ctx, 31, 0x26BEECu);
    ctx->pc = 0x26BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEE4u;
    // 0x26bee8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x26BEE4u, 0x26BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEECu;
label_26beec:
    // 0x26beec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26BEECu;
    {
        const bool branch_taken_0x26beec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEECu;
        // 0x26bef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26beec) {
            ctx->pc = 0x26BF10u;
            goto label_26bf10;
        }
    }
    ctx->pc = 0x26BEF4u;
    // 0x26bef4: 0xc09b814  jal         func_26E050
    ctx->pc = 0x26BEF4u;
    SET_GPR_U32(ctx, 31, 0x26BEFCu);
    ctx->pc = 0x26E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E050u, 0x26BEF4u, 0x26BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEFCu;
label_26befc:
    // 0x26befc: 0xc09b9c4  jal         func_26E710
    ctx->pc = 0x26BEFCu;
    SET_GPR_U32(ctx, 31, 0x26BF04u);
    ctx->pc = 0x26BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEFCu;
    // 0x26bf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E710u, 0x26BEFCu, 0x26BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF04u;
label_26bf04:
    // 0x26bf04: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x26BF04u;
    {
        const bool branch_taken_0x26bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bf04) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BF0Cu;
    // 0x26bf0c: 0x0  nop
    ctx->pc = 0x26bf0cu;
    // NOP
label_26bf10:
    // 0x26bf10: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x26bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x26bf14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26bf1c: 0xc09bb5c  jal         func_26ED70
    ctx->pc = 0x26BF1Cu;
    SET_GPR_U32(ctx, 31, 0x26BF24u);
    ctx->pc = 0x26BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF1Cu;
    // 0x26bf20: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ED70u, 0x26BF1Cu, 0x26BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF24u;
label_26bf24:
    // 0x26bf24: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x26bf24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x26bf28: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x26bf28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x26bf2c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x26bf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x26bf30: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x26bf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x26bf34: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x26BF34u;
    {
        const bool branch_taken_0x26bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF34u;
        // 0x26bf38: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf34) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BF3Cu;
    // 0x26bf3c: 0x0  nop
    ctx->pc = 0x26bf3cu;
    // NOP
label_26bf40:
    // 0x26bf40: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x26bf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x26bf44: 0x9022ff2c  lbu         $v0, -0xD4($at)
    ctx->pc = 0x26bf44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FF2Cu));
    // 0x26bf48: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26bf48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26bf4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26bf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26bf50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26bf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26bf54: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26BF54u;
    {
        const bool branch_taken_0x26bf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF54u;
        // 0x26bf58: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf54) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BF5Cu;
    // 0x26bf5c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26bf60: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x26bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x26bf64: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x26bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x26bf68: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x26BF68u;
    SET_GPR_U32(ctx, 31, 0x26BF70u);
    ctx->pc = 0x26BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF68u;
    // 0x26bf6c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x26BF68u, 0x26BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF70u;
label_26bf70:
    // 0x26bf70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bf74: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x26bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x26bf78: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26bf7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26bf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26bf80: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26bf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26bf84: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x26bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26bf88: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x26bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x26bf8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26bf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26bf90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bf94: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x26BF94u;
    SET_GPR_U32(ctx, 31, 0x26BF9Cu);
    ctx->pc = 0x26BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF94u;
    // 0x26bf98: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x26BF94u, 0x26BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF9Cu;
label_26bf9c:
    // 0x26bf9c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26bfa0: 0xc095128  jal         func_2544A0
    ctx->pc = 0x26BFA0u;
    SET_GPR_U32(ctx, 31, 0x26BFA8u);
    ctx->pc = 0x26BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFA0u;
    // 0x26bfa4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x26BFA0u, 0x26BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFA8u;
label_26bfa8:
    // 0x26bfa8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26BFA8u;
    {
        const bool branch_taken_0x26bfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bfa8) {
            ctx->pc = 0x26BFE0u;
            goto label_26bfe0;
        }
    }
    ctx->pc = 0x26BFB0u;
label_26bfb0:
    // 0x26bfb0: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x26bfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x26bfb4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bfb8: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x26bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x26bfbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26bfbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfc0: 0xac24ceb8  sw          $a0, -0x3148($at)
    ctx->pc = 0x26bfc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26bfc4: 0xa20000aa  sb          $zero, 0xAA($s0)
    ctx->pc = 0x26bfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 170), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bfc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bfcc: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x26bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x26bfd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26bfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26bfd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bfd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26BFD8u;
    {
        const bool branch_taken_0x26bfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFD8u;
        // 0x26bfdc: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfd8) {
            ctx->pc = 0x26BFE8u;
            goto label_26bfe8;
        }
    }
    ctx->pc = 0x26BFE0u;
label_26bfe0:
    // 0x26bfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bfe4: 0x0  nop
    ctx->pc = 0x26bfe4u;
    // NOP
label_26bfe8:
    // 0x26bfe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26bfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bfec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26bfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bff0: 0x3e00008  jr          $ra
    ctx->pc = 0x26BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFF0u;
        // 0x26bff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BFF8u;
}
