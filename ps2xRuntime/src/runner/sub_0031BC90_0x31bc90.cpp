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

// Function: sub_0031BC90
// Address: 0x31bc90 - 0x31c310
void sub_0031BC90_0x31bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BC90_0x31bc90");
#endif

    switch (ctx->pc) {
        case 0x31bcc4u: goto label_31bcc4;
        case 0x31bd48u: goto label_31bd48;
        case 0x31bd60u: goto label_31bd60;
        case 0x31bda8u: goto label_31bda8;
        case 0x31bde8u: goto label_31bde8;
        case 0x31bdf4u: goto label_31bdf4;
        case 0x31be14u: goto label_31be14;
        case 0x31be24u: goto label_31be24;
        case 0x31be34u: goto label_31be34;
        case 0x31be44u: goto label_31be44;
        case 0x31be78u: goto label_31be78;
        case 0x31be94u: goto label_31be94;
        case 0x31bed0u: goto label_31bed0;
        case 0x31befcu: goto label_31befc;
        case 0x31bf44u: goto label_31bf44;
        case 0x31bf54u: goto label_31bf54;
        case 0x31bf64u: goto label_31bf64;
        case 0x31bfc4u: goto label_31bfc4;
        case 0x31bfd4u: goto label_31bfd4;
        case 0x31c034u: goto label_31c034;
        case 0x31c044u: goto label_31c044;
        case 0x31c078u: goto label_31c078;
        case 0x31c090u: goto label_31c090;
        case 0x31c0a4u: goto label_31c0a4;
        case 0x31c114u: goto label_31c114;
        case 0x31c154u: goto label_31c154;
        case 0x31c178u: goto label_31c178;
        case 0x31c188u: goto label_31c188;
        case 0x31c194u: goto label_31c194;
        case 0x31c1b0u: goto label_31c1b0;
        case 0x31c1dcu: goto label_31c1dc;
        case 0x31c200u: goto label_31c200;
        case 0x31c214u: goto label_31c214;
        case 0x31c224u: goto label_31c224;
        case 0x31c248u: goto label_31c248;
        case 0x31c2f0u: goto label_31c2f0;
        default: break;
    }

    ctx->pc = 0x31bc90u;

    // 0x31bc90: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x31bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x31bc94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31bc98: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31bc9c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31bca0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31bca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bca4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31bca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31bca8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x31bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x31bcac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31bcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31bcb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31bcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31bcb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31bcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bcb8: 0x8e850518  lw          $a1, 0x518($s4)
    ctx->pc = 0x31bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
    // 0x31bcbc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x31BCBCu;
    SET_GPR_U32(ctx, 31, 0x31BCC4u);
    ctx->pc = 0x31BCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCBCu;
    // 0x31bcc0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x31BCBCu, 0x31BCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BCC4u;
label_31bcc4:
    // 0x31bcc4: 0x92840521  lbu         $a0, 0x521($s4)
    ctx->pc = 0x31bcc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x31bcc8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31bccc: 0x10830094  beq         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x31BCCCu;
    {
        const bool branch_taken_0x31bccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCCCu;
        // 0x31bcd0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bccc) {
            ctx->pc = 0x31BF20u;
            goto label_31bf20;
        }
    }
    ctx->pc = 0x31BCD4u;
    // 0x31bcd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31bcd8: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x31BCD8u;
    {
        const bool branch_taken_0x31bcd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCD8u;
        // 0x31bcdc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcd8) {
            ctx->pc = 0x31BE68u;
            goto label_31be68;
        }
    }
    ctx->pc = 0x31BCE0u;
    // 0x31bce0: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x31BCE0u;
    {
        const bool branch_taken_0x31bce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCE0u;
        // 0x31bce4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bce0) {
            ctx->pc = 0x31BD98u;
            goto label_31bd98;
        }
    }
    ctx->pc = 0x31BCE8u;
    // 0x31bce8: 0x10860023  beq         $a0, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x31BCE8u;
    {
        const bool branch_taken_0x31bce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x31bce8) {
            ctx->pc = 0x31BD78u;
            goto label_31bd78;
        }
    }
    ctx->pc = 0x31BCF0u;
    // 0x31bcf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BCF0u;
    {
        const bool branch_taken_0x31bcf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bcf0) {
            ctx->pc = 0x31BD00u;
            goto label_31bd00;
        }
    }
    ctx->pc = 0x31BCF8u;
    // 0x31bcf8: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x31BCF8u;
    {
        const bool branch_taken_0x31bcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bcf8) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31BD00u;
