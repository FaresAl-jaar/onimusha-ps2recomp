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

// Function: sub_00107B10
// Address: 0x107b10 - 0x108068
void sub_00107B10_0x107b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107B10_0x107b10");
#endif

    switch (ctx->pc) {
        case 0x107b88u: goto label_107b88;
        case 0x107bacu: goto label_107bac;
        case 0x107c24u: goto label_107c24;
        case 0x107c6cu: goto label_107c6c;
        case 0x107d28u: goto label_107d28;
        case 0x107d54u: goto label_107d54;
        case 0x107dc4u: goto label_107dc4;
        case 0x107df0u: goto label_107df0;
        case 0x107e50u: goto label_107e50;
        case 0x107e7cu: goto label_107e7c;
        case 0x107eacu: goto label_107eac;
        case 0x107ed4u: goto label_107ed4;
        case 0x107edcu: goto label_107edc;
        default: break;
    }

    ctx->pc = 0x107b10u;

    // 0x107b10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x107b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x107b14: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x107b14u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x107b18: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x107b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x107b1c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x107b1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x107b20: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x107b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x107b24: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x107b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x107b28: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x107b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x107b2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x107b30: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x107b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x107b34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x107b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b38: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x107b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x107b3c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x107b3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b40: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x107b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x107b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b48: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x107b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x107b4c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x107b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b50: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x107b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x107b54: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x107b54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b58: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x107b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x107b5c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x107b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x107b60: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x107b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x107b64: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x107b64u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x107b68: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x107b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x107b6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x107b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x107b70: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x107b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x107b74: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x107b74u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x107b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b7c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x107b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x107b80: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x107B80u;
    SET_GPR_U32(ctx, 31, 0x107B88u);
    ctx->pc = 0x107B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B80u;
    // 0x107b84: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x107B80u, 0x107B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B88u;
label_107b88:
    // 0x107b88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107b8c: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x107b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x107b90: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107b94: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x107b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x107b98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x107b98u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x107b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ba0: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x107ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x107ba4: 0xc0420d2  jal         func_108348
    ctx->pc = 0x107BA4u;
    SET_GPR_U32(ctx, 31, 0x107BACu);
    ctx->pc = 0x107BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BA4u;
    // 0x107ba8: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x107BA4u, 0x107BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BACu;
label_107bac:
    // 0x107bac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x107bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x107bb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107bb8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x107bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x107bbc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x107bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107bc0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x107bc4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107bc4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x107bc8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x107bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x107bcc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107bccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107bd0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107BD0u;
    {
        const bool branch_taken_0x107bd0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x107BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BD0u;
        // 0x107bd4: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bd0) {
            ctx->pc = 0x107BE8u;
            goto label_107be8;
        }
    }
    ctx->pc = 0x107BD8u;
    // 0x107bd8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x107bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x107bdc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x107bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x107be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107BE0u;
    {
        const bool branch_taken_0x107be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BE0u;
        // 0x107be4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107be0) {
            ctx->pc = 0x107BECu;
            goto label_107bec;
        }
    }
    ctx->pc = 0x107BE8u;
label_107be8:
    // 0x107be8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x107be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_107bec:
    // 0x107bec: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x107becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x107bf0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x107bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x107bf4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x107bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x107bf8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x107bf8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x107bfc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x107bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107c00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x107c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x107c04: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x107c04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x107c08: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x107c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x107c0c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x107C0Cu;
    {
        const bool branch_taken_0x107c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x107C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C0Cu;
        // 0x107c10: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c0c) {
            ctx->pc = 0x107C34u;
            goto label_107c34;
        }
    }
    ctx->pc = 0x107C14u;
    // 0x107c14: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x107c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x107c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c1c: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x107C1Cu;
    SET_GPR_U32(ctx, 31, 0x107C24u);
    ctx->pc = 0x107C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C1Cu;
    // 0x107c20: 0x24a51f28  addiu       $a1, $a1, 0x1F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x107C1Cu, 0x107C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C24u;
