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

// Function: sub_0034BC20
// Address: 0x34bc20 - 0x34be30
void sub_0034BC20_0x34bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BC20_0x34bc20");
#endif

    switch (ctx->pc) {
        case 0x34bc20u: goto label_34bc20;
        case 0x34bc24u: goto label_34bc24;
        case 0x34bc28u: goto label_34bc28;
        case 0x34bc2cu: goto label_34bc2c;
        case 0x34bc30u: goto label_34bc30;
        case 0x34bc34u: goto label_34bc34;
        case 0x34bc38u: goto label_34bc38;
        case 0x34bc3cu: goto label_34bc3c;
        case 0x34bc40u: goto label_34bc40;
        case 0x34bc44u: goto label_34bc44;
        case 0x34bc48u: goto label_34bc48;
        case 0x34bc4cu: goto label_34bc4c;
        case 0x34bc50u: goto label_34bc50;
        case 0x34bc54u: goto label_34bc54;
        case 0x34bc58u: goto label_34bc58;
        case 0x34bc5cu: goto label_34bc5c;
        case 0x34bc60u: goto label_34bc60;
        case 0x34bc64u: goto label_34bc64;
        case 0x34bc68u: goto label_34bc68;
        case 0x34bc6cu: goto label_34bc6c;
        case 0x34bc70u: goto label_34bc70;
        case 0x34bc74u: goto label_34bc74;
        case 0x34bc78u: goto label_34bc78;
        case 0x34bc7cu: goto label_34bc7c;
        case 0x34bc80u: goto label_34bc80;
        case 0x34bc84u: goto label_34bc84;
        case 0x34bc88u: goto label_34bc88;
        case 0x34bc8cu: goto label_34bc8c;
        case 0x34bc90u: goto label_34bc90;
        case 0x34bc94u: goto label_34bc94;
        case 0x34bc98u: goto label_34bc98;
        case 0x34bc9cu: goto label_34bc9c;
        case 0x34bca0u: goto label_34bca0;
        case 0x34bca4u: goto label_34bca4;
        case 0x34bca8u: goto label_34bca8;
        case 0x34bcacu: goto label_34bcac;
        case 0x34bcb0u: goto label_34bcb0;
        case 0x34bcb4u: goto label_34bcb4;
        case 0x34bcb8u: goto label_34bcb8;
        case 0x34bcbcu: goto label_34bcbc;
        case 0x34bcc0u: goto label_34bcc0;
        case 0x34bcc4u: goto label_34bcc4;
        case 0x34bcc8u: goto label_34bcc8;
        case 0x34bcccu: goto label_34bccc;
        case 0x34bcd0u: goto label_34bcd0;
        case 0x34bcd4u: goto label_34bcd4;
        case 0x34bcd8u: goto label_34bcd8;
        case 0x34bcdcu: goto label_34bcdc;
        case 0x34bce0u: goto label_34bce0;
        case 0x34bce4u: goto label_34bce4;
        case 0x34bce8u: goto label_34bce8;
        case 0x34bcecu: goto label_34bcec;
        case 0x34bcf0u: goto label_34bcf0;
        case 0x34bcf4u: goto label_34bcf4;
        case 0x34bcf8u: goto label_34bcf8;
        case 0x34bcfcu: goto label_34bcfc;
        case 0x34bd00u: goto label_34bd00;
        case 0x34bd04u: goto label_34bd04;
        case 0x34bd08u: goto label_34bd08;
        case 0x34bd0cu: goto label_34bd0c;
        case 0x34bd10u: goto label_34bd10;
        case 0x34bd14u: goto label_34bd14;
        case 0x34bd18u: goto label_34bd18;
        case 0x34bd1cu: goto label_34bd1c;
        case 0x34bd20u: goto label_34bd20;
        case 0x34bd24u: goto label_34bd24;
        case 0x34bd28u: goto label_34bd28;
        case 0x34bd2cu: goto label_34bd2c;
        case 0x34bd30u: goto label_34bd30;
        case 0x34bd34u: goto label_34bd34;
        case 0x34bd38u: goto label_34bd38;
        case 0x34bd3cu: goto label_34bd3c;
        case 0x34bd40u: goto label_34bd40;
        case 0x34bd44u: goto label_34bd44;
        case 0x34bd48u: goto label_34bd48;
        case 0x34bd4cu: goto label_34bd4c;
        case 0x34bd50u: goto label_34bd50;
        case 0x34bd54u: goto label_34bd54;
        case 0x34bd58u: goto label_34bd58;
        case 0x34bd5cu: goto label_34bd5c;
        case 0x34bd60u: goto label_34bd60;
        case 0x34bd64u: goto label_34bd64;
        case 0x34bd68u: goto label_34bd68;
        case 0x34bd6cu: goto label_34bd6c;
        case 0x34bd70u: goto label_34bd70;
        case 0x34bd74u: goto label_34bd74;
        case 0x34bd78u: goto label_34bd78;
        case 0x34bd7cu: goto label_34bd7c;
        case 0x34bd80u: goto label_34bd80;
        case 0x34bd84u: goto label_34bd84;
        case 0x34bd88u: goto label_34bd88;
        case 0x34bd8cu: goto label_34bd8c;
        case 0x34bd90u: goto label_34bd90;
        case 0x34bd94u: goto label_34bd94;
        case 0x34bd98u: goto label_34bd98;
        case 0x34bd9cu: goto label_34bd9c;
        case 0x34bda0u: goto label_34bda0;
        case 0x34bda4u: goto label_34bda4;
        case 0x34bda8u: goto label_34bda8;
        case 0x34bdacu: goto label_34bdac;
        case 0x34bdb0u: goto label_34bdb0;
        case 0x34bdb4u: goto label_34bdb4;
        case 0x34bdb8u: goto label_34bdb8;
        case 0x34bdbcu: goto label_34bdbc;
        case 0x34bdc0u: goto label_34bdc0;
        case 0x34bdc4u: goto label_34bdc4;
        case 0x34bdc8u: goto label_34bdc8;
        case 0x34bdccu: goto label_34bdcc;
        case 0x34bdd0u: goto label_34bdd0;
        case 0x34bdd4u: goto label_34bdd4;
        case 0x34bdd8u: goto label_34bdd8;
        case 0x34bddcu: goto label_34bddc;
        case 0x34bde0u: goto label_34bde0;
        case 0x34bde4u: goto label_34bde4;
        case 0x34bde8u: goto label_34bde8;
        case 0x34bdecu: goto label_34bdec;
        case 0x34bdf0u: goto label_34bdf0;
        case 0x34bdf4u: goto label_34bdf4;
        case 0x34bdf8u: goto label_34bdf8;
        case 0x34bdfcu: goto label_34bdfc;
        case 0x34be00u: goto label_34be00;
        case 0x34be04u: goto label_34be04;
        case 0x34be08u: goto label_34be08;
        case 0x34be0cu: goto label_34be0c;
        case 0x34be10u: goto label_34be10;
        case 0x34be14u: goto label_34be14;
        case 0x34be18u: goto label_34be18;
        case 0x34be1cu: goto label_34be1c;
        case 0x34be20u: goto label_34be20;
        case 0x34be24u: goto label_34be24;
        case 0x34be28u: goto label_34be28;
        case 0x34be2cu: goto label_34be2c;
        default: break;
    }

    ctx->pc = 0x34bc20u;