label_31bd00:
    // 0x31bd00: 0x9285057e  lbu         $a1, 0x57E($s4)
    ctx->pc = 0x31bd00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1406)));
    // 0x31bd04: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31bd08: 0x2463c99a  addiu       $v1, $v1, -0x3666
    ctx->pc = 0x31bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953370));
    // 0x31bd0c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x31bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31bd10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31bd14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31bd18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31bd1c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x31bd1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31bd20: 0x1066000b  beq         $v1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x31BD20u;
    {
        const bool branch_taken_0x31bd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x31bd20) {
            ctx->pc = 0x31BD50u;
            goto label_31bd50;
        }
    }
    ctx->pc = 0x31BD28u;
    // 0x31bd28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BD28u;
    {
        const bool branch_taken_0x31bd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bd28) {
            ctx->pc = 0x31BD38u;
            goto label_31bd38;
        }
    }
    ctx->pc = 0x31BD30u;
    // 0x31bd30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31BD30u;
    {
        const bool branch_taken_0x31bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bd30) {
            ctx->pc = 0x31BD68u;
            goto label_31bd68;
        }
    }
    ctx->pc = 0x31BD38u;
label_31bd38:
    // 0x31bd38: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x31bd38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x31bd3c: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x31bd3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x31bd40: 0xc0a9bd4  jal         func_2A6F50
    ctx->pc = 0x31BD40u;
    SET_GPR_U32(ctx, 31, 0x31BD48u);
    ctx->pc = 0x31BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD40u;
    // 0x31bd44: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F50u, 0x31BD40u, 0x31BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD48u;
label_31bd48:
    // 0x31bd48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31BD48u;
    {
        const bool branch_taken_0x31bd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD48u;
        // 0x31bd4c: 0xae820570  sw          $v0, 0x570($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd48) {
            ctx->pc = 0x31BD68u;
            goto label_31bd68;
        }
    }
    ctx->pc = 0x31BD50u;
label_31bd50:
    // 0x31bd50: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x31bd50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x31bd54: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x31bd54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x31bd58: 0xc0a9d7c  jal         func_2A75F0
    ctx->pc = 0x31BD58u;
    SET_GPR_U32(ctx, 31, 0x31BD60u);
    ctx->pc = 0x31BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD58u;
    // 0x31bd5c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A75F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A75F0u, 0x31BD58u, 0x31BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD60u;
label_31bd60:
    // 0x31bd60: 0xae820570  sw          $v0, 0x570($s4)
    ctx->pc = 0x31bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1392), GPR_U32(ctx, 2));
    // 0x31bd64: 0x0  nop
    ctx->pc = 0x31bd64u;
    // NOP
label_31bd68:
    // 0x31bd68: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x31bd68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x31bd6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31bd70: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x31BD70u;
    {
        const bool branch_taken_0x31bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD70u;
        // 0x31bd74: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd70) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31BD78u;
label_31bd78:
    // 0x31bd78: 0xa6800512  sh          $zero, 0x512($s4)
    ctx->pc = 0x31bd78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 0));
    // 0x31bd7c: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x31bd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x31bd80: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x31bd80u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bd84: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x31bd84u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bd88: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x31bd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x31bd8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31bd90: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x31bd90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x31bd94: 0x0  nop
    ctx->pc = 0x31bd94u;
    // NOP
label_31bd98:
    // 0x31bd98: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BD98u;
    {
        const bool branch_taken_0x31bd98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD98u;
        // 0x31bd9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd98) {
            ctx->pc = 0x31BDB0u;
            goto label_31bdb0;
        }
    }
    ctx->pc = 0x31BDA0u;
    // 0x31bda0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31BDA0u;
    SET_GPR_U32(ctx, 31, 0x31BDA8u);
    ctx->pc = 0x31BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDA0u;
    // 0x31bda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31BDA0u, 0x31BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDA8u;
label_31bda8:
    // 0x31bda8: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x31BDA8u;
    {
        const bool branch_taken_0x31bda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bda8) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31BDB0u;