label_107c24:
    // 0x107c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107c28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x107c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c2c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x107C2Cu;
    {
        const bool branch_taken_0x107c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C2Cu;
        // 0x107c30: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c2c) {
            ctx->pc = 0x108038u;
            goto label_108038;
        }
    }
    ctx->pc = 0x107C34u;
label_107c34:
    // 0x107c34: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x107c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x107c38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x107C38u;
    {
        const bool branch_taken_0x107c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C38u;
        // 0x107c3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c38) {
            ctx->pc = 0x107C74u;
            goto label_107c74;
        }
    }
    ctx->pc = 0x107C40u;
    // 0x107c40: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x107c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x107c44: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107C44u;
    {
        const bool branch_taken_0x107c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107c44) {
            ctx->pc = 0x107C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107C44u;
            // 0x107c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107C64u;
            goto label_107c64;
        }
    }
    ctx->pc = 0x107C4Cu;
    // 0x107c4c: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x107c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x107c50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107C50u;
    {
        const bool branch_taken_0x107c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C50u;
        // 0x107c54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c50) {
            ctx->pc = 0x107C60u;
            goto label_107c60;
        }
    }
    ctx->pc = 0x107C58u;
    // 0x107c58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x107C58u;
    {
        const bool branch_taken_0x107c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C58u;
        // 0x107c5c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c58) {
            ctx->pc = 0x107CA0u;
            goto label_107ca0;
        }
    }
    ctx->pc = 0x107C60u;
label_107c60:
    // 0x107c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107c64:
    // 0x107c64: 0xc042132  jal         func_1084C8
    ctx->pc = 0x107C64u;
    SET_GPR_U32(ctx, 31, 0x107C6Cu);
    ctx->pc = 0x107C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C64u;
    // 0x107c68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x107C64u, 0x107C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C6Cu;
label_107c6c:
    // 0x107c6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107C6Cu;
    {
        const bool branch_taken_0x107c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C6Cu;
        // 0x107c70: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c6c) {
            ctx->pc = 0x107CA0u;
            goto label_107ca0;
        }
    }
    ctx->pc = 0x107C74u;
label_107c74:
    // 0x107c74: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x107c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x107c78: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x107C78u;
    {
        const bool branch_taken_0x107c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107c78) {
            ctx->pc = 0x107C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107C78u;
            // 0x107c7c: 0x8e060184  lw          $a2, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107CA4u;
            goto label_107ca4;
        }
    }
    ctx->pc = 0x107C80u;
    // 0x107c80: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x107c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x107c84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107C84u;
    {
        const bool branch_taken_0x107c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C84u;
        // 0x107c88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c84) {
            ctx->pc = 0x107CA0u;
            goto label_107ca0;
        }
    }
    ctx->pc = 0x107C8Cu;
    // 0x107c8c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x107c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x107c90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107c94: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x107c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x107c98: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x107c98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x107c9c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x107c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_107ca0:
    // 0x107ca0: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x107ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_107ca4:
    // 0x107ca4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x107ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107ca8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107CA8u;
    {
        const bool branch_taken_0x107ca8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x107CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CA8u;
        // 0x107cac: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ca8) {
            ctx->pc = 0x107CCCu;
            goto label_107ccc;
        }
    }
    ctx->pc = 0x107CB0u;
    // 0x107cb0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x107cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107cb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107cb8: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x107cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x107cbc: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x107cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x107cc0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x107cc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x107cc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107CC4u;
    {
        const bool branch_taken_0x107cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CC4u;
        // 0x107cc8: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cc4) {
            ctx->pc = 0x107CE0u;
            goto label_107ce0;
        }
    }
    ctx->pc = 0x107CCCu;
