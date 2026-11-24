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

// Function: sub_0014A100
// Address: 0x14a100 - 0x14a2cc
void sub_0014A100_0x14a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A100_0x14a100");
#endif

    switch (ctx->pc) {
        case 0x14a174u: goto label_14a174;
        case 0x14a1b8u: goto label_14a1b8;
        case 0x14a1c8u: goto label_14a1c8;
        case 0x14a1e0u: goto label_14a1e0;
        case 0x14a208u: goto label_14a208;
        default: break;
    }

    ctx->pc = 0x14a100u;

    // 0x14a100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14a104: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14a104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14a108: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14a10c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a110: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a118: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14a118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a11c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14a11cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a124: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x14a124u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14a128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a12c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a130: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a134: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a138: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a13c: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x14a13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x14a140: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x14a144: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14A144u;
    {
        const bool branch_taken_0x14a144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A144u;
        // 0x14a148: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a144) {
            ctx->pc = 0x14A1F8u;
            goto label_14a1f8;
        }
    }
    ctx->pc = 0x14A14Cu;
    // 0x14a14c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a150: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14A150u;
    {
        const bool branch_taken_0x14a150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14a150) {
            ctx->pc = 0x14A1A8u;
            goto label_14a1a8;
        }
    }
    ctx->pc = 0x14A158u;
    // 0x14a158: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A158u;
    {
        const bool branch_taken_0x14a158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a158) {
            ctx->pc = 0x14A168u;
            goto label_14a168;
        }
    }
    ctx->pc = 0x14A160u;
    // 0x14a160: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x14A160u;
    {
        const bool branch_taken_0x14a160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a160) {
            ctx->pc = 0x14A2A8u;
            goto label_14a2a8;
        }
    }
    ctx->pc = 0x14A168u;
label_14a168:
    // 0x14a168: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a16c: 0xc048566  jal         func_121598
    ctx->pc = 0x14A16Cu;
    SET_GPR_U32(ctx, 31, 0x14A174u);
    ctx->pc = 0x14A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A16Cu;
    // 0x14a170: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A16Cu, 0x14A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A174u;
label_14a174:
    // 0x14a174: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A174u;
    {
        const bool branch_taken_0x14a174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a174) {
            ctx->pc = 0x14A188u;
            goto label_14a188;
        }
    }
    ctx->pc = 0x14A17Cu;
    // 0x14a17c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x14A17Cu;
    {
        const bool branch_taken_0x14a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A17Cu;
        // 0x14a180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a17c) {
            ctx->pc = 0x14A2B0u;
            goto label_14a2b0;
        }
    }
    ctx->pc = 0x14A184u;
    // 0x14a184: 0x0  nop
    ctx->pc = 0x14a184u;
    // NOP
label_14a188:
    // 0x14a188: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a18c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a190: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a198: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14a198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14a19c: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x14a19cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a1a0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x14a1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a1a4: 0x0  nop
    ctx->pc = 0x14a1a4u;
    // NOP
label_14a1a8:
    // 0x14a1a8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a1ac: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x14a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
    // 0x14a1b0: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x14A1B0u;
    SET_GPR_U32(ctx, 31, 0x14A1B8u);
    ctx->pc = 0x14A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1B0u;
    // 0x14a1b4: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x14A1B0u, 0x14A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1B8u;
label_14a1b8:
    // 0x14a1b8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a1bc: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x14a1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x14a1c0: 0xc049dd0  jal         func_127740
    ctx->pc = 0x14A1C0u;
    SET_GPR_U32(ctx, 31, 0x14A1C8u);
    ctx->pc = 0x14A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1C0u;
    // 0x14a1c4: 0x24849f40  addiu       $a0, $a0, -0x60C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x14A1C0u, 0x14A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1C8u;
label_14a1c8:
    // 0x14a1c8: 0x96670002  lhu         $a3, 0x2($s3)
    ctx->pc = 0x14a1c8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x14a1cc: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14a1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x14a1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14a1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1d8: 0xc0483d6  jal         func_120F58
    ctx->pc = 0x14A1D8u;
    SET_GPR_U32(ctx, 31, 0x14A1E0u);
    ctx->pc = 0x14A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1D8u;
    // 0x14a1dc: 0x24c69f40  addiu       $a2, $a2, -0x60C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F58u, 0x14A1D8u, 0x14A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1E0u;