label_31bdb0:
    // 0x31bdb0: 0x9284057e  lbu         $a0, 0x57E($s4)
    ctx->pc = 0x31bdb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1406)));
    // 0x31bdb4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31bdb8: 0x2442c999  addiu       $v0, $v0, -0x3667
    ctx->pc = 0x31bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953369));
    // 0x31bdbc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31bdc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31bdc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31bdc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bdcc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31bdccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31bdd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31BDD0u;
    {
        const bool branch_taken_0x31bdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDD0u;
        // 0x31bdd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bdd0) {
            ctx->pc = 0x31BE00u;
            goto label_31be00;
        }
    }
    ctx->pc = 0x31BDD8u;
    // 0x31bdd8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x31bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x31bddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31bddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bde0: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x31BDE0u;
    SET_GPR_U32(ctx, 31, 0x31BDE8u);
    ctx->pc = 0x31BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDE0u;
    // 0x31bde4: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x31BDE0u, 0x31BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDE8u;
label_31bde8:
    // 0x31bde8: 0x268400c0  addiu       $a0, $s4, 0xC0
    ctx->pc = 0x31bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x31bdec: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x31BDECu;
    SET_GPR_U32(ctx, 31, 0x31BDF4u);
    ctx->pc = 0x31BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDECu;
    // 0x31bdf0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x31BDECu, 0x31BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDF4u;
label_31bdf4:
    // 0x31bdf4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31BDF4u;
    {
        const bool branch_taken_0x31bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bdf4) {
            ctx->pc = 0x31BE48u;
            goto label_31be48;
        }
    }
    ctx->pc = 0x31BDFCu;
    // 0x31bdfc: 0x0  nop
    ctx->pc = 0x31bdfcu;
    // NOP
label_31be00:
    // 0x31be00: 0x9287057f  lbu         $a3, 0x57F($s4)
    ctx->pc = 0x31be00u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1407)));
    // 0x31be04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31be04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x31be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x31be0c: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x31BE0Cu;
    SET_GPR_U32(ctx, 31, 0x31BE14u);
    ctx->pc = 0x31BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE0Cu;
    // 0x31be10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x31BE0Cu, 0x31BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE14u;
label_31be14:
    // 0x31be14: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x31be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31be18: 0x26850550  addiu       $a1, $s4, 0x550
    ctx->pc = 0x31be18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
    // 0x31be1c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x31BE1Cu;
    SET_GPR_U32(ctx, 31, 0x31BE24u);
    ctx->pc = 0x31BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE1Cu;
    // 0x31be20: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x31BE1Cu, 0x31BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE24u;
label_31be24:
    // 0x31be24: 0x8e860570  lw          $a2, 0x570($s4)
    ctx->pc = 0x31be24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1392)));
    // 0x31be28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31be28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be2c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x31BE2Cu;
    SET_GPR_U32(ctx, 31, 0x31BE34u);
    ctx->pc = 0x31BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE2Cu;
    // 0x31be30: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x31BE2Cu, 0x31BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE34u;
label_31be34:
    // 0x31be34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BE34u;
    {
        const bool branch_taken_0x31be34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE34u;
        // 0x31be38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be34) {
            ctx->pc = 0x31BE48u;
            goto label_31be48;
        }
    }
    ctx->pc = 0x31BE3Cu;
    // 0x31be3c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31BE3Cu;
    SET_GPR_U32(ctx, 31, 0x31BE44u);
    ctx->pc = 0x31BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE3Cu;
    // 0x31be40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31BE3Cu, 0x31BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE44u;
label_31be44:
    // 0x31be44: 0x0  nop
    ctx->pc = 0x31be44u;
    // NOP
label_31be48:
    // 0x31be48: 0x9283053a  lbu         $v1, 0x53A($s4)
    ctx->pc = 0x31be48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1338)));
    // 0x31be4c: 0x10600128  beqz        $v1, . + 4 + (0x128 << 2)
    ctx->pc = 0x31BE4Cu;
    {
        const bool branch_taken_0x31be4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31be4c) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31BE54u;
    // 0x31be54: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x31be54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x31be58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31be58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31be5c: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x31BE5Cu;
    {
        const bool branch_taken_0x31be5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE5Cu;
        // 0x31be60: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be5c) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31BE64u;
    // 0x31be64: 0x0  nop
    ctx->pc = 0x31be64u;
    // NOP
label_31be68:
    // 0x31be68: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BE68u;
    {
        const bool branch_taken_0x31be68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE68u;
        // 0x31be6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be68) {
            ctx->pc = 0x31BE80u;
            goto label_31be80;
        }
    }
    ctx->pc = 0x31BE70u;
    // 0x31be70: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31BE70u;
    SET_GPR_U32(ctx, 31, 0x31BE78u);
    ctx->pc = 0x31BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE70u;
    // 0x31be74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31BE70u, 0x31BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE78u;