label_34bc20:
    // 0x34bc20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x34bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_34bc24:
    // 0x34bc24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x34bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_34bc28:
    // 0x34bc28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x34bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_34bc2c:
    // 0x34bc2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x34bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_34bc30:
    // 0x34bc30: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x34bc30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34bc34:
    // 0x34bc34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34bc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_34bc38:
    // 0x34bc38: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x34bc38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34bc3c:
    // 0x34bc3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_34bc40:
    // 0x34bc40: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x34bc40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34bc44:
    // 0x34bc44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34bc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_34bc48:
    // 0x34bc48: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x34bc48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_34bc4c:
    // 0x34bc4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34bc50:
    // 0x34bc50: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x34bc50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_34bc54:
    // 0x34bc54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34bc58:
    // 0x34bc58: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x34bc58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_34bc5c:
    // 0x34bc5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34bc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34bc60:
    // 0x34bc60: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34bc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34bc64:
    // 0x34bc64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34bc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34bc68:
    // 0x34bc68: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x34bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_34bc6c:
    // 0x34bc6c: 0xc09d4d4  jal         func_275350
label_34bc70:
    if (ctx->pc == 0x34BC70u) {
        ctx->pc = 0x34BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC6Cu;
        // 0x34bc70: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BC74u;
        goto label_34bc74;
    }
    ctx->pc = 0x34BC6Cu;
    SET_GPR_U32(ctx, 31, 0x34BC74u);
    ctx->pc = 0x34BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BC6Cu;
    // 0x34bc70: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x34BC6Cu, 0x34BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC74u;