label_107ccc:
    // 0x107ccc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x107cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107cd0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107cd4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x107cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cd8: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x107cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x107cdc: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x107cdcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_107ce0:
    // 0x107ce0: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x107ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x107ce4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x107ce4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ce8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x107CE8u;
    {
        const bool branch_taken_0x107ce8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x107CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CE8u;
        // 0x107cec: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ce8) {
            ctx->pc = 0x107CF8u;
            goto label_107cf8;
        }
    }
    ctx->pc = 0x107CF0u;
    // 0x107cf0: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x107cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x107cf4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x107cf4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_107cf8:
    // 0x107cf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x107cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107cfc: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x107CFCu;
    {
        const bool branch_taken_0x107cfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x107D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CFCu;
        // 0x107d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cfc) {
            ctx->pc = 0x107D34u;
            goto label_107d34;
        }
    }
    ctx->pc = 0x107D04u;
    // 0x107d04: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x107d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x107d08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x107D08u;
    {
        const bool branch_taken_0x107d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D08u;
        // 0x107d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d08) {
            ctx->pc = 0x107D34u;
            goto label_107d34;
        }
    }
    ctx->pc = 0x107D10u;
    // 0x107d10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x107d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107d14: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x107d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x107d18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107D18u;
    {
        const bool branch_taken_0x107d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D18u;
        // 0x107d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d18) {
            ctx->pc = 0x107D30u;
            goto label_107d30;
        }
    }
    ctx->pc = 0x107D20u;
    // 0x107d20: 0xc042132  jal         func_1084C8
    ctx->pc = 0x107D20u;
    SET_GPR_U32(ctx, 31, 0x107D28u);
    ctx->pc = 0x107D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D20u;
    // 0x107d24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x107D20u, 0x107D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D28u;
label_107d28:
    // 0x107d28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x107D28u;
    {
        const bool branch_taken_0x107d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D28u;
        // 0x107d2c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d28) {
            ctx->pc = 0x107D38u;
            goto label_107d38;
        }
    }
    ctx->pc = 0x107D30u;
label_107d30:
    // 0x107d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x107d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107d34:
    // 0x107d34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x107d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_107d38:
    // 0x107d38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x107d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x107d3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107d40: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x107d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x107d44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107D44u;
    {
        const bool branch_taken_0x107d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D44u;
        // 0x107d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d44) {
            ctx->pc = 0x107D5Cu;
            goto label_107d5c;
        }
    }
    ctx->pc = 0x107D4Cu;
    // 0x107d4c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x107D4Cu;
    SET_GPR_U32(ctx, 31, 0x107D54u);
    ctx->pc = 0x107D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D4Cu;
    // 0x107d50: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x107D4Cu, 0x107D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D54u;
label_107d54:
    // 0x107d54: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x107d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x107d58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_107d5c:
    // 0x107d5c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x107d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x107d60: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x107D60u;
    {
        const bool branch_taken_0x107d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107d60) {
            ctx->pc = 0x107D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D60u;
            // 0x107d64: 0x8e020858  lw          $v0, 0x858($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D84u;
            goto label_107d84;
        }
    }
    ctx->pc = 0x107D68u;
    // 0x107d68: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x107d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x107d6c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x107D6Cu;
    {
        const bool branch_taken_0x107d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107d6c) {
            ctx->pc = 0x107D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D6Cu;
            // 0x107d70: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107DF4u;
            goto label_107df4;
        }
    }
    ctx->pc = 0x107D74u;
    // 0x107d74: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x107d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x107d78: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x107D78u;
    {
        const bool branch_taken_0x107d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107d78) {
            ctx->pc = 0x107D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D78u;
            // 0x107d7c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107DF4u;
            goto label_107df4;
        }
    }
    ctx->pc = 0x107D80u;
    // 0x107d80: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x107d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_107d84:
    // 0x107d84: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x107D84u;
    {
        const bool branch_taken_0x107d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D84u;
        // 0x107d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d84) {
            ctx->pc = 0x107DCCu;
            goto label_107dcc;
        }
    }
    ctx->pc = 0x107D8Cu;
    // 0x107d8c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x107d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x107d90: 0x8e0b0174  lw          $t3, 0x174($s0)
    ctx->pc = 0x107d90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x107d94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x107d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x107d9c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x107d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x107da0: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x107da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x107da4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x107da4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x107da8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x107da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x107dac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x107dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107db0: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x107db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x107db4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x107db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107db8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x107db8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107dbc: 0xc041e5c  jal         func_107970
    ctx->pc = 0x107DBCu;
    SET_GPR_U32(ctx, 31, 0x107DC4u);
    ctx->pc = 0x107DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DBCu;
    // 0x107dc0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107970u, 0x107DBCu, 0x107DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DC4u;