label_31be78:
    // 0x31be78: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x31BE78u;
    {
        const bool branch_taken_0x31be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31be78) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31BE80u;
label_31be80:
    // 0x31be80: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x31be80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x31be84: 0x7e820560  sq          $v0, 0x560($s4)
    ctx->pc = 0x31be84u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 1376), GPR_VEC(ctx, 2));
    // 0x31be88: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x31be88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x31be8c: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x31BE8Cu;
    SET_GPR_U32(ctx, 31, 0x31BE94u);
    ctx->pc = 0x31BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE8Cu;
    // 0x31be90: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x31BE8Cu, 0x31BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE94u;
label_31be94:
    // 0x31be94: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x31BE94u;
    {
        const bool branch_taken_0x31be94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE94u;
        // 0x31be98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be94) {
            ctx->pc = 0x31BEA0u;
            goto label_31bea0;
        }
    }
    ctx->pc = 0x31BE9Cu;
    // 0x31be9c: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x31be9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_31bea0:
    // 0x31bea0: 0x9288057e  lbu         $t0, 0x57E($s4)
    ctx->pc = 0x31bea0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1406)));
    // 0x31bea4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31bea8: 0x2442c994  addiu       $v0, $v0, -0x366C
    ctx->pc = 0x31bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953364));
    // 0x31beac: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x31beacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31beb0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x31beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31beb4: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x31beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x31beb8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x31beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x31bebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31bec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bec4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x31bec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31bec8: 0xc096f00  jal         func_25BC00
    ctx->pc = 0x31BEC8u;
    SET_GPR_U32(ctx, 31, 0x31BED0u);
    ctx->pc = 0x31BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BEC8u;
    // 0x31becc: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC00u, 0x31BEC8u, 0x31BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BED0u;
label_31bed0:
    // 0x31bed0: 0x9286057e  lbu         $a2, 0x57E($s4)
    ctx->pc = 0x31bed0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1406)));
    // 0x31bed4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31bed8: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x31bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31bedc: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x31bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x31bee0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x31bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31bee4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31bee8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31beec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31beecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bef0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x31bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31bef4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x31BEF4u;
    SET_GPR_U32(ctx, 31, 0x31BEFCu);
    ctx->pc = 0x31BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BEF4u;
    // 0x31bef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x31BEF4u, 0x31BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEFCu;
label_31befc:
    // 0x31befc: 0x86820526  lh          $v0, 0x526($s4)
    ctx->pc = 0x31befcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1318)));
    // 0x31bf00: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x31bf00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x31bf04: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x31bf04u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x31bf08: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x31bf08u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bf0c: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x31bf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bf10: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x31bf10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x31bf14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31bf18: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x31bf18u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x31bf1c: 0x0  nop
    ctx->pc = 0x31bf1cu;
    // NOP
label_31bf20:
    // 0x31bf20: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x31bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x31bf24: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x31bf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x31bf28: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x31bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31bf2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31bf30: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x31bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31bf34: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31bf34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31bf38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31bf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31bf3c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x31BF3Cu;
    SET_GPR_U32(ctx, 31, 0x31BF44u);
    ctx->pc = 0x31BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF3Cu;
    // 0x31bf40: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x31BF3Cu, 0x31BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF44u;
label_31bf44:
    // 0x31bf44: 0x8e860570  lw          $a2, 0x570($s4)
    ctx->pc = 0x31bf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1392)));
    // 0x31bf48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31bf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf4c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x31BF4Cu;
    SET_GPR_U32(ctx, 31, 0x31BF54u);
    ctx->pc = 0x31BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF4Cu;
    // 0x31bf50: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x31BF4Cu, 0x31BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF54u;
label_31bf54:
    // 0x31bf54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BF54u;
    {
        const bool branch_taken_0x31bf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF54u;
        // 0x31bf58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf54) {
            ctx->pc = 0x31BF68u;
            goto label_31bf68;
        }
    }
    ctx->pc = 0x31BF5Cu;
    // 0x31bf5c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31BF5Cu;
    SET_GPR_U32(ctx, 31, 0x31BF64u);
    ctx->pc = 0x31BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF5Cu;
    // 0x31bf60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31BF5Cu, 0x31BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF64u;