label_34bc74:
    // 0x34bc74: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_34bc78:
    if (ctx->pc == 0x34BC78u) {
        ctx->pc = 0x34BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC74u;
        // 0x34bc78: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BC7Cu;
        goto label_34bc7c;
    }
    ctx->pc = 0x34BC74u;
    {
        const bool branch_taken_0x34bc74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x34BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC74u;
        // 0x34bc78: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc74) {
            ctx->pc = 0x34BC90u;
            goto label_34bc90;
        }
    }
    ctx->pc = 0x34BC7Cu;
label_34bc7c:
    // 0x34bc7c: 0xc09d4d8  jal         func_275360
label_34bc80:
    if (ctx->pc == 0x34BC80u) {
        ctx->pc = 0x34BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC7Cu;
        // 0x34bc80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BC84u;
        goto label_34bc84;
    }
    ctx->pc = 0x34BC7Cu;
    SET_GPR_U32(ctx, 31, 0x34BC84u);
    ctx->pc = 0x34BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BC7Cu;
    // 0x34bc80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x34BC7Cu, 0x34BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC84u;
label_34bc84:
    // 0x34bc84: 0x1000005e  b           . + 4 + (0x5E << 2)
label_34bc88:
    if (ctx->pc == 0x34BC88u) {
        ctx->pc = 0x34BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC84u;
        // 0x34bc88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BC8Cu;
        goto label_34bc8c;
    }
    ctx->pc = 0x34BC84u;
    {
        const bool branch_taken_0x34bc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC84u;
        // 0x34bc88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc84) {
            ctx->pc = 0x34BE00u;
            goto label_34be00;
        }
    }
    ctx->pc = 0x34BC8Cu;
label_34bc8c:
    // 0x34bc8c: 0x0  nop
    ctx->pc = 0x34bc8cu;
    // NOP
label_34bc90:
    // 0x34bc90: 0xc0741a4  jal         func_1D0690
label_34bc94:
    if (ctx->pc == 0x34BC94u) {
        ctx->pc = 0x34BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC90u;
        // 0x34bc94: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BC98u;
        goto label_34bc98;
    }
    ctx->pc = 0x34BC90u;
    SET_GPR_U32(ctx, 31, 0x34BC98u);
    ctx->pc = 0x34BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BC90u;
    // 0x34bc94: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x34BC90u, 0x34BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC98u;
label_34bc98:
    // 0x34bc98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34bc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34bc9c:
    // 0x34bc9c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_34bca0:
    if (ctx->pc == 0x34BCA0u) {
        ctx->pc = 0x34BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC9Cu;
        // 0x34bca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BCA4u;
        goto label_34bca4;
    }
    ctx->pc = 0x34BC9Cu;
    {
        const bool branch_taken_0x34bc9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC9Cu;
        // 0x34bca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc9c) {
            ctx->pc = 0x34BCC8u;
            goto label_34bcc8;
        }
    }
    ctx->pc = 0x34BCA4u;
label_34bca4:
    // 0x34bca4: 0xc096b00  jal         func_25AC00
label_34bca8:
    if (ctx->pc == 0x34BCA8u) {
        ctx->pc = 0x34BCACu;
        goto label_34bcac;
    }
    ctx->pc = 0x34BCA4u;
    SET_GPR_U32(ctx, 31, 0x34BCACu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x34BCA4u, 0x34BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BCACu;
label_34bcac:
    // 0x34bcac: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x34bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_34bcb0:
    // 0x34bcb0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x34bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_34bcb4:
    // 0x34bcb4: 0x24637f80  addiu       $v1, $v1, 0x7F80
    ctx->pc = 0x34bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32640));
label_34bcb8:
    // 0x34bcb8: 0x24428de0  addiu       $v0, $v0, -0x7220
    ctx->pc = 0x34bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938080));
label_34bcbc:
    // 0x34bcbc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x34bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_34bcc0:
    // 0x34bcc0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x34bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_34bcc4:
    // 0x34bcc4: 0x0  nop
    ctx->pc = 0x34bcc4u;
    // NOP
label_34bcc8:
    // 0x34bcc8: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_34bccc:
    if (ctx->pc == 0x34BCCCu) {
        ctx->pc = 0x34BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BCC8u;
        // 0x34bccc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BCD0u;
        goto label_34bcd0;
    }
    ctx->pc = 0x34BCC8u;
    {
        const bool branch_taken_0x34bcc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BCC8u;
        // 0x34bccc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bcc8) {
            ctx->pc = 0x34BDF0u;
            goto label_34bdf0;
        }
    }
    ctx->pc = 0x34BCD0u;