label_107dc4:
    // 0x107dc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107DC4u;
    {
        const bool branch_taken_0x107dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DC4u;
        // 0x107dc8: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dc4) {
            ctx->pc = 0x107DF4u;
            goto label_107df4;
        }
    }
    ctx->pc = 0x107DCCu;
label_107dcc:
    // 0x107dcc: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x107dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x107dd0: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x107dd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x107dd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107dd8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x107dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x107ddc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x107ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107de0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x107de0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107de4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x107de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107de8: 0xc041d52  jal         func_107548
    ctx->pc = 0x107DE8u;
    SET_GPR_U32(ctx, 31, 0x107DF0u);
    ctx->pc = 0x107DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DE8u;
    // 0x107dec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107548u, 0x107DE8u, 0x107DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DF0u;
label_107df0:
    // 0x107df0: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x107df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_107df4:
    // 0x107df4: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x107DF4u;
    {
        const bool branch_taken_0x107df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DF4u;
        // 0x107df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107df4) {
            ctx->pc = 0x108038u;
            goto label_108038;
        }
    }
    ctx->pc = 0x107DFCu;
    // 0x107dfc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x107dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107e00: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x107e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x107e04: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x107E04u;
    {
        const bool branch_taken_0x107e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107e04) {
            ctx->pc = 0x107E80u;
            goto label_107e80;
        }
    }
    ctx->pc = 0x107E0Cu;
    // 0x107e0c: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x107e10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x107E10u;
    {
        const bool branch_taken_0x107e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E10u;
        // 0x107e14: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e10) {
            ctx->pc = 0x107E58u;
            goto label_107e58;
        }
    }
    ctx->pc = 0x107E18u;
    // 0x107e18: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x107e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x107e1c: 0x8e0b017c  lw          $t3, 0x17C($s0)
    ctx->pc = 0x107e1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x107e20: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x107e20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x107e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x107e28: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x107e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x107e2c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x107e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x107e30: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x107e30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e34: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x107e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x107e38: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x107e38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x107e3c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x107e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x107e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e48: 0xc041e5c  jal         func_107970
    ctx->pc = 0x107E48u;
    SET_GPR_U32(ctx, 31, 0x107E50u);
    ctx->pc = 0x107E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E48u;
    // 0x107e4c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107970u, 0x107E48u, 0x107E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E50u;
label_107e50:
    // 0x107e50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107E50u;
    {
        const bool branch_taken_0x107e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E50u;
        // 0x107e54: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e50) {
            ctx->pc = 0x107E80u;
            goto label_107e80;
        }
    }
    ctx->pc = 0x107E58u;
label_107e58:
    // 0x107e58: 0x8e070170  lw          $a3, 0x170($s0)
    ctx->pc = 0x107e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x107e5c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x107e5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x107e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e64: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x107e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x107e68: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x107e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x107e6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x107e6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e70: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x107e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e74: 0xc041d52  jal         func_107548
    ctx->pc = 0x107E74u;
    SET_GPR_U32(ctx, 31, 0x107E7Cu);
    ctx->pc = 0x107E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E74u;
    // 0x107e78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107548u, 0x107E74u, 0x107E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E7Cu;