label_31bf64:
    // 0x31bf64: 0x0  nop
    ctx->pc = 0x31bf64u;
    // NOP
label_31bf68:
    // 0x31bf68: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31bf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31bf6c: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x31bf6cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x31bf70: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x31bf70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x31bf74: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x31bf74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31bf78: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x31bf78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x31bf7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31bf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf80: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x31bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31bf84: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31bf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31bf88: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x31bf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x31bf8c: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x31bf8cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x31bf90: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x31bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x31bf94: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31bf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31bf98: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x31bf98u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x31bf9c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x31bf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x31bfa0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31bfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31bfa4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x31bfa4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x31bfa8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x31bfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x31bfac: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x31bfacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x31bfb0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x31bfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x31bfb4: 0x9286057d  lbu         $a2, 0x57D($s4)
    ctx->pc = 0x31bfb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1405)));
    // 0x31bfb8: 0xc68c0578  lwc1        $f12, 0x578($s4)
    ctx->pc = 0x31bfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31bfbc: 0xc0c0960  jal         func_302580
    ctx->pc = 0x31BFBCu;
    SET_GPR_U32(ctx, 31, 0x31BFC4u);
    ctx->pc = 0x31BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BFBCu;
    // 0x31bfc0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x31BFBCu, 0x31BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFC4u;
label_31bfc4:
    // 0x31bfc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31BFC4u;
    {
        const bool branch_taken_0x31bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFC4u;
        // 0x31bfc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfc4) {
            ctx->pc = 0x31BFE0u;
            goto label_31bfe0;
        }
    }
    ctx->pc = 0x31BFCCu;
    // 0x31bfcc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31BFCCu;
    SET_GPR_U32(ctx, 31, 0x31BFD4u);
    ctx->pc = 0x31BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BFCCu;
    // 0x31bfd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31BFCCu, 0x31BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFD4u;
label_31bfd4:
    // 0x31bfd4: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x31BFD4u;
    {
        const bool branch_taken_0x31bfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bfd4) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31BFDCu;
    // 0x31bfdc: 0x0  nop
    ctx->pc = 0x31bfdcu;
    // NOP
label_31bfe0:
    // 0x31bfe0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31bfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31bfe4: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x31bfe4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x31bfe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bfec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x31bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31bff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31bff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bff4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31bff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31bff8: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x31bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x31bffc: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x31bffcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x31c000: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x31c000u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x31c004: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31c004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31c008: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x31c008u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x31c00c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x31c00cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x31c010: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31c010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31c014: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x31c014u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x31c018: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x31c018u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x31c01c: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x31c01cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x31c020: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x31c020u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x31c024: 0x9286057c  lbu         $a2, 0x57C($s4)
    ctx->pc = 0x31c024u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1404)));
    // 0x31c028: 0xc68c0574  lwc1        $f12, 0x574($s4)
    ctx->pc = 0x31c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31c02c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x31C02Cu;
    SET_GPR_U32(ctx, 31, 0x31C034u);
    ctx->pc = 0x31C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C02Cu;
    // 0x31c030: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x31C02Cu, 0x31C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C034u;
label_31c034:
    // 0x31c034: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C034u;
    {
        const bool branch_taken_0x31c034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C034u;
        // 0x31c038: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c034) {
            ctx->pc = 0x31C050u;
            goto label_31c050;
        }
    }
    ctx->pc = 0x31C03Cu;
    // 0x31c03c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31C03Cu;
    SET_GPR_U32(ctx, 31, 0x31C044u);
    ctx->pc = 0x31C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C03Cu;
    // 0x31c040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31C03Cu, 0x31C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C044u;
label_31c044:
    // 0x31c044: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x31C044u;
    {
        const bool branch_taken_0x31c044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c044) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31C04Cu;
    // 0x31c04c: 0x0  nop
    ctx->pc = 0x31c04cu;
    // NOP
label_31c050:
    // 0x31c050: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31c050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x31c054: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x31c054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x31c058: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31c058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c05c: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x31c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31c060: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x31c060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x31c064: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x31c064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c068: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x31c068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31c06c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x31c06cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c070: 0xc0c0980  jal         func_302600
    ctx->pc = 0x31C070u;
    SET_GPR_U32(ctx, 31, 0x31C078u);
    ctx->pc = 0x31C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C070u;
    // 0x31c074: 0x27aa012c  addiu       $t2, $sp, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x31C070u, 0x31C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C078u;