label_34bcd0:
    // 0x34bcd0: 0xc09d4fc  jal         func_2753F0
label_34bcd4:
    if (ctx->pc == 0x34BCD4u) {
        ctx->pc = 0x34BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BCD0u;
        // 0x34bcd4: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BCD8u;
        goto label_34bcd8;
    }
    ctx->pc = 0x34BCD0u;
    SET_GPR_U32(ctx, 31, 0x34BCD8u);
    ctx->pc = 0x34BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BCD0u;
    // 0x34bcd4: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x34BCD0u, 0x34BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BCD8u;
label_34bcd8:
    // 0x34bcd8: 0x32a600ff  andi        $a2, $s5, 0xFF
    ctx->pc = 0x34bcd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_34bcdc:
    // 0x34bcdc: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x34bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_34bce0:
    // 0x34bce0: 0xc09d524  jal         func_275490
label_34bce4:
    if (ctx->pc == 0x34BCE4u) {
        ctx->pc = 0x34BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BCE0u;
        // 0x34bce4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BCE8u;
        goto label_34bce8;
    }
    ctx->pc = 0x34BCE0u;
    SET_GPR_U32(ctx, 31, 0x34BCE8u);
    ctx->pc = 0x34BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BCE0u;
    // 0x34bce4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x34BCE0u, 0x34BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BCE8u;
label_34bce8:
    // 0x34bce8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x34bce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34bcec:
    // 0x34bcec: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_34bcf0:
    if (ctx->pc == 0x34BCF0u) {
        ctx->pc = 0x34BCF4u;
        goto label_34bcf4;
    }
    ctx->pc = 0x34BCECu;
    {
        const bool branch_taken_0x34bcec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bcec) {
            ctx->pc = 0x34BD28u;
            goto label_34bd28;
        }
    }
    ctx->pc = 0x34BCF4u;
label_34bcf4:
    // 0x34bcf4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_34bcf8:
    if (ctx->pc == 0x34BCF8u) {
        ctx->pc = 0x34BCFCu;
        goto label_34bcfc;
    }
    ctx->pc = 0x34BCF4u;
    {
        const bool branch_taken_0x34bcf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bcf4) {
            ctx->pc = 0x34BD10u;
            goto label_34bd10;
        }
    }
    ctx->pc = 0x34BCFCu;
label_34bcfc:
    // 0x34bcfc: 0x8e390034  lw          $t9, 0x34($s1)
    ctx->pc = 0x34bcfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_34bd00:
    // 0x34bd00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34bd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34bd04:
    // 0x34bd04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x34bd04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34bd08:
    // 0x34bd08: 0x320f809  jalr        $t9
label_34bd0c:
    if (ctx->pc == 0x34BD0Cu) {
        ctx->pc = 0x34BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD08u;
        // 0x34bd0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BD10u;
        goto label_34bd10;
    }
    ctx->pc = 0x34BD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34BD10u);
        ctx->pc = 0x34BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD08u;
        // 0x34bd0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BD08u, 0x34BD10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34BD10u;
label_34bd10:
    // 0x34bd10: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x34bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_34bd14:
    // 0x34bd14: 0xc09d4d8  jal         func_275360
label_34bd18:
    if (ctx->pc == 0x34BD18u) {
        ctx->pc = 0x34BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD14u;
        // 0x34bd18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BD1Cu;
        goto label_34bd1c;
    }
    ctx->pc = 0x34BD14u;
    SET_GPR_U32(ctx, 31, 0x34BD1Cu);
    ctx->pc = 0x34BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD14u;
    // 0x34bd18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x34BD14u, 0x34BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD1Cu;
label_34bd1c:
    // 0x34bd1c: 0x10000038  b           . + 4 + (0x38 << 2)
label_34bd20:
    if (ctx->pc == 0x34BD20u) {
        ctx->pc = 0x34BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD1Cu;
        // 0x34bd20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BD24u;
        goto label_34bd24;
    }
    ctx->pc = 0x34BD1Cu;
    {
        const bool branch_taken_0x34bd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD1Cu;
        // 0x34bd20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bd1c) {
            ctx->pc = 0x34BE00u;
            goto label_34be00;
        }
    }
    ctx->pc = 0x34BD24u;
