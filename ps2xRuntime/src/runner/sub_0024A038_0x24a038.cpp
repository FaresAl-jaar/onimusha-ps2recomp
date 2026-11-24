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

// Function: sub_0024A038
// Address: 0x24a038 - 0x24a1c8
void sub_0024A038_0x24a038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A038_0x24a038");
#endif

    switch (ctx->pc) {
        case 0x24a09cu: goto label_24a09c;
        case 0x24a0b0u: goto label_24a0b0;
        case 0x24a0e8u: goto label_24a0e8;
        case 0x24a12cu: goto label_24a12c;
        case 0x24a144u: goto label_24a144;
        case 0x24a164u: goto label_24a164;
        case 0x24a16cu: goto label_24a16c;
        case 0x24a184u: goto label_24a184;
        default: break;
    }

    ctx->pc = 0x24a038u;

    // 0x24a038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24a038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24a03c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24a040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a044: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24a048: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24a048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a04c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24a050: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24a050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a058: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24a05c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24a060: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A060u;
    {
        const bool branch_taken_0x24a060 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A060u;
        // 0x24a064: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a060) {
            ctx->pc = 0x24A078u;
            goto label_24a078;
        }
    }
    ctx->pc = 0x24A068u;
    // 0x24a068: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24a068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24a06c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24A06Cu;
    {
        const bool branch_taken_0x24a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A06Cu;
        // 0x24a070: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a06c) {
            ctx->pc = 0x24A094u;
            goto label_24a094;
        }
    }
    ctx->pc = 0x24A074u;
    // 0x24a074: 0x0  nop
    ctx->pc = 0x24a074u;
    // NOP
label_24a078:
    // 0x24a078: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A078u;
    {
        const bool branch_taken_0x24a078 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x24A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A078u;
        // 0x24a07c: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a078) {
            ctx->pc = 0x24A088u;
            goto label_24a088;
        }
    }
    ctx->pc = 0x24A080u;
    // 0x24a080: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24A080u;
    {
        const bool branch_taken_0x24a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A080u;
        // 0x24a084: 0x24a5d4f8  addiu       $a1, $a1, -0x2B08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a080) {
            ctx->pc = 0x24A094u;
            goto label_24a094;
        }
    }
    ctx->pc = 0x24A088u;
label_24a088:
    // 0x24a088: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A088u;
    {
        const bool branch_taken_0x24a088 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A088u;
        // 0x24a08c: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a088) {
            ctx->pc = 0x24A0A8u;
            goto label_24a0a8;
        }
    }
    ctx->pc = 0x24A090u;
    // 0x24a090: 0x24a5d518  addiu       $a1, $a1, -0x2AE8
    ctx->pc = 0x24a090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956312));
label_24a094:
    // 0x24a094: 0xc0925d4  jal         func_249750
    ctx->pc = 0x24A094u;
    SET_GPR_U32(ctx, 31, 0x24A09Cu);
    ctx->pc = 0x249750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249750u, 0x24A094u, 0x24A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A09Cu;
label_24a09c:
    // 0x24a09c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x24A09Cu;
    {
        const bool branch_taken_0x24a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A09Cu;
        // 0x24a0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a09c) {
            ctx->pc = 0x24A1A4u;
            goto label_24a1a4;
        }
    }
    ctx->pc = 0x24A0A4u;
    // 0x24a0a4: 0x0  nop
    ctx->pc = 0x24a0a4u;
    // NOP
label_24a0a8:
    // 0x24a0a8: 0xc0925e0  jal         func_249780
    ctx->pc = 0x24A0A8u;
    SET_GPR_U32(ctx, 31, 0x24A0B0u);
    ctx->pc = 0x24A0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0A8u;
    // 0x24a0ac: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249780u, 0x24A0A8u, 0x24A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A0B0u;
label_24a0b0:
    // 0x24a0b0: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A0B0u;
    {
        const bool branch_taken_0x24a0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x24a0b0) {
            ctx->pc = 0x24A0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A0B0u;
            // 0x24a0b4: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A0C0u;
            goto label_24a0c0;
        }
    }
    ctx->pc = 0x24A0B8u;
    // 0x24a0b8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x24A0B8u;
    {
        const bool branch_taken_0x24a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0B8u;
        // 0x24a0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0b8) {
            ctx->pc = 0x24A1A4u;
            goto label_24a1a4;
        }
    }
    ctx->pc = 0x24A0C0u;
label_24a0c0:
    // 0x24a0c0: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x24a0c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a0c4: 0x10750037  beq         $v1, $s5, . + 4 + (0x37 << 2)
    ctx->pc = 0x24A0C4u;
    {
        const bool branch_taken_0x24a0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x24A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0C4u;
        // 0x24a0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0c4) {
            ctx->pc = 0x24A1A4u;
            goto label_24a1a4;
        }
    }
    ctx->pc = 0x24A0CCu;
    // 0x24a0cc: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A0CCu;
    {
        const bool branch_taken_0x24a0cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a0cc) {
            ctx->pc = 0x24A0E0u;
            goto label_24a0e0;
        }
    }
    ctx->pc = 0x24A0D4u;
    // 0x24a0d4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x24A0D4u;
    {
        const bool branch_taken_0x24a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0D4u;
        // 0x24a0d8: 0xa2340002  sb          $s4, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0d4) {
            ctx->pc = 0x24A1A4u;
            goto label_24a1a4;
        }
    }
    ctx->pc = 0x24A0DCu;
    // 0x24a0dc: 0x0  nop
    ctx->pc = 0x24a0dcu;
    // NOP