label_31c078:
    // 0x31c078: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x31C078u;
    {
        const bool branch_taken_0x31c078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c078) {
            ctx->pc = 0x31C218u;
            goto label_31c218;
        }
    }
    ctx->pc = 0x31C080u;
    // 0x31c080: 0x8e860570  lw          $a2, 0x570($s4)
    ctx->pc = 0x31c080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1392)));
    // 0x31c084: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c088: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x31C088u;
    SET_GPR_U32(ctx, 31, 0x31C090u);
    ctx->pc = 0x31C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C088u;
    // 0x31c08c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x31C088u, 0x31C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C090u;
label_31c090:
    // 0x31c090: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x31c090u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x31c094: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31c094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31c098: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x31c098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31c09c: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x31C09Cu;
    SET_GPR_U32(ctx, 31, 0x31C0A4u);
    ctx->pc = 0x31C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C09Cu;
    // 0x31c0a0: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x31C09Cu, 0x31C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C0A4u;
label_31c0a4:
    // 0x31c0a4: 0x9285057e  lbu         $a1, 0x57E($s4)
    ctx->pc = 0x31c0a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1406)));
    // 0x31c0a8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31c0ac: 0x2463c99a  addiu       $v1, $v1, -0x3666
    ctx->pc = 0x31c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953370));
    // 0x31c0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c0b4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x31c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31c0b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31c0bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31c0c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31c0c4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x31c0c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c0c8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31C0C8u;
    {
        const bool branch_taken_0x31c0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31c0c8) {
            ctx->pc = 0x31C120u;
            goto label_31c120;
        }
    }
    ctx->pc = 0x31C0D0u;
    // 0x31c0d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C0D0u;
    {
        const bool branch_taken_0x31c0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c0d0) {
            ctx->pc = 0x31C0E0u;
            goto label_31c0e0;
        }
    }
    ctx->pc = 0x31C0D8u;
    // 0x31c0d8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31C0D8u;
    {
        const bool branch_taken_0x31c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c0d8) {
            ctx->pc = 0x31C158u;
            goto label_31c158;
        }
    }
    ctx->pc = 0x31C0E0u;
label_31c0e0:
    // 0x31c0e0: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x31c0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x31c0e4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31c0e8: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x31c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
    // 0x31c0ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31c0f0: 0x34459802  ori         $a1, $v0, 0x9802
    ctx->pc = 0x31c0f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38914);
    // 0x31c0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0f8: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x31c0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31c0fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31c0fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c100: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31c100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c104: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31c104u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c108: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31c108u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c10c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31C10Cu;
    SET_GPR_U32(ctx, 31, 0x31C114u);
    ctx->pc = 0x31C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C10Cu;
    // 0x31c110: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31C10Cu, 0x31C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C114u;
label_31c114:
    // 0x31c114: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31C114u;
    {
        const bool branch_taken_0x31c114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c114) {
            ctx->pc = 0x31C158u;
            goto label_31c158;
        }
    }
    ctx->pc = 0x31C11Cu;
    // 0x31c11c: 0x0  nop
    ctx->pc = 0x31c11cu;
    // NOP
label_31c120:
    // 0x31c120: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x31c120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x31c124: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31c124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31c128: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x31c128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
    // 0x31c12c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31c130: 0x34459902  ori         $a1, $v0, 0x9902
    ctx->pc = 0x31c130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39170);
    // 0x31c134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c138: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x31c138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31c13c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31c13cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c140: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31c140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c144: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31c144u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c148: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31c148u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c14c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31C14Cu;
    SET_GPR_U32(ctx, 31, 0x31C154u);
    ctx->pc = 0x31C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C14Cu;
    // 0x31c150: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31C14Cu, 0x31C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C154u;
label_31c154:
    // 0x31c154: 0x0  nop
    ctx->pc = 0x31c154u;
    // NOP
label_31c158:
    // 0x31c158: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x31C158u;
    {
        const bool branch_taken_0x31c158 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c158) {
            ctx->pc = 0x31C208u;
            goto label_31c208;
        }
    }
    ctx->pc = 0x31C160u;
    // 0x31c160: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x31c160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x31c164: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x31c164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x31c168: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x31c168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31c16c: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x31c16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31c170: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x31C170u;
    SET_GPR_U32(ctx, 31, 0x31C178u);
    ctx->pc = 0x31C174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C170u;
    // 0x31c174: 0x7e820560  sq          $v0, 0x560($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 1376), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x31C170u, 0x31C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C178u;