label_34bd24:
    // 0x34bd24: 0x0  nop
    ctx->pc = 0x34bd24u;
    // NOP
label_34bd28:
    // 0x34bd28: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x34bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_34bd2c:
    // 0x34bd2c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x34bd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_34bd30:
    // 0x34bd30: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x34bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_34bd34:
    // 0x34bd34: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x34bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34bd38:
    // 0x34bd38: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x34bd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34bd3c:
    // 0x34bd3c: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x34bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_34bd40:
    // 0x34bd40: 0xc07679c  jal         func_1D9E70
label_34bd44:
    if (ctx->pc == 0x34BD44u) {
        ctx->pc = 0x34BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD40u;
        // 0x34bd44: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BD48u;
        goto label_34bd48;
    }
    ctx->pc = 0x34BD40u;
    SET_GPR_U32(ctx, 31, 0x34BD48u);
    ctx->pc = 0x34BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD40u;
    // 0x34bd44: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x34BD40u, 0x34BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD48u;
label_34bd48:
    // 0x34bd48: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x34bd48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_34bd4c:
    // 0x34bd4c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x34bd4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_34bd50:
    // 0x34bd50: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x34bd50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34bd54:
    // 0x34bd54: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x34bd54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34bd58:
    // 0x34bd58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34bd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34bd5c:
    // 0x34bd5c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x34bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_34bd60:
    // 0x34bd60: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x34bd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_34bd64:
    // 0x34bd64: 0xc096b38  jal         func_25ACE0
label_34bd68:
    if (ctx->pc == 0x34BD68u) {
        ctx->pc = 0x34BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD64u;
        // 0x34bd68: 0x27ab00a0  addiu       $t3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BD6Cu;
        goto label_34bd6c;
    }
    ctx->pc = 0x34BD64u;
    SET_GPR_U32(ctx, 31, 0x34BD6Cu);
    ctx->pc = 0x34BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD64u;
    // 0x34bd68: 0x27ab00a0  addiu       $t3, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x34BD64u, 0x34BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD6Cu;
label_34bd6c:
    // 0x34bd6c: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x34bd6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_34bd70:
    // 0x34bd70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_34bd74:
    // 0x34bd74: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34bd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_34bd78:
    // 0x34bd78: 0xa2230050  sb          $v1, 0x50($s1)
    ctx->pc = 0x34bd78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 3));
label_34bd7c:
    // 0x34bd7c: 0xa620005a  sh          $zero, 0x5A($s1)
    ctx->pc = 0x34bd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 90), (uint16_t)GPR_U32(ctx, 0));
label_34bd80:
    // 0x34bd80: 0xa6200058  sh          $zero, 0x58($s1)
    ctx->pc = 0x34bd80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 88), (uint16_t)GPR_U32(ctx, 0));
label_34bd84:
    // 0x34bd84: 0xa6200056  sh          $zero, 0x56($s1)
    ctx->pc = 0x34bd84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 0));
label_34bd88:
    // 0x34bd88: 0xa2200051  sb          $zero, 0x51($s1)
    ctx->pc = 0x34bd88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
label_34bd8c:
    // 0x34bd8c: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x34bd8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_34bd90:
    // 0x34bd90: 0x7e230070  sq          $v1, 0x70($s1)
    ctx->pc = 0x34bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 3));
label_34bd94:
    // 0x34bd94: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x34bd94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_34bd98:
    // 0x34bd98: 0x7e230090  sq          $v1, 0x90($s1)
    ctx->pc = 0x34bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 3));
label_34bd9c:
    // 0x34bd9c: 0xa23400bc  sb          $s4, 0xBC($s1)
    ctx->pc = 0x34bd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 188), (uint8_t)GPR_U32(ctx, 20));
label_34bda0:
    // 0x34bda0: 0xae3200b0  sw          $s2, 0xB0($s1)
    ctx->pc = 0x34bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 18));
label_34bda4:
    // 0x34bda4: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x34bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_34bda8:
    // 0x34bda8: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x34bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_34bdac:
    // 0x34bdac: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x34bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_34bdb0:
    // 0x34bdb0: 0xa23500bd  sb          $s5, 0xBD($s1)
    ctx->pc = 0x34bdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 189), (uint8_t)GPR_U32(ctx, 21));
label_34bdb4:
    // 0x34bdb4: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x34bdb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_34bdb8:
    // 0x34bdb8: 0x92460009  lbu         $a2, 0x9($s2)
    ctx->pc = 0x34bdb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_34bdbc:
    // 0x34bdbc: 0xc074350  jal         func_1D0D40
