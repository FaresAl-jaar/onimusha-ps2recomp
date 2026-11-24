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

// Function: sub_00179A90
// Address: 0x179a90 - 0x179d3c
void sub_00179A90_0x179a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179A90_0x179a90");
#endif

    switch (ctx->pc) {
        case 0x179ae8u: goto label_179ae8;
        case 0x179b20u: goto label_179b20;
        case 0x179b8cu: goto label_179b8c;
        case 0x179bc8u: goto label_179bc8;
        case 0x179cf0u: goto label_179cf0;
        case 0x179cf8u: goto label_179cf8;
        case 0x179d08u: goto label_179d08;
        case 0x179d14u: goto label_179d14;
        default: break;
    }

    ctx->pc = 0x179a90u;

    // 0x179a90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x179a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x179a94: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x179a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x179a98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x179a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x179a9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x179a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x179aa0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x179aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x179aa4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x179aa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179aa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x179aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x179aac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x179aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x179ab4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x179ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179ac0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x179ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179ac4: 0x8c2254e8  lw          $v0, 0x54E8($at)
    ctx->pc = 0x179ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6654E8u));
    // 0x179ac8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179AC8u;
    {
        const bool branch_taken_0x179ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x179ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AC8u;
        // 0x179acc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ac8) {
            ctx->pc = 0x179AD8u;
            goto label_179ad8;
        }
    }
    ctx->pc = 0x179AD0u;
    // 0x179ad0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x179AD0u;
    {
        const bool branch_taken_0x179ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AD0u;
        // 0x179ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ad0) {
            ctx->pc = 0x179D18u;
            goto label_179d18;
        }
    }
    ctx->pc = 0x179AD8u;
label_179ad8:
    // 0x179ad8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x179ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179adc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x179adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ae0: 0xc05e680  jal         func_179A00
    ctx->pc = 0x179AE0u;
    SET_GPR_U32(ctx, 31, 0x179AE8u);
    ctx->pc = 0x179AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179AE0u;
    // 0x179ae4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179A00u, 0x179AE0u, 0x179AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AE8u;
label_179ae8:
    // 0x179ae8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x179AE8u;
    {
        const bool branch_taken_0x179ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AE8u;
        // 0x179aec: 0x552023  subu        $a0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ae8) {
            ctx->pc = 0x179B18u;
            goto label_179b18;
        }
    }
    ctx->pc = 0x179AF0u;
    // 0x179af0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x179af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x179af4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x179af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x179af8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x179af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x179afc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x179afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x179b00: 0x0  nop
    ctx->pc = 0x179b00u;
    // NOP
    // 0x179b04: 0x0  nop
    ctx->pc = 0x179b04u;
    // NOP
    // 0x179b08: 0x1010  mfhi        $v0
    ctx->pc = 0x179b08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x179b0c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x179b0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x179b10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x179B10u;
    {
        const bool branch_taken_0x179b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B10u;
        // 0x179b14: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b10) {
            ctx->pc = 0x179B58u;
            goto label_179b58;
        }
    }
    ctx->pc = 0x179B18u;
label_179b18:
    // 0x179b18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b1c: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x179b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_179b20:
    // 0x179b20: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x179b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x179b24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179B24u;
    {
        const bool branch_taken_0x179b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179b24) {
            ctx->pc = 0x179B40u;
            goto label_179b40;
        }
    }
    ctx->pc = 0x179B2Cu;
    // 0x179b2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x179b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x179b30: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x179b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x179b34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x179B34u;
    {
        const bool branch_taken_0x179b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B34u;
        // 0x179b38: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b34) {
            ctx->pc = 0x179B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179b20;
        }
    }
    ctx->pc = 0x179B3Cu;
    // 0x179b3c: 0x0  nop
    ctx->pc = 0x179b3cu;
    // NOP
label_179b40:
    // 0x179b40: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x179b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x179b44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179B44u;
    {
        const bool branch_taken_0x179b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B44u;
        // 0x179b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b44) {
            ctx->pc = 0x179B58u;
            goto label_179b58;
        }
    }
    ctx->pc = 0x179B4Cu;
    // 0x179b4c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x179B4Cu;
    {
        const bool branch_taken_0x179b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179b4c) {
            ctx->pc = 0x179D18u;
            goto label_179d18;
        }
    }
    ctx->pc = 0x179B54u;
    // 0x179b54: 0x0  nop
    ctx->pc = 0x179b54u;
    // NOP
label_179b58:
    // 0x179b58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x179b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x179b5c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x179b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x179b60: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x179b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x179b64: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x179b64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x179b68: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x179b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x179b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179b70: 0x2158821  addu        $s1, $s0, $s5
    ctx->pc = 0x179b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x179b74: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x179b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x179b78: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x179b78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x179b7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x179b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x179b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b84: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x179B84u;
    SET_GPR_U32(ctx, 31, 0x179B8Cu);
    ctx->pc = 0x179B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B84u;
    // 0x179b88: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x179B84u, 0x179B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B8Cu;
label_179b8c:
    // 0x179b8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x179b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x179b90: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x179b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b94: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x179b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x179b98: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x179b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x179b9c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x179b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x179ba0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x179ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x179ba4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x179ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x179ba8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x179ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x179bac: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x179bacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x179bb0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x179BB0u;
    {
        const bool branch_taken_0x179bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x179BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BB0u;
        // 0x179bb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bb0) {
            ctx->pc = 0x179BF0u;
            goto label_179bf0;
        }
    }
    ctx->pc = 0x179BB8u;
    // 0x179bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bbc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x179bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x179bc0: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x179bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x179bc4: 0x0  nop
    ctx->pc = 0x179bc4u;
    // NOP