label_31c178:
    // 0x31c178: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x31c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31c17c: 0xae800094  sw          $zero, 0x94($s4)
    ctx->pc = 0x31c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
    // 0x31c180: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x31C180u;
    SET_GPR_U32(ctx, 31, 0x31C188u);
    ctx->pc = 0x31C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C180u;
    // 0x31c184: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x31C180u, 0x31C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C188u;
label_31c188:
    // 0x31c188: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x31c188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31c18c: 0xc076654  jal         func_1D9950
    ctx->pc = 0x31C18Cu;
    SET_GPR_U32(ctx, 31, 0x31C194u);
    ctx->pc = 0x31C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C18Cu;
    // 0x31c190: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x31C18Cu, 0x31C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C194u;
label_31c194:
    // 0x31c194: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31c194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c198: 0x0  nop
    ctx->pc = 0x31c198u;
    // NOP
    // 0x31c19c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31c19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c1a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31C1A0u;
    {
        const bool branch_taken_0x31c1a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1A0u;
        // 0x31c1a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1a0) {
            ctx->pc = 0x31C1B0u;
            goto label_31c1b0;
        }
    }
    ctx->pc = 0x31C1A8u;
    // 0x31c1a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31C1A8u;
    SET_GPR_U32(ctx, 31, 0x31C1B0u);
    ctx->pc = 0x31C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C1A8u;
    // 0x31c1ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31C1A8u, 0x31C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C1B0u;
label_31c1b0:
    // 0x31c1b0: 0x9286057e  lbu         $a2, 0x57E($s4)
    ctx->pc = 0x31c1b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1406)));
    // 0x31c1b4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31c1b8: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x31c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31c1bc: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x31c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x31c1c0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x31c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31c1c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31c1c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31c1cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c1d0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x31c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31c1d4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x31C1D4u;
    SET_GPR_U32(ctx, 31, 0x31C1DCu);
    ctx->pc = 0x31C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C1D4u;
    // 0x31c1d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x31C1D4u, 0x31C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C1DCu;
label_31c1dc:
    // 0x31c1dc: 0x92820580  lbu         $v0, 0x580($s4)
    ctx->pc = 0x31c1dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1408)));
    // 0x31c1e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c1e4: 0xa2820580  sb          $v0, 0x580($s4)
    ctx->pc = 0x31c1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1408), (uint8_t)GPR_U32(ctx, 2));
    // 0x31c1e8: 0x92820580  lbu         $v0, 0x580($s4)
    ctx->pc = 0x31c1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1408)));
    // 0x31c1ec: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x31c1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31c1f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31C1F0u;
    {
        const bool branch_taken_0x31c1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1F0u;
        // 0x31c1f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1f0) {
            ctx->pc = 0x31C218u;
            goto label_31c218;
        }
    }
    ctx->pc = 0x31C1F8u;
    // 0x31c1f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31C1F8u;
    SET_GPR_U32(ctx, 31, 0x31C200u);
    ctx->pc = 0x31C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C1F8u;
    // 0x31c1fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31C1F8u, 0x31C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C200u;
label_31c200:
    // 0x31c200: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31C200u;
    {
        const bool branch_taken_0x31c200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c200) {
            ctx->pc = 0x31C218u;
            goto label_31c218;
        }
    }
    ctx->pc = 0x31C208u;
label_31c208:
    // 0x31c208: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c20c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31C20Cu;
    SET_GPR_U32(ctx, 31, 0x31C214u);
    ctx->pc = 0x31C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C20Cu;
    // 0x31c210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31C20Cu, 0x31C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C214u;
label_31c214:
    // 0x31c214: 0x0  nop
    ctx->pc = 0x31c214u;
    // NOP
label_31c218:
    // 0x31c218: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x31c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31c21c: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x31C21Cu;
    SET_GPR_U32(ctx, 31, 0x31C224u);
    ctx->pc = 0x31C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C21Cu;
    // 0x31c220: 0x26850560  addiu       $a1, $s4, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x31C21Cu, 0x31C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C224u;
