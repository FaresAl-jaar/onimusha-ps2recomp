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

// Function: sub_002C0050
// Address: 0x2c0050 - 0x2c046c
void sub_002C0050_0x2c0050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0050_0x2c0050");
#endif

    switch (ctx->pc) {
        case 0x2c0100u: goto label_2c0100;
        case 0x2c0128u: goto label_2c0128;
        case 0x2c0150u: goto label_2c0150;
        case 0x2c0160u: goto label_2c0160;
        case 0x2c01b4u: goto label_2c01b4;
        case 0x2c0270u: goto label_2c0270;
        case 0x2c0364u: goto label_2c0364;
        case 0x2c038cu: goto label_2c038c;
        case 0x2c03acu: goto label_2c03ac;
        case 0x2c03c8u: goto label_2c03c8;
        case 0x2c041cu: goto label_2c041c;
        case 0x2c043cu: goto label_2c043c;
        default: break;
    }

    ctx->pc = 0x2c0050u;

    // 0x2c0050: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c0050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c0054: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c0054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c0058: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c0058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c005c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c0060: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c0060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c0064: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c0064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c0068: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c0068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c006c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c0070: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c0070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0074: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c0074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c0078: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c0078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c007c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c007cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c0080: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c0080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0084: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2c0084u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c0088: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c0088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c008c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c008cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c0090: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C0090u;
    {
        const bool branch_taken_0x2c0090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0090u;
        // 0x2c0094: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0090) {
            ctx->pc = 0x2C0148u;
            goto label_2c0148;
        }
    }
    ctx->pc = 0x2C0098u;
    // 0x2c0098: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c0098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c009c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C009Cu;
    {
        const bool branch_taken_0x2c009c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C009Cu;
        // 0x2c00a0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c009c) {
            ctx->pc = 0x2C0140u;
            goto label_2c0140;
        }
    }
    ctx->pc = 0x2C00A4u;
    // 0x2c00a4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C00A4u;
    {
        const bool branch_taken_0x2c00a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c00a4) {
            ctx->pc = 0x2C0118u;
            goto label_2c0118;
        }
    }
    ctx->pc = 0x2C00ACu;
    // 0x2c00ac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c00acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c00b0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C00B0u;
    {
        const bool branch_taken_0x2c00b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00B0u;
        // 0x2c00b4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00b0) {
            ctx->pc = 0x2C00F0u;
            goto label_2c00f0;
        }
    }
    ctx->pc = 0x2C00B8u;
    // 0x2c00b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C00B8u;
    {
        const bool branch_taken_0x2c00b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c00b8) {
            ctx->pc = 0x2C00C8u;
            goto label_2c00c8;
        }
    }
    ctx->pc = 0x2C00C0u;
    // 0x2c00c0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2C00C0u;
    {
        const bool branch_taken_0x2c00c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c00c0) {
            ctx->pc = 0x2C0428u;
            goto label_2c0428;
        }
    }
    ctx->pc = 0x2C00C8u;
label_2c00c8:
    // 0x2c00c8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c00c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c00cc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c00ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c00d0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c00d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c00d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c00dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c00e0: 0x104000d1  beqz        $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x2C00E0u;
    {
        const bool branch_taken_0x2c00e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c00e0) {
            ctx->pc = 0x2C0428u;
            goto label_2c0428;
        }
    }
    ctx->pc = 0x2C00E8u;
    // 0x2c00e8: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x2C00E8u;
    {
        const bool branch_taken_0x2c00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00E8u;
        // 0x2c00ec: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00e8) {
            ctx->pc = 0x2C0428u;
            goto label_2c0428;
        }
    }
    ctx->pc = 0x2C00F0u;
label_2c00f0:
    // 0x2c00f0: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c00f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c00f4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c00f8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C00F8u;
    SET_GPR_U32(ctx, 31, 0x2C0100u);
    ctx->pc = 0x2C00FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00F8u;
    // 0x2c00fc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C00F8u, 0x2C0100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0100u;
label_2c0100:
    // 0x2c0100: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c0100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0104: 0x122000c8  beqz        $s1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2C0104u;
    {
        const bool branch_taken_0x2c0104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0104) {
            ctx->pc = 0x2C0428u;
            goto label_2c0428;
        }
    }
    ctx->pc = 0x2C010Cu;
    // 0x2c010c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x2C010Cu;
    {
        const bool branch_taken_0x2c010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C010Cu;
        // 0x2c0110: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c010c) {
            ctx->pc = 0x2C0428u;
            goto label_2c0428;
        }
    }
    ctx->pc = 0x2C0114u;
    // 0x2c0114: 0x0  nop
    ctx->pc = 0x2c0114u;
    // NOP