label_179bc8:
    // 0x179bc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x179bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179bcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x179bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x179bd0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x179bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x179bd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179bd8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x179bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x179bdc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x179bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x179be0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179be4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x179be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x179be8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x179BE8u;
    {
        const bool branch_taken_0x179be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BE8u;
        // 0x179bec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179be8) {
            ctx->pc = 0x179BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179bc8;
        }
    }
    ctx->pc = 0x179BF0u;
label_179bf0:
    // 0x179bf0: 0x2152821  addu        $a1, $s0, $s5
    ctx->pc = 0x179bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x179bf4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x179bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x179bf8: 0x131a02  srl         $v1, $s3, 8
    ctx->pc = 0x179bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x179bfc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x179bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x179c00: 0x131402  srl         $v0, $s3, 16
    ctx->pc = 0x179c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
    // 0x179c04: 0x24a70018  addiu       $a3, $a1, 0x18
    ctx->pc = 0x179c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x179c08: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x179c08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x179c0c: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x179c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x179c10: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x179c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x179c14: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x179c14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x179c18: 0xa0b2000b  sb          $s2, 0xB($a1)
    ctx->pc = 0x179c18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 18));
    // 0x179c1c: 0xa0b30008  sb          $s3, 0x8($a1)
    ctx->pc = 0x179c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 19));
    // 0x179c20: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x179c20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x179c24: 0xa0a2000a  sb          $v0, 0xA($a1)
    ctx->pc = 0x179c24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x179c28: 0x92820019  lbu         $v0, 0x19($s4)
    ctx->pc = 0x179c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 25)));
    // 0x179c2c: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x179c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x179c30: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x179c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x179c34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179C34u;
    {
        const bool branch_taken_0x179c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C34u;
        // 0x179c38: 0x24a60006  addiu       $a2, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c34) {
            ctx->pc = 0x179C48u;
            goto label_179c48;
        }
    }
    ctx->pc = 0x179C3Cu;
    // 0x179c3c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x179c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x179c40: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x179c40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x179c44: 0x0  nop
    ctx->pc = 0x179c44u;
    // NOP
label_179c48:
    // 0x179c48: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x179c48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x179c4c: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x179c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x179c50: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x179c50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179c54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x179c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x179c58: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x179c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x179c5c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x179c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c60: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x179c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x179c64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x179c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x179c68: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x179c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x179c6c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x179c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x179c70: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x179c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x179c74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x179c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x179c78: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x179c78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179c7c: 0x5217e  dsrl32      $a0, $a1, 5
    ctx->pc = 0x179c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> (32 + 5));
    // 0x179c80: 0x51cfe  dsrl32      $v1, $a1, 19
    ctx->pc = 0x179c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (32 + 19));
    // 0x179c84: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x179c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x179c88: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x179c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x179c8c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x179c8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x179c90: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x179c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x179c94: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x179c94u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x179c98: 0x51d3a  dsrl        $v1, $a1, 20
    ctx->pc = 0x179c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> 20);
    // 0x179c9c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x179c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x179ca0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x179ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x179ca4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x179ca4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x179ca8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179CA8u;
    {
        const bool branch_taken_0x179ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x179CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CA8u;
        // 0x179cac: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ca8) {
            ctx->pc = 0x179CB8u;
            goto label_179cb8;
        }
    }
    ctx->pc = 0x179CB0u;
    // 0x179cb0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x179cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x179cb4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x179cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_179cb8:
    // 0x179cb8: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x179cb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
    // 0x179cbc: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x179cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x179cc0: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x179cc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
    // 0x179cc4: 0x85c3c  dsll32      $t3, $t0, 16
    ctx->pc = 0x179cc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 16));
    // 0x179cc8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x179cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x179ccc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x179cccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x179cd0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x179cd0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x179cd4: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x179cd4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x179cd8: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x179cd8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x179cdc: 0x2484ce30  addiu       $a0, $a0, -0x31D0
    ctx->pc = 0x179cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954544));
    // 0x179ce0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x179ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179ce4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179ce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ce8: 0xc040df4  jal         func_1037D0
    ctx->pc = 0x179CE8u;
    SET_GPR_U32(ctx, 31, 0x179CF0u);
    ctx->pc = 0x179CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CE8u;
    // 0x179cec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1037D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1037D0u, 0x179CE8u, 0x179CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CF0u;
label_179cf0:
    // 0x179cf0: 0xc043898  jal         func_10E260
    ctx->pc = 0x179CF0u;
    SET_GPR_U32(ctx, 31, 0x179CF8u);
    ctx->pc = 0x179CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CF0u;
    // 0x179cf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x179CF0u, 0x179CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CF8u;
label_179cf8:
    // 0x179cf8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x179cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x179cfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d00: 0xc040e6e  jal         func_1039B8
    ctx->pc = 0x179D00u;
    SET_GPR_U32(ctx, 31, 0x179D08u);
    ctx->pc = 0x179D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D00u;
    // 0x179d04: 0x2484ce30  addiu       $a0, $a0, -0x31D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1039B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039B8u, 0x179D00u, 0x179D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D08u;
label_179d08:
    // 0x179d08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d0c: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x179D0Cu;
    SET_GPR_U32(ctx, 31, 0x179D14u);
    ctx->pc = 0x179D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D0Cu;
    // 0x179d10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x179D0Cu, 0x179D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D14u;
label_179d14:
    // 0x179d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179d18:
    // 0x179d18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x179d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179d1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x179d1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179d20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x179d20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179d24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179d28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179d34: 0x3e00008  jr          $ra
    ctx->pc = 0x179D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D34u;
        // 0x179d38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179D3Cu;
}