label_107e7c:
    // 0x107e7c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x107e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_107e80:
    // 0x107e80: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x107E80u;
    {
        const bool branch_taken_0x107e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E80u;
        // 0x107e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e80) {
            ctx->pc = 0x108038u;
            goto label_108038;
        }
    }
    ctx->pc = 0x107E88u;
    // 0x107e88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107e8c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x107e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x107e90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107E90u;
    {
        const bool branch_taken_0x107e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E90u;
        // 0x107e94: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e90) {
            ctx->pc = 0x107EB4u;
            goto label_107eb4;
        }
    }
    ctx->pc = 0x107E98u;
    // 0x107e98: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x107e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x107e9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107E9Cu;
    {
        const bool branch_taken_0x107e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E9Cu;
        // 0x107ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e9c) {
            ctx->pc = 0x107EB0u;
            goto label_107eb0;
        }
    }
    ctx->pc = 0x107EA4u;
    // 0x107ea4: 0xc0421c4  jal         func_108710
    ctx->pc = 0x107EA4u;
    SET_GPR_U32(ctx, 31, 0x107EACu);
    ctx->pc = 0x107EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107EA4u;
    // 0x107ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108710u, 0x107EA4u, 0x107EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EACu;
label_107eac:
    // 0x107eac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_107eb0:
    // 0x107eb0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x107eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_107eb4:
    // 0x107eb4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x107EB4u;
    {
        const bool branch_taken_0x107eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EB4u;
        // 0x107eb8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107eb4) {
            ctx->pc = 0x107F58u;
            goto label_107f58;
        }
    }
    ctx->pc = 0x107EBCu;
    // 0x107ebc: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x107ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x107ec0: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x107ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x107ec4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x107ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x107ec8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x107ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x107ecc: 0xc0425fe  jal         func_1097F8
    ctx->pc = 0x107ECCu;
    SET_GPR_U32(ctx, 31, 0x107ED4u);
    ctx->pc = 0x107ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107ECCu;
    // 0x107ed0: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1097F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1097F8u, 0x107ECCu, 0x107ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107ED4u;
label_107ed4:
    // 0x107ed4: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x107ED4u;
    SET_GPR_U32(ctx, 31, 0x107EDCu);
    ctx->pc = 0x107ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107ED4u;
    // 0x107ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x107ED4u, 0x107EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EDCu;
label_107edc:
    // 0x107edc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x107edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107ee0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x107ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x107ee4: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x107ee8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x107ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x107eec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107ef0: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x107ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x107ef4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x107ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107ef8: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x107ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
    // 0x107efc: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x107efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x107f00: 0x52e40  sll         $a1, $a1, 25
    ctx->pc = 0x107f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
    // 0x107f04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x107f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x107f08: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x107f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x107f0c: 0x216c0  sll         $v0, $v0, 27
    ctx->pc = 0x107f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x107f10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x107f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x107f14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x107f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x107f18: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x107f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x107f1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x107f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x107f20: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x107f24: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x107f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x107f28: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x107f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x107f2c: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x107F2Cu;
    {
        const bool branch_taken_0x107f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x107F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F2Cu;
        // 0x107f30: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f2c) {
            ctx->pc = 0x107F48u;
            goto label_107f48;
        }
    }
    ctx->pc = 0x107F34u;
    // 0x107f34: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x107f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x107f38: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107F38u;
    {
        const bool branch_taken_0x107f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x107F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F38u;
        // 0x107f3c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f38) {
            ctx->pc = 0x107F48u;
            goto label_107f48;
        }
    }
    ctx->pc = 0x107F40u;
    // 0x107f40: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107F40u;
    {
        const bool branch_taken_0x107f40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x107F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F40u;
        // 0x107f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f40) {
            ctx->pc = 0x107F50u;
            goto label_107f50;
        }
    }
    ctx->pc = 0x107F48u;
label_107f48:
    // 0x107f48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x107F48u;
    {
        const bool branch_taken_0x107f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F48u;
        // 0x107f4c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f48) {
            ctx->pc = 0x107F6Cu;
            goto label_107f6c;
        }
    }
    ctx->pc = 0x107F50u;
label_107f50:
    // 0x107f50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107F50u;
    {
        const bool branch_taken_0x107f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F50u;
        // 0x107f54: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f50) {
            ctx->pc = 0x107F6Cu;
            goto label_107f6c;
        }
    }
    ctx->pc = 0x107F58u;