label_2c0118:
    // 0x2c0118: 0x8e850090  lw          $a1, 0x90($s4)
    ctx->pc = 0x2c0118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x2c011c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c011cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c0120: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C0120u;
    SET_GPR_U32(ctx, 31, 0x2C0128u);
    ctx->pc = 0x2C0124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0120u;
    // 0x2c0124: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C0120u, 0x2C0128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0128u;
label_2c0128:
    // 0x2c0128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c0128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c012c: 0x122000be  beqz        $s1, . + 4 + (0xBE << 2)
    ctx->pc = 0x2C012Cu;
    {
        const bool branch_taken_0x2c012c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c012c) {
            ctx->pc = 0x2C0428u;
            goto label_2c0428;
        }
    }
    ctx->pc = 0x2C0134u;
    // 0x2c0134: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2C0134u;
    {
        const bool branch_taken_0x2c0134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0134u;
        // 0x2c0138: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0134) {
            ctx->pc = 0x2C0428u;
            goto label_2c0428;
        }
    }
    ctx->pc = 0x2C013Cu;
    // 0x2c013c: 0x0  nop
    ctx->pc = 0x2c013cu;
    // NOP
label_2c0140:
    // 0x2c0140: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2C0140u;
    {
        const bool branch_taken_0x2c0140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0140u;
        // 0x2c0144: 0x269000c0  addiu       $s0, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0140) {
            ctx->pc = 0x2C0428u;
            goto label_2c0428;
        }
    }
    ctx->pc = 0x2C0148u;
label_2c0148:
    // 0x2c0148: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2C0148u;
    {
        const bool branch_taken_0x2c0148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0148u;
        // 0x2c014c: 0x269000d0  addiu       $s0, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0148) {
            ctx->pc = 0x2C0428u;
            goto label_2c0428;
        }
    }
    ctx->pc = 0x2C0150u;
label_2c0150:
    // 0x2c0150: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c0150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c0154: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2c0154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2c0158: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C0158u;
    SET_GPR_U32(ctx, 31, 0x2C0160u);
    ctx->pc = 0x2C015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0158u;
    // 0x2c015c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C0158u, 0x2C0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0160u;
label_2c0160:
    // 0x2c0160: 0x27b50088  addiu       $s5, $sp, 0x88
    ctx->pc = 0x2c0160u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2c0164: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x2c0164u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2c0168: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2c0168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c016c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2c016cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2c0170: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2c0170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0174: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x2c0174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2c0178: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x2c0178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x2c017c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c017cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c0180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0184: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x2c0184u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2c0188: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2c0188u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c018c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2c018cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2c0190: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x2c0190u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2c0194: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2c0194u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2c0198: 0x46000544  c1          0x544
    ctx->pc = 0x2c0198u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c019c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2c019cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c01a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c01a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c01a4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c01a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c01a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c01a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c01ac: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C01ACu;
    SET_GPR_U32(ctx, 31, 0x2C01B4u);
    ctx->pc = 0x2C01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C01ACu;
    // 0x2c01b0: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C01ACu, 0x2C01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01B4u;
label_2c01b4:
    // 0x2c01b4: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2C01B4u;
    {
        const bool branch_taken_0x2c01b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c01b4) {
            ctx->pc = 0x2C0330u;
            goto label_2c0330;
        }
    }
    ctx->pc = 0x2C01BCu;
    // 0x2c01bc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2c01bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c01c0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x2c01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2c01c4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2c01c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c01c8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C01C8u;
    {
        const bool branch_taken_0x2c01c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01C8u;
        // 0x2c01cc: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01c8) {
            ctx->pc = 0x2C01D8u;
            goto label_2c01d8;
        }
    }
    ctx->pc = 0x2C01D0u;
    // 0x2c01d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c01d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01d4: 0x0  nop
    ctx->pc = 0x2c01d4u;
    // NOP