label_34bdc0:
    if (ctx->pc == 0x34BDC0u) {
        ctx->pc = 0x34BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDBCu;
        // 0x34bdc0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BDC4u;
        goto label_34bdc4;
    }
    ctx->pc = 0x34BDBCu;
    SET_GPR_U32(ctx, 31, 0x34BDC4u);
    ctx->pc = 0x34BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BDBCu;
    // 0x34bdc0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x34BDBCu, 0x34BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BDC4u;
label_34bdc4:
    // 0x34bdc4: 0x9245000a  lbu         $a1, 0xA($s2)
    ctx->pc = 0x34bdc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
label_34bdc8:
    // 0x34bdc8: 0x9246000b  lbu         $a2, 0xB($s2)
    ctx->pc = 0x34bdc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
label_34bdcc:
    // 0x34bdcc: 0xc074378  jal         func_1D0DE0
label_34bdd0:
    if (ctx->pc == 0x34BDD0u) {
        ctx->pc = 0x34BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDCCu;
        // 0x34bdd0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BDD4u;
        goto label_34bdd4;
    }
    ctx->pc = 0x34BDCCu;
    SET_GPR_U32(ctx, 31, 0x34BDD4u);
    ctx->pc = 0x34BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BDCCu;
    // 0x34bdd0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x34BDCCu, 0x34BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BDD4u;
label_34bdd4:
    // 0x34bdd4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x34bdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_34bdd8:
    // 0x34bdd8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x34bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_34bddc:
    // 0x34bddc: 0xc09d4d8  jal         func_275360
label_34bde0:
    if (ctx->pc == 0x34BDE0u) {
        ctx->pc = 0x34BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDDCu;
        // 0x34bde0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BDE4u;
        goto label_34bde4;
    }
    ctx->pc = 0x34BDDCu;
    SET_GPR_U32(ctx, 31, 0x34BDE4u);
    ctx->pc = 0x34BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BDDCu;
    // 0x34bde0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x34BDDCu, 0x34BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BDE4u;
label_34bde4:
    // 0x34bde4: 0x10000006  b           . + 4 + (0x6 << 2)
label_34bde8:
    if (ctx->pc == 0x34BDE8u) {
        ctx->pc = 0x34BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDE4u;
        // 0x34bde8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BDECu;
        goto label_34bdec;
    }
    ctx->pc = 0x34BDE4u;
    {
        const bool branch_taken_0x34bde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDE4u;
        // 0x34bde8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bde4) {
            ctx->pc = 0x34BE00u;
            goto label_34be00;
        }
    }
    ctx->pc = 0x34BDECu;
label_34bdec:
    // 0x34bdec: 0x0  nop
    ctx->pc = 0x34bdecu;
    // NOP
label_34bdf0:
    // 0x34bdf0: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x34bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_34bdf4:
    // 0x34bdf4: 0xc09d4d8  jal         func_275360
label_34bdf8:
    if (ctx->pc == 0x34BDF8u) {
        ctx->pc = 0x34BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDF4u;
        // 0x34bdf8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BDFCu;
        goto label_34bdfc;
    }
    ctx->pc = 0x34BDF4u;
    SET_GPR_U32(ctx, 31, 0x34BDFCu);
    ctx->pc = 0x34BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BDF4u;
    // 0x34bdf8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x34BDF4u, 0x34BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BDFCu;
label_34bdfc:
    // 0x34bdfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34bdfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34be00:
    // 0x34be00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x34be00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_34be04:
    // 0x34be04: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x34be04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_34be08:
    // 0x34be08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x34be08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_34be0c:
    // 0x34be0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34be0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34be10:
    // 0x34be10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34be10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34be14:
    // 0x34be14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34be14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34be18:
    // 0x34be18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34be18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34be1c:
    // 0x34be1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34be1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34be20:
    // 0x34be20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34be20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34be24:
    // 0x34be24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34be24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34be28:
    // 0x34be28: 0x3e00008  jr          $ra
label_34be2c:
    if (ctx->pc == 0x34BE2Cu) {
        ctx->pc = 0x34BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE28u;
        // 0x34be2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BE30u;
        goto label_fallthrough_0x34be28;
    }
    ctx->pc = 0x34BE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE28u;
        // 0x34be2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34be28:
    ctx->pc = 0x34BE30u;
}