label_107f58:
    // 0x107f58: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x107f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x107f5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107f60: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x107f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x107f64: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x107f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x107f68: 0xac4406dc  sw          $a0, 0x6DC($v0)
    ctx->pc = 0x107f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 4));
label_107f6c:
    // 0x107f6c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x107f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x107f70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107F70u;
    {
        const bool branch_taken_0x107f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F70u;
        // 0x107f74: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f70) {
            ctx->pc = 0x107F80u;
            goto label_107f80;
        }
    }
    ctx->pc = 0x107F78u;
    // 0x107f78: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x107F78u;
    {
        const bool branch_taken_0x107f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F78u;
        // 0x107f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f78) {
            ctx->pc = 0x108038u;
            goto label_108038;
        }
    }
    ctx->pc = 0x107F80u;
label_107f80:
    // 0x107f80: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x107f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107f84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x107f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x107f88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x107F88u;
    {
        const bool branch_taken_0x107f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107f88) {
            ctx->pc = 0x107F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107F88u;
            // 0x107f8c: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107FACu;
            goto label_107fac;
        }
    }
    ctx->pc = 0x107F90u;
    // 0x107f90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107f94: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x107f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x107f98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x107f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107f9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x107f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x107fa0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x107FA0u;
    {
        const bool branch_taken_0x107fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107fa0) {
            ctx->pc = 0x107FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107FA0u;
            // 0x107fa4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107FD8u;
            goto label_107fd8;
        }
    }
    ctx->pc = 0x107FA8u;
    // 0x107fa8: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x107fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_107fac:
    // 0x107fac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x107FACu;
    {
        const bool branch_taken_0x107fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107fac) {
            ctx->pc = 0x107FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107FACu;
            // 0x107fb0: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107FD8u;
            goto label_107fd8;
        }
    }
    ctx->pc = 0x107FB4u;
    // 0x107fb4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x107fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x107fb8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x107fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x107fbc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x107fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x107fc0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x107fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x107fc4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x107fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x107fc8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x107fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x107fcc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x107fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x107fd0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x107fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x107fd4: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x107fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_107fd8:
    // 0x107fd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107fdc: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x107FDCu;
    {
        const bool branch_taken_0x107fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x107FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FDCu;
        // 0x107fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fdc) {
            ctx->pc = 0x108038u;
            goto label_108038;
        }
    }
    ctx->pc = 0x107FE4u;
    // 0x107fe4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x107fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107fe8: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x107fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x107fec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x107FECu;
    {
        const bool branch_taken_0x107fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FECu;
        // 0x107ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fec) {
            ctx->pc = 0x108038u;
            goto label_108038;
        }
    }
    ctx->pc = 0x107FF4u;
    // 0x107ff4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x107ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x107ff8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x107ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107ffc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x107ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x108000: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x108000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x108004: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x108004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x108008: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x108008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10800c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10800Cu;
    {
        const bool branch_taken_0x10800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x108010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10800Cu;
        // 0x108010: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10800c) {
            ctx->pc = 0x10801Cu;
            goto label_10801c;
        }
    }
    ctx->pc = 0x108014u;
    // 0x108014: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108014u;
    {
        const bool branch_taken_0x108014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108014u;
        // 0x108018: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108014) {
            ctx->pc = 0x108034u;
            goto label_108034;
        }
    }
    ctx->pc = 0x10801Cu;
label_10801c:
    // 0x10801c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x10801cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x108020: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x108020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x108024: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x108024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x108028: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x108028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x10802c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10802cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x108030: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x108030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_108034:
    // 0x108034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108038:
    // 0x108038: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x108038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10803c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x10803cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x108040: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x108040u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x108044: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x108044u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x108048: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x108048u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10804c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x10804cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108050: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x108050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108054: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x108054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108058: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x108058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10805c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10805cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108060: 0x3e00008  jr          $ra
    ctx->pc = 0x108060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108060u;
        // 0x108064: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108068u;
}