label_2c01d8:
    // 0x2c01d8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C01D8u;
    {
        const bool branch_taken_0x2c01d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c01d8) {
            ctx->pc = 0x2C0228u;
            goto label_2c0228;
        }
    }
    ctx->pc = 0x2C01E0u;
    // 0x2c01e0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x2c01e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2c01e4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2c01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2c01e8: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x2c01e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2c01ec: 0x2484f38c  addiu       $a0, $a0, -0xC74
    ctx->pc = 0x2c01ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964108));
    // 0x2c01f0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2c01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c01f4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2c01f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c01f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c01fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0200: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2c0200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c0204: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c0204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c0208: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c0208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c020c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0210: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c0210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0214: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c0214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0218: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c0218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c021c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2c021cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c0220: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2C0220u;
    {
        const bool branch_taken_0x2c0220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0220u;
        // 0x2c0224: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0220) {
            ctx->pc = 0x2C0330u;
            goto label_2c0330;
        }
    }
    ctx->pc = 0x2C0228u;
label_2c0228:
    // 0x2c0228: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2c0228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c022c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C022Cu;
    {
        const bool branch_taken_0x2c022c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C022Cu;
        // 0x2c0230: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c022c) {
            ctx->pc = 0x2C0240u;
            goto label_2c0240;
        }
    }
    ctx->pc = 0x2C0234u;
    // 0x2c0234: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C0234u;
    {
        const bool branch_taken_0x2c0234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0234) {
            ctx->pc = 0x2C0330u;
            goto label_2c0330;
        }
    }
    ctx->pc = 0x2C023Cu;
    // 0x2c023c: 0x0  nop
    ctx->pc = 0x2c023cu;
    // NOP
label_2c0240:
    // 0x2c0240: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2c0240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2c0244: 0xc66a0020  lwc1        $f10, 0x20($s3)
    ctx->pc = 0x2c0244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c0248: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c0248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c024c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2c024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0250: 0xc6690028  lwc1        $f9, 0x28($s3)
    ctx->pc = 0x2c0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c0254: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2c0254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0258: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2c0258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c025c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x2c025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2c0260: 0x460a0a01  sub.s       $f8, $f1, $f10
    ctx->pc = 0x2c0260u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x2c0264: 0x460901c1  sub.s       $f7, $f0, $f9
    ctx->pc = 0x2c0264u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2c0268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c026c: 0x0  nop
    ctx->pc = 0x2c026cu;
    // NOP
label_2c0270:
    // 0x2c0270: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2c0270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c0274: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c0274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0278: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x2c0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c027c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2c027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0280: 0x46061101  sub.s       $f4, $f2, $f6
    ctx->pc = 0x2c0280u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x2c0284: 0x460508c1  sub.s       $f3, $f1, $f5
    ctx->pc = 0x2c0284u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2c0288: 0x4607201a  mula.s      $f4, $f7
    ctx->pc = 0x2c0288u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[7]));
    // 0x2c028c: 0x4608189d  msub.s      $f2, $f3, $f8
    ctx->pc = 0x2c028cu;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[8]));
    // 0x2c0290: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2c0290u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0294: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2C0294u;
    {
        const bool branch_taken_0x2c0294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0294) {
            ctx->pc = 0x2C0308u;
            goto label_2c0308;
        }
    }
    ctx->pc = 0x2C029Cu;
    // 0x2c029c: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x2c029cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x2c02a0: 0x460a3181  sub.s       $f6, $f6, $f10
    ctx->pc = 0x2c02a0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x2c02a4: 0x4608281a  mula.s      $f5, $f8
    ctx->pc = 0x2c02a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[8]));
    // 0x2c02a8: 0x4607305d  msub.s      $f1, $f6, $f7
    ctx->pc = 0x2c02a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[7]));
    // 0x2c02ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c02acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c02b0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2C02B0u;
    {
        const bool branch_taken_0x2c02b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c02b0) {
            ctx->pc = 0x2C0308u;
            goto label_2c0308;
        }
    }
    ctx->pc = 0x2C02B8u;
    // 0x2c02b8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2c02b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c02bc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2C02BCu;
    {
        const bool branch_taken_0x2c02bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c02bc) {
            ctx->pc = 0x2C0308u;
            goto label_2c0308;
        }
    }
    ctx->pc = 0x2C02C4u;
    // 0x2c02c4: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x2c02c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2c02c8: 0x4603305d  msub.s      $f1, $f6, $f3
    ctx->pc = 0x2c02c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x2c02cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c02ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c02d0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2C02D0u;
    {
        const bool branch_taken_0x2c02d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c02d0) {
            ctx->pc = 0x2C0308u;
            goto label_2c0308;
        }
    }
    ctx->pc = 0x2C02D8u;
    // 0x2c02d8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2c02d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c02dc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2C02DCu;
    {
        const bool branch_taken_0x2c02dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c02dc) {
            ctx->pc = 0x2C0308u;
            goto label_2c0308;
        }
    }
    ctx->pc = 0x2C02E4u;
    // 0x2c02e4: 0x0  nop
    ctx->pc = 0x2c02e4u;
    // NOP
    // 0x2c02e8: 0x0  nop
    ctx->pc = 0x2c02e8u;
    // NOP
    // 0x2c02ec: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2c02ecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2c02f0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c02f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c02f4: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x2c02f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2c02f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c02f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c02fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C02FCu;
    {
        const bool branch_taken_0x2c02fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02FCu;
        // 0x2c0300: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02fc) {
            ctx->pc = 0x2C0318u;
            goto label_2c0318;
        }
    }
    ctx->pc = 0x2C0304u;
    // 0x2c0304: 0x0  nop
    ctx->pc = 0x2c0304u;
    // NOP