label_31c224:
    // 0x31c224: 0x3c034a09  lui         $v1, 0x4A09
    ctx->pc = 0x31c224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18953 << 16));
    // 0x31c228: 0x34635440  ori         $v1, $v1, 0x5440
    ctx->pc = 0x31c228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21568);
    // 0x31c22c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31c22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c230: 0x0  nop
    ctx->pc = 0x31c230u;
    // NOP
    // 0x31c234: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31c234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c238: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x31C238u;
    {
        const bool branch_taken_0x31c238 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C238u;
        // 0x31c23c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c238) {
            ctx->pc = 0x31C248u;
            goto label_31c248;
        }
    }
    ctx->pc = 0x31C240u;
    // 0x31c240: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31C240u;
    SET_GPR_U32(ctx, 31, 0x31C248u);
    ctx->pc = 0x31C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C240u;
    // 0x31c244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31C240u, 0x31C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C248u;
label_31c248:
    // 0x31c248: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x31c248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x31c24c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C24Cu;
    {
        const bool branch_taken_0x31c24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C24Cu;
        // 0x31c250: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c24c) {
            ctx->pc = 0x31C260u;
            goto label_31c260;
        }
    }
    ctx->pc = 0x31C254u;
    // 0x31c254: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31C254u;
    {
        const bool branch_taken_0x31c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c254) {
            ctx->pc = 0x31C2E0u;
            goto label_31c2e0;
        }
    }
    ctx->pc = 0x31C25Cu;
    // 0x31c25c: 0x0  nop
    ctx->pc = 0x31c25cu;
    // NOP
label_31c260:
    // 0x31c260: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x31c260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x31c264: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x31c264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x31c268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31c26c: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x31c26cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x31c270: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x31c270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x31c274: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31C274u;
    {
        const bool branch_taken_0x31c274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31c274) {
            ctx->pc = 0x31C2B0u;
            goto label_31c2b0;
        }
    }
    ctx->pc = 0x31C27Cu;
    // 0x31c27c: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x31c27cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x31c280: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x31c280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x31c284: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x31C284u;
    {
        const bool branch_taken_0x31c284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C284u;
        // 0x31c288: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c284) {
            ctx->pc = 0x31C2D8u;
            goto label_31c2d8;
        }
    }
    ctx->pc = 0x31C28Cu;
    // 0x31c28c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c290: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x31c290u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31c294: 0x0  nop
    ctx->pc = 0x31c294u;
    // NOP
    // 0x31c298: 0x0  nop
    ctx->pc = 0x31c298u;
    // NOP
    // 0x31c29c: 0x2010  mfhi        $a0
    ctx->pc = 0x31c29cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x31c2a0: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x31c2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x31c2a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31C2A4u;
    {
        const bool branch_taken_0x31c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2A4u;
        // 0x31c2a8: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2a4) {
            ctx->pc = 0x31C2D8u;
            goto label_31c2d8;
        }
    }
    ctx->pc = 0x31C2ACu;
    // 0x31c2ac: 0x0  nop
    ctx->pc = 0x31c2acu;
    // NOP
label_31c2b0:
    // 0x31c2b0: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x31c2b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x31c2b4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x31c2b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31c2b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C2B8u;
    {
        const bool branch_taken_0x31c2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c2b8) {
            ctx->pc = 0x31C2D8u;
            goto label_31c2d8;
        }
    }
    ctx->pc = 0x31C2C0u;
    // 0x31c2c0: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x31c2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x31c2c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c2c8: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x31c2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x31c2cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31C2CCu;
    {
        const bool branch_taken_0x31c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2CCu;
        // 0x31c2d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2cc) {
            ctx->pc = 0x31C2E0u;
            goto label_31c2e0;
        }
    }
    ctx->pc = 0x31C2D4u;
    // 0x31c2d4: 0x0  nop
    ctx->pc = 0x31c2d4u;
    // NOP
label_31c2d8:
    // 0x31c2d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c2dc: 0x0  nop
    ctx->pc = 0x31c2dcu;
    // NOP
label_31c2e0:
    // 0x31c2e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C2E0u;
    {
        const bool branch_taken_0x31c2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2E0u;
        // 0x31c2e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2e0) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31C2E8u;
    // 0x31c2e8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31C2E8u;
    SET_GPR_U32(ctx, 31, 0x31C2F0u);
    ctx->pc = 0x31C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2E8u;
    // 0x31c2ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31C2E8u, 0x31C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2F0u;
label_31c2f0:
    // 0x31c2f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31c2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c2f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31c2f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c2f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31c2f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c2fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31c2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c300: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31c300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c304: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31c304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c308: 0x3e00008  jr          $ra
    ctx->pc = 0x31C308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C308u;
        // 0x31c30c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C310u;
}