label_24a0e0:
    // 0x24a0e0: 0xc091644  jal         func_245910
    ctx->pc = 0x24A0E0u;
    SET_GPR_U32(ctx, 31, 0x24A0E8u);
    ctx->pc = 0x245910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245910u, 0x24A0E0u, 0x24A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A0E8u;
label_24a0e8:
    // 0x24a0e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24a0e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a0ec: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x24A0ECu;
    {
        const bool branch_taken_0x24a0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0ECu;
        // 0x24a0f0: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0ec) {
            ctx->pc = 0x24A1A4u;
            goto label_24a1a4;
        }
    }
    ctx->pc = 0x24A0F4u;
    // 0x24a0f4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x24a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x24a0f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a0fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24a100: 0x1282c0  sll         $s0, $s2, 11
    ctx->pc = 0x24a100u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x24a104: 0xde270008  ld          $a3, 0x8($s1)
    ctx->pc = 0x24a104u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24a108: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24a108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a10c: 0xae330020  sw          $s3, 0x20($s1)
    ctx->pc = 0x24a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
    // 0x24a110: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x24a110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a114: 0xf0302b  sltu        $a2, $a3, $s0
    ctx->pc = 0x24a114u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x24a118: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x24a118u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x24a11c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a120: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x24a120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x24a124: 0xc09260e  jal         func_249838
    ctx->pc = 0x24A124u;
    SET_GPR_U32(ctx, 31, 0x24A12Cu);
    ctx->pc = 0x24A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A124u;
    // 0x24a128: 0xe6800b  movn        $s0, $a3, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249838u, 0x24A124u, 0x24A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A12Cu;
label_24a12c:
    // 0x24a12c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x24a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x24a130: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x24a130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x24a134: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24a134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a138: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x24a138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x24a13c: 0xc0916ca  jal         func_245B28
    ctx->pc = 0x24A13Cu;
    SET_GPR_U32(ctx, 31, 0x24A144u);
    ctx->pc = 0x24A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A13Cu;
    // 0x24a140: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B28u, 0x24A13Cu, 0x24A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A144u;
label_24a144:
    // 0x24a144: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24A144u;
    {
        const bool branch_taken_0x24a144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A144u;
        // 0x24a148: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a144) {
            ctx->pc = 0x24A1A8u;
            goto label_24a1a8;
        }
    }
    ctx->pc = 0x24A14Cu;
    // 0x24a14c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24a150: 0x8c501110  lw          $s0, 0x1110($v0)
    ctx->pc = 0x24a150u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x4D1110u));
    // 0x24a154: 0x56140010  bnel        $s0, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x24A154u;
    {
        const bool branch_taken_0x24a154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x24a154) {
            ctx->pc = 0x24A158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A154u;
            // 0x24a158: 0xa2350002  sb          $s5, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A198u;
            goto label_24a198;
        }
    }
    ctx->pc = 0x24A15Cu;
    // 0x24a15c: 0xc091966  jal         func_246598
    ctx->pc = 0x24A15Cu;
    SET_GPR_U32(ctx, 31, 0x24A164u);
    ctx->pc = 0x246598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246598u, 0x24A15Cu, 0x24A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A164u;
label_24a164:
    // 0x24a164: 0xc09191c  jal         func_246470
    ctx->pc = 0x24A164u;
    SET_GPR_U32(ctx, 31, 0x24A16Cu);
    ctx->pc = 0x246470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246470u, 0x24A164u, 0x24A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A16Cu;
label_24a16c:
    // 0x24a16c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x24a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x24a170: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x24a170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24a174: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x24a174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x24a178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a17c: 0xc091666  jal         func_245998
    ctx->pc = 0x24A17Cu;
    SET_GPR_U32(ctx, 31, 0x24A184u);
    ctx->pc = 0x24A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A17Cu;
    // 0x24a180: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245998u, 0x24A17Cu, 0x24A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A184u;
label_24a184:
    // 0x24a184: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x24a184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x24a188: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x24a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24a18c: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x24a18cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x24a190: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A190u;
    {
        const bool branch_taken_0x24a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A190u;
        // 0x24a194: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a190) {
            ctx->pc = 0x24A1A0u;
            goto label_24a1a0;
        }
    }
    ctx->pc = 0x24A198u;
label_24a198:
    // 0x24a198: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x24a198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x24a19c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x24a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_24a1a0:
    // 0x24a1a0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x24a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_24a1a4:
    // 0x24a1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a1a8:
    // 0x24a1a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a1ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24a1acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a1b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24a1b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a1b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24a1b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a1b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24a1b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24a1bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24a1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x24A1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C0u;
        // 0x24a1c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A1C8u;
}