label_2c0308:
    // 0x2c0308: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c0308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c030c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2c030cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c0310: 0x1480ffd7  bnez        $a0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2C0310u;
    {
        const bool branch_taken_0x2c0310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0310u;
        // 0x2c0314: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0310) {
            ctx->pc = 0x2C0270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0270;
        }
    }
    ctx->pc = 0x2C0318u;
label_2c0318:
    // 0x2c0318: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0318u;
    {
        const bool branch_taken_0x2c0318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0318u;
        // 0x2c031c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0318) {
            ctx->pc = 0x2C0330u;
            goto label_2c0330;
        }
    }
    ctx->pc = 0x2C0320u;
    // 0x2c0320: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x2c0320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2c0324: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2C0324u;
    {
        const bool branch_taken_0x2c0324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0324u;
        // 0x2c0328: 0xa38389d4  sb          $v1, -0x762C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937044), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0324) {
            ctx->pc = 0x2C0440u;
            goto label_2c0440;
        }
    }
    ctx->pc = 0x2C032Cu;
    // 0x2c032c: 0x0  nop
    ctx->pc = 0x2c032cu;
    // NOP
label_2c0330:
    // 0x2c0330: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x2c0330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c0334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0334u;
    {
        const bool branch_taken_0x2c0334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0334u;
        // 0x2c0338: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0334) {
            ctx->pc = 0x2C0358u;
            goto label_2c0358;
        }
    }
    ctx->pc = 0x2C033Cu;
    // 0x2c033c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c0340: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2c0340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c0344: 0x0  nop
    ctx->pc = 0x2c0344u;
    // NOP
    // 0x2c0348: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c0348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c034c: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C034Cu;
    {
        const bool branch_taken_0x2c034c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c034c) {
            ctx->pc = 0x2C0430u;
            goto label_2c0430;
        }
    }
    ctx->pc = 0x2C0354u;
    // 0x2c0354: 0x0  nop
    ctx->pc = 0x2c0354u;
    // NOP
label_2c0358:
    // 0x2c0358: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c0358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c035c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2C035Cu;
    SET_GPR_U32(ctx, 31, 0x2C0364u);
    ctx->pc = 0x2C0360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C035Cu;
    // 0x2c0360: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2C035Cu, 0x2C0364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0364u;
label_2c0364:
    // 0x2c0364: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2c0364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c0368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c036c: 0x268400b0  addiu       $a0, $s4, 0xB0
    ctx->pc = 0x2c036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x2c0370: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2c0370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c0374: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c0374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c0378: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2c0378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2c037c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2c037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0380: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c0380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c0384: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2C0384u;
    SET_GPR_U32(ctx, 31, 0x2C038Cu);
    ctx->pc = 0x2C0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0384u;
    // 0x2c0388: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2C0384u, 0x2C038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C038Cu;
label_2c038c:
    // 0x2c038c: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x2c038cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c0390: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2c0390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2c0394: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x2c0394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2c0398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c0398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c039c: 0xa285005e  sb          $a1, 0x5E($s4)
    ctx->pc = 0x2c039cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 94), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c03a0: 0xae83009c  sw          $v1, 0x9C($s4)
    ctx->pc = 0x2c03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
    // 0x2c03a4: 0xc0ae944  jal         func_2BA510
    ctx->pc = 0x2C03A4u;
    SET_GPR_U32(ctx, 31, 0x2C03ACu);
    ctx->pc = 0x2C03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C03A4u;
    // 0x2c03a8: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA510u, 0x2C03A4u, 0x2C03ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03ACu;