label_14a1e0:
    // 0x14a1e0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x14A1E0u;
    {
        const bool branch_taken_0x14a1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a1e0) {
            ctx->pc = 0x14A2A8u;
            goto label_14a2a8;
        }
    }
    ctx->pc = 0x14A1E8u;
    // 0x14a1e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a1ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a1f0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14A1F0u;
    {
        const bool branch_taken_0x14a1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1F0u;
        // 0x14a1f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1f0) {
            ctx->pc = 0x14A2A8u;
            goto label_14a2a8;
        }
    }
    ctx->pc = 0x14A1F8u;
label_14a1f8:
    // 0x14a1f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a1fc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a200: 0xc048566  jal         func_121598
    ctx->pc = 0x14A200u;
    SET_GPR_U32(ctx, 31, 0x14A208u);
    ctx->pc = 0x14A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A200u;
    // 0x14a204: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A200u, 0x14A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A208u;
label_14a208:
    // 0x14a208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a20c: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x14A20Cu;
    {
        const bool branch_taken_0x14a20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a20c) {
            ctx->pc = 0x14A2A8u;
            goto label_14a2a8;
        }
    }
    ctx->pc = 0x14A214u;
    // 0x14a214: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a218: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A218u;
    {
        const bool branch_taken_0x14a218 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x14a218) {
            ctx->pc = 0x14A238u;
            goto label_14a238;
        }
    }
    ctx->pc = 0x14A220u;
    // 0x14a220: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a228: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14a228u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a22c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a230: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x14A230u;
    {
        const bool branch_taken_0x14a230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A230u;
        // 0x14a234: 0xae030064  sw          $v1, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a230) {
            ctx->pc = 0x14A2B0u;
            goto label_14a2b0;
        }
    }
    ctx->pc = 0x14A238u;
label_14a238:
    // 0x14a238: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x14a238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x14a23c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A23Cu;
    {
        const bool branch_taken_0x14a23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A23Cu;
        // 0x14a240: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a23c) {
            ctx->pc = 0x14A278u;
            goto label_14a278;
        }
    }
    ctx->pc = 0x14A244u;
    // 0x14a244: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14A244u;
    {
        const bool branch_taken_0x14a244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a244) {
            ctx->pc = 0x14A278u;
            goto label_14a278;
        }
    }
    ctx->pc = 0x14A24Cu;
    // 0x14a24c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x14a250: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A250u;
    {
        const bool branch_taken_0x14a250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A250u;
        // 0x14a254: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a250) {
            ctx->pc = 0x14A278u;
            goto label_14a278;
        }
    }
    ctx->pc = 0x14A258u;
    // 0x14a258: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A258u;
    {
        const bool branch_taken_0x14a258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a258) {
            ctx->pc = 0x14A268u;
            goto label_14a268;
        }
    }
    ctx->pc = 0x14A260u;
    // 0x14a260: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A260u;
    {
        const bool branch_taken_0x14a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a260) {
            ctx->pc = 0x14A278u;
            goto label_14a278;
        }
    }
    ctx->pc = 0x14A268u;
label_14a268:
    // 0x14a268: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a26c: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14a26cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a270: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14A270u;
    {
        const bool branch_taken_0x14a270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A270u;
        // 0x14a274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a270) {
            ctx->pc = 0x14A2B0u;
            goto label_14a2b0;
        }
    }
    ctx->pc = 0x14A278u;
label_14a278:
    // 0x14a278: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14a278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a27c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A27Cu;
    {
        const bool branch_taken_0x14a27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A27Cu;
        // 0x14a280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a27c) {
            ctx->pc = 0x14A298u;
            goto label_14a298;
        }
    }
    ctx->pc = 0x14A284u;
    // 0x14a284: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a288: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14a288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a28c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A290u;
    {
        const bool branch_taken_0x14a290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A290u;
        // 0x14a294: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a290) {
            ctx->pc = 0x14A2A8u;
            goto label_14a2a8;
        }
    }
    ctx->pc = 0x14A298u;
label_14a298:
    // 0x14a298: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a29c: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14a29cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a2a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A2A0u;
    {
        const bool branch_taken_0x14a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2A0u;
        // 0x14a2a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2a0) {
            ctx->pc = 0x14A2B0u;
            goto label_14a2b0;
        }
    }
    ctx->pc = 0x14A2A8u;
label_14a2a8:
    // 0x14a2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a2ac: 0x0  nop
    ctx->pc = 0x14a2acu;
    // NOP
label_14a2b0:
    // 0x14a2b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14a2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a2b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a2b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14A2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2C4u;
        // 0x14a2c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A2CCu;
}