label_2c03ac:
    // 0x2c03ac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C03ACu;
    {
        const bool branch_taken_0x2c03ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c03ac) {
            ctx->pc = 0x2C03E0u;
            goto label_2c03e0;
        }
    }
    ctx->pc = 0x2C03B4u;
    // 0x2c03b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c03b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c03b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c03b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c03bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03c0: 0xc0afda4  jal         func_2BF690
    ctx->pc = 0x2C03C0u;
    SET_GPR_U32(ctx, 31, 0x2C03C8u);
    ctx->pc = 0x2C03C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C03C0u;
    // 0x2c03c4: 0x268600b0  addiu       $a2, $s4, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF690u, 0x2C03C0u, 0x2C03C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03C8u;
label_2c03c8:
    // 0x2c03c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C03C8u;
    {
        const bool branch_taken_0x2c03c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c03c8) {
            ctx->pc = 0x2C03E0u;
            goto label_2c03e0;
        }
    }
    ctx->pc = 0x2C03D0u;
    // 0x2c03d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c03d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C03D4u;
    {
        const bool branch_taken_0x2c03d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03D4u;
        // 0x2c03d8: 0xa2820035  sb          $v0, 0x35($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 53), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03d4) {
            ctx->pc = 0x2C0400u;
            goto label_2c0400;
        }
    }
    ctx->pc = 0x2C03DCu;
    // 0x2c03dc: 0x0  nop
    ctx->pc = 0x2c03dcu;
    // NOP
label_2c03e0:
    // 0x2c03e0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2c03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2c03e4: 0x24425170  addiu       $v0, $v0, 0x5170
    ctx->pc = 0x2c03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20848));
    // 0x2c03e8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c03e8u;
    { uint32_t bits = FAST_READ32(0x4E5170u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c03ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c03ecu;
    { uint32_t bits = FAST_READ32(0x4E5174u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c03f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c03f0u;
    { uint32_t bits = FAST_READ32(0x4E5178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c03f4: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2c03f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2c03f8: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x2c03f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2c03fc: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x2c03fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_2c0400:
    // 0x2c0400: 0xa6800058  sh          $zero, 0x58($s4)
    ctx->pc = 0x2c0400u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c0404: 0xa6800056  sh          $zero, 0x56($s4)
    ctx->pc = 0x2c0404u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c0408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c0408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c040c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0410: 0x26990008  addiu       $t9, $s4, 0x8
    ctx->pc = 0x2c0410u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2c0414: 0xc040250  jal         func_100940
    ctx->pc = 0x2C0414u;
    SET_GPR_U32(ctx, 31, 0x2C041Cu);
    ctx->pc = 0x2C0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0414u;
    // 0x2c0418: 0xa2800107  sb          $zero, 0x107($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 263), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2C0414u, 0x2C041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C041Cu;
label_2c041c:
    // 0x2c041c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C041Cu;
    {
        const bool branch_taken_0x2c041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C041Cu;
        // 0x2c0420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c041c) {
            ctx->pc = 0x2C0440u;
            goto label_2c0440;
        }
    }
    ctx->pc = 0x2C0424u;
    // 0x2c0424: 0x0  nop
    ctx->pc = 0x2c0424u;
    // NOP
label_2c0428:
    // 0x2c0428: 0x1600ff49  bnez        $s0, . + 4 + (-0xB7 << 2)
    ctx->pc = 0x2C0428u;
    {
        const bool branch_taken_0x2c0428 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0428) {
            ctx->pc = 0x2C0150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0150;
        }
    }
    ctx->pc = 0x2C0430u;
label_2c0430:
    // 0x2c0430: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c0430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0434: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C0434u;
    SET_GPR_U32(ctx, 31, 0x2C043Cu);
    ctx->pc = 0x2C0438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0434u;
    // 0x2c0438: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C0434u, 0x2C043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C043Cu;
label_2c043c:
    // 0x2c043c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c043cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0440:
    // 0x2c0440: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c0440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0444: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c0444u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0448: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2c0448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c044c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c044cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0450: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c0450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c0454: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c0454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0458: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c0458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c045c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c045cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0460: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c0460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0464: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0464u;
        // 0x2c0468: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C046Cu;
}
