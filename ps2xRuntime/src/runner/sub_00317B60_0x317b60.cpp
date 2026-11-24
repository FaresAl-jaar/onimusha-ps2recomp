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

// Function: sub_00317B60
// Address: 0x317b60 - 0x3194cc
void sub_00317B60_0x317b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317B60_0x317b60");
#endif

    switch (ctx->pc) {
        case 0x317c10u: goto label_317c10;
        case 0x317c18u: goto label_317c18;
        case 0x317c40u: goto label_317c40;
        case 0x317c50u: goto label_317c50;
        case 0x317c78u: goto label_317c78;
        case 0x317e08u: goto label_317e08;
        case 0x318190u: goto label_318190;
        case 0x318380u: goto label_318380;
        case 0x3183d4u: goto label_3183d4;
        case 0x3183e4u: goto label_3183e4;
        case 0x3183f8u: goto label_3183f8;
        case 0x31840cu: goto label_31840c;
        case 0x318424u: goto label_318424;
        case 0x3186c0u: goto label_3186c0;
        case 0x3186dcu: goto label_3186dc;
        case 0x3186e8u: goto label_3186e8;
        case 0x318734u: goto label_318734;
        case 0x318760u: goto label_318760;
        case 0x3187acu: goto label_3187ac;
        case 0x3189b8u: goto label_3189b8;
        case 0x318b58u: goto label_318b58;
        case 0x318d08u: goto label_318d08;
        case 0x319070u: goto label_319070;
        case 0x31949cu: goto label_31949c;
        default: break;
    }

    ctx->pc = 0x317b60u;

    // 0x317b60: 0x27bdf970  addiu       $sp, $sp, -0x690
    ctx->pc = 0x317b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965616));
    // 0x317b64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x317b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x317b68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x317b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x317b6c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x317b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x317b70: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x317b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x317b74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x317b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x317b78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x317b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x317b7c: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x317b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x317b80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x317b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x317b84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x317b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x317b88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x317b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x317b8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x317b8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x317b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x317b94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x317b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x317b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x317b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x317b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x317b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x317ba0: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x317ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81FC90u));
    // 0x317ba4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x317ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x317ba8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x317ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x317bac: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x317bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x317bb0: 0x859024  and         $s2, $a0, $a1
    ctx->pc = 0x317bb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x317bb4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x317bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x317bb8: 0xafb2012c  sw          $s2, 0x12C($sp)
    ctx->pc = 0x317bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 18));
    // 0x317bbc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x317bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x317bc0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x317bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x317bc4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x317bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x317bc8: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x317bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x317bcc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317bd0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x317bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x317bd4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x317bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x317bd8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x317bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x317bdc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x317bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x317be0: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x317be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x317be4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317be8: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x317be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x317bec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317BECu;
    {
        const bool branch_taken_0x317bec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BECu;
        // 0x317bf0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bec) {
            ctx->pc = 0x317BFCu;
            goto label_317bfc;
        }
    }
    ctx->pc = 0x317BF4u;
    // 0x317bf4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317bf8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317bf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317bfc:
    // 0x317bfc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x317bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317c00: 0x27a40650  addiu       $a0, $sp, 0x650
    ctx->pc = 0x317c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
    // 0x317c04: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x317c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x317c08: 0xc04150c  jal         func_105430
    ctx->pc = 0x317C08u;
    SET_GPR_U32(ctx, 31, 0x317C10u);
    ctx->pc = 0x317C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C08u;
    // 0x317c0c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x317C08u, 0x317C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C10u;
label_317c10:
    // 0x317c10: 0xc04150c  jal         func_105430
    ctx->pc = 0x317C10u;
    SET_GPR_U32(ctx, 31, 0x317C18u);
    ctx->pc = 0x317C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C10u;
    // 0x317c14: 0x27a40610  addiu       $a0, $sp, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x317C10u, 0x317C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C18u;
label_317c18:
    // 0x317c18: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x317c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x317c1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x317c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c20: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x317c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x317c24: 0x27a60610  addiu       $a2, $sp, 0x610
    ctx->pc = 0x317c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    // 0x317c28: 0x27a70650  addiu       $a3, $sp, 0x650
    ctx->pc = 0x317c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
    // 0x317c2c: 0xafa00610  sw          $zero, 0x610($sp)
    ctx->pc = 0x317c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1552), GPR_U32(ctx, 0));
    // 0x317c30: 0xafa00624  sw          $zero, 0x624($sp)
    ctx->pc = 0x317c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1572), GPR_U32(ctx, 0));
    // 0x317c34: 0xafa00638  sw          $zero, 0x638($sp)
    ctx->pc = 0x317c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1592), GPR_U32(ctx, 0));
    // 0x317c38: 0xc0c65f8  jal         func_3197E0
    ctx->pc = 0x317C38u;
    SET_GPR_U32(ctx, 31, 0x317C40u);
    ctx->pc = 0x317C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C38u;
    // 0x317c3c: 0xafa0064c  sw          $zero, 0x64C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1612), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3197E0u, 0x317C38u, 0x317C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C40u;
label_317c40:
    // 0x317c40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x317c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x317C48u;
    {
        const bool branch_taken_0x317c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C48u;
        // 0x317c4c: 0x3403ff00  ori         $v1, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c48) {
            ctx->pc = 0x317C60u;
            goto label_317c60;
        }
    }
    ctx->pc = 0x317C50u;
label_317c50:
    // 0x317c50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x317c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x317c54: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x317c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x317c58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x317c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x317c5c: 0xac430210  sw          $v1, 0x210($v0)
    ctx->pc = 0x317c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 3));
label_317c60:
    // 0x317c60: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x317c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x317c64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x317C64u;
    {
        const bool branch_taken_0x317c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317c64) {
            ctx->pc = 0x317C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317c50;
        }
    }
    ctx->pc = 0x317C6Cu;
    // 0x317c6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x317c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x317C70u;
    {
        const bool branch_taken_0x317c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C70u;
        // 0x317c74: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c70) {
            ctx->pc = 0x317CA0u;
            goto label_317ca0;
        }
    }
    ctx->pc = 0x317C78u;
label_317c78:
    // 0x317c78: 0xc51004  sllv        $v0, $a1, $a2
    ctx->pc = 0x317c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x317c7c: 0x384300f0  xori        $v1, $v0, 0xF0
    ctx->pc = 0x317c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)240);
    // 0x317c80: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x317c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x317c84: 0x3464000f  ori         $a0, $v1, 0xF
    ctx->pc = 0x317c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x317c88: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x317c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x317c8c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x317c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x317c90: 0x8c6205f0  lw          $v0, 0x5F0($v1)
    ctx->pc = 0x317c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1520)));
    // 0x317c94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x317c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x317c98: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x317c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x317c9c: 0xac6205f0  sw          $v0, 0x5F0($v1)
    ctx->pc = 0x317c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1520), GPR_U32(ctx, 2));
label_317ca0:
    // 0x317ca0: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x317ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x317ca4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x317CA4u;
    {
        const bool branch_taken_0x317ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CA4u;
        // 0x317ca8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ca4) {
            ctx->pc = 0x317C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317c78;
        }
    }
    ctx->pc = 0x317CACu;
    // 0x317cac: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x317cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x317cb0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x317cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x317cb4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317cb8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x317cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x317cbc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x317cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x317cc0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x317cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x317cc4: 0x34421d2c  ori         $v0, $v0, 0x1D2C
    ctx->pc = 0x317cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7468);
    // 0x317cc8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x317cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x317ccc: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x317cccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317cd0: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x317cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x317cd4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x317cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x317cd8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317cdc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x317cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317ce0: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x317ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x317ce4: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x317ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x317ce8: 0xaf928b2c  sw          $s2, -0x74D4($gp)
    ctx->pc = 0x317ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 18));
    // 0x317cec: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x317cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x317cf0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317cf4: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x317cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x317cf8: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x317cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x317cfc: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x317cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x317d00: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x317d00u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x317d04: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x317d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x317d08: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x317d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x317d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317d10: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317d14: 0xfe480000  sd          $t0, 0x0($s2)
    ctx->pc = 0x317d14u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 8));
    // 0x317d18: 0xfe470008  sd          $a3, 0x8($s2)
    ctx->pc = 0x317d18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 7));
    // 0x317d1c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317d20: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x317d20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x317d24: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x317d24u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x317d28: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317d2c: 0xfe450000  sd          $a1, 0x0($s2)
    ctx->pc = 0x317d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 5));
    // 0x317d30: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x317d30u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
    // 0x317d34: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317d38: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x317d38u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x317d3c: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x317d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x317d40: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x317d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317d44: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317d48: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x317d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x317d4c: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x317d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x317d50: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x317d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x317d54: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x317d54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x317d58: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x317D58u;
    {
        const bool branch_taken_0x317d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x317D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D58u;
        // 0x317d5c: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d58) {
            ctx->pc = 0x317DA8u;
            goto label_317da8;
        }
    }
    ctx->pc = 0x317D60u;
    // 0x317d60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x317d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317d64: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x317D64u;
    {
        const bool branch_taken_0x317d64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x317d64) {
            ctx->pc = 0x317D80u;
            goto label_317d80;
        }
    }
    ctx->pc = 0x317D6Cu;
    // 0x317d6c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x317D6Cu;
    {
        const bool branch_taken_0x317d6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x317d6c) {
            ctx->pc = 0x317D80u;
            goto label_317d80;
        }
    }
    ctx->pc = 0x317D74u;
    // 0x317d74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x317D74u;
    {
        const bool branch_taken_0x317d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317d74) {
            ctx->pc = 0x317DD8u;
            goto label_317dd8;
        }
    }
    ctx->pc = 0x317D7Cu;
    // 0x317d7c: 0x0  nop
    ctx->pc = 0x317d7cu;
    // NOP
label_317d80:
    // 0x317d80: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x317d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317d84: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x317d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x317d88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317D88u;
    {
        const bool branch_taken_0x317d88 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D88u;
        // 0x317d8c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d88) {
            ctx->pc = 0x317D98u;
            goto label_317d98;
        }
    }
    ctx->pc = 0x317D90u;
    // 0x317d90: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317d94: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317d94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317d98:
    // 0x317d98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317d9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x317D9Cu;
    {
        const bool branch_taken_0x317d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D9Cu;
        // 0x317da0: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d9c) {
            ctx->pc = 0x317DD8u;
            goto label_317dd8;
        }
    }
    ctx->pc = 0x317DA4u;
    // 0x317da4: 0x0  nop
    ctx->pc = 0x317da4u;
    // NOP
label_317da8:
    // 0x317da8: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x317da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x317dac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317DACu;
    {
        const bool branch_taken_0x317dac = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DACu;
        // 0x317db0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317dac) {
            ctx->pc = 0x317DBCu;
            goto label_317dbc;
        }
    }
    ctx->pc = 0x317DB4u;
    // 0x317db4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317db8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317db8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317dbc:
    // 0x317dbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317dc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x317dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x317dc4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x317dc4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x317dc8: 0x0  nop
    ctx->pc = 0x317dc8u;
    // NOP
    // 0x317dcc: 0x0  nop
    ctx->pc = 0x317dccu;
    // NOP
    // 0x317dd0: 0x1012  mflo        $v0
    ctx->pc = 0x317dd0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x317dd4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x317dd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_317dd8:
    // 0x317dd8: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x317dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317ddc: 0x3c031800  lui         $v1, 0x1800
    ctx->pc = 0x317ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6144 << 16));
    // 0x317de0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x317de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x317de4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x317de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317de8: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x317de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x317dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317df0: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x317df0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x317df4: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x317df4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x317df8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x317df8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x317dfc: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x317dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x317e00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x317E00u;
    {
        const bool branch_taken_0x317e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E00u;
        // 0x317e04: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e00) {
            ctx->pc = 0x317E38u;
            goto label_317e38;
        }
    }
    ctx->pc = 0x317E08u;
label_317e08:
    // 0x317e08: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x317e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x317e0c: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x317e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x317e10: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x317e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x317e14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x317e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x317e18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x317e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x317e1c: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x317e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x317e20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x317e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x317e24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x317e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x317e28: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x317e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x317e2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x317e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x317e30: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x317e30u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x317e34: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_317e38:
    // 0x317e38: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x317e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x317e3c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x317E3Cu;
    {
        const bool branch_taken_0x317e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317e3c) {
            ctx->pc = 0x317E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317e08;
        }
    }
    ctx->pc = 0x317E44u;
    // 0x317e44: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x317e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317e4c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x317e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x317e50: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x317e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x317e54: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x317e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x317e58: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x317e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x317e5c: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x317E5Cu;
    {
        const bool branch_taken_0x317e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x317E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E5Cu;
        // 0x317e60: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e5c) {
            ctx->pc = 0x317EA8u;
            goto label_317ea8;
        }
    }
    ctx->pc = 0x317E64u;
    // 0x317e64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x317e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317e68: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317E68u;
    {
        const bool branch_taken_0x317e68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x317e68) {
            ctx->pc = 0x317E80u;
            goto label_317e80;
        }
    }
    ctx->pc = 0x317E70u;
    // 0x317e70: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x317E70u;
    {
        const bool branch_taken_0x317e70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e70) {
            ctx->pc = 0x317E80u;
            goto label_317e80;
        }
    }
    ctx->pc = 0x317E78u;
    // 0x317e78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x317E78u;
    {
        const bool branch_taken_0x317e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e78) {
            ctx->pc = 0x317ED8u;
            goto label_317ed8;
        }
    }
    ctx->pc = 0x317E80u;
label_317e80:
    // 0x317e80: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x317e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317e84: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x317e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x317e88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317E88u;
    {
        const bool branch_taken_0x317e88 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E88u;
        // 0x317e8c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e88) {
            ctx->pc = 0x317E98u;
            goto label_317e98;
        }
    }
    ctx->pc = 0x317E90u;
    // 0x317e90: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317e94: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317e94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317e98:
    // 0x317e98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317e9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x317E9Cu;
    {
        const bool branch_taken_0x317e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E9Cu;
        // 0x317ea0: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e9c) {
            ctx->pc = 0x317ED8u;
            goto label_317ed8;
        }
    }
    ctx->pc = 0x317EA4u;
    // 0x317ea4: 0x0  nop
    ctx->pc = 0x317ea4u;
    // NOP
label_317ea8:
    // 0x317ea8: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x317ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x317eac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317EACu;
    {
        const bool branch_taken_0x317eac = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EACu;
        // 0x317eb0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317eac) {
            ctx->pc = 0x317EBCu;
            goto label_317ebc;
        }
    }
    ctx->pc = 0x317EB4u;
    // 0x317eb4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317eb8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317eb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317ebc:
    // 0x317ebc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317ec0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x317ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x317ec4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x317ec4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x317ec8: 0x0  nop
    ctx->pc = 0x317ec8u;
    // NOP
    // 0x317ecc: 0x0  nop
    ctx->pc = 0x317eccu;
    // NOP
    // 0x317ed0: 0x1012  mflo        $v0
    ctx->pc = 0x317ed0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x317ed4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x317ed4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_317ed8:
    // 0x317ed8: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x317ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317edc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x317edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x317ee0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x317ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x317ee4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x317ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317ee8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x317ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x317eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317ef0: 0xa4d10000  sh          $s1, 0x0($a2)
    ctx->pc = 0x317ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x317ef4: 0xfe450000  sd          $a1, 0x0($s2)
    ctx->pc = 0x317ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 5));
    // 0x317ef8: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x317ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
    // 0x317efc: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x317efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x317f00: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317f00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317f04: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x317f04u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x317f08: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x317f08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x317f0c: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x317f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317f10: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x317f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x317f14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x317f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x317f18: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x317f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x317f1c: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x317f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x317f20: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x317f20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x317f24: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x317F24u;
    {
        const bool branch_taken_0x317f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x317F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F24u;
        // 0x317f28: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f24) {
            ctx->pc = 0x317F70u;
            goto label_317f70;
        }
    }
    ctx->pc = 0x317F2Cu;
    // 0x317f2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x317f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317f30: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317F30u;
    {
        const bool branch_taken_0x317f30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x317f30) {
            ctx->pc = 0x317F48u;
            goto label_317f48;
        }
    }
    ctx->pc = 0x317F38u;
    // 0x317f38: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x317F38u;
    {
        const bool branch_taken_0x317f38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x317f38) {
            ctx->pc = 0x317F48u;
            goto label_317f48;
        }
    }
    ctx->pc = 0x317F40u;
    // 0x317f40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x317F40u;
    {
        const bool branch_taken_0x317f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317f40) {
            ctx->pc = 0x317FA0u;
            goto label_317fa0;
        }
    }
    ctx->pc = 0x317F48u;
label_317f48:
    // 0x317f48: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x317f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317f4c: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x317f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x317f50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317F50u;
    {
        const bool branch_taken_0x317f50 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F50u;
        // 0x317f54: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f50) {
            ctx->pc = 0x317F60u;
            goto label_317f60;
        }
    }
    ctx->pc = 0x317F58u;
    // 0x317f58: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317f5c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317f5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317f60:
    // 0x317f60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317f64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x317F64u;
    {
        const bool branch_taken_0x317f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F64u;
        // 0x317f68: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f64) {
            ctx->pc = 0x317FA0u;
            goto label_317fa0;
        }
    }
    ctx->pc = 0x317F6Cu;
    // 0x317f6c: 0x0  nop
    ctx->pc = 0x317f6cu;
    // NOP
label_317f70:
    // 0x317f70: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x317f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x317f74: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317F74u;
    {
        const bool branch_taken_0x317f74 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F74u;
        // 0x317f78: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f74) {
            ctx->pc = 0x317F84u;
            goto label_317f84;
        }
    }
    ctx->pc = 0x317F7Cu;
    // 0x317f7c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317f80: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317f80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317f84:
    // 0x317f84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317f88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x317f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x317f8c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x317f8cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x317f90: 0x0  nop
    ctx->pc = 0x317f90u;
    // NOP
    // 0x317f94: 0x0  nop
    ctx->pc = 0x317f94u;
    // NOP
    // 0x317f98: 0x1012  mflo        $v0
    ctx->pc = 0x317f98u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x317f9c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x317f9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_317fa0:
    // 0x317fa0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x317fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x317fa4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x317fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x317fa8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x317fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317fac: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x317facu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x317fb0: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x317fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x317fb4: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x317fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x317fb8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317FB8u;
    {
        const bool branch_taken_0x317fb8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FB8u;
        // 0x317fbc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fb8) {
            ctx->pc = 0x317FC8u;
            goto label_317fc8;
        }
    }
    ctx->pc = 0x317FC0u;
    // 0x317fc0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317fc4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317fc8:
    // 0x317fc8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x317fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317fcc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x317fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x317fd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x317fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x317fd4: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x317fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x317fd8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x317fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x317fdc: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x317fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x317fe0: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x317fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x317fe4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317FE4u;
    {
        const bool branch_taken_0x317fe4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FE4u;
        // 0x317fe8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fe4) {
            ctx->pc = 0x317FF4u;
            goto label_317ff4;
        }
    }
    ctx->pc = 0x317FECu;
    // 0x317fec: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317ff0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317ff4:
    // 0x317ff4: 0x8f858b28  lw          $a1, -0x74D8($gp)
    ctx->pc = 0x317ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x317ff8: 0x244affff  addiu       $t2, $v0, -0x1
    ctx->pc = 0x317ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317ffc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x317ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x318000: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x318000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x318004: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x318004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318008: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x318008u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31800c: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x31800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x318010: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x318010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x318014: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x318014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x318018: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x318018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x31801c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318020: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x318020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x318024: 0xa4aa0000  sh          $t2, 0x0($a1)
    ctx->pc = 0x318024u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x318028: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x318028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31802c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x31802cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x318030: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x318030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x318034: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x318034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x318038: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x318038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31803c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x31803cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x318040: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x318040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x318044: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x318044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x318048: 0x3443040a  ori         $v1, $v0, 0x40A
    ctx->pc = 0x318048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1034);
    // 0x31804c: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x31804cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x318050: 0x3c0a2003  lui         $t2, 0x2003
    ctx->pc = 0x318050u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8195 << 16));
    // 0x318054: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318058: 0x354aa58e  ori         $t2, $t2, 0xA58E
    ctx->pc = 0x318058u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)42382);
    // 0x31805c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x31805cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x318060: 0xa583c  dsll32      $t3, $t2, 0
    ctx->pc = 0x318060u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 0));
    // 0x318064: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x318064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x318068: 0x3c0a25b2  lui         $t2, 0x25B2
    ctx->pc = 0x318068u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)9650 << 16));
    // 0x31806c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x31806cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x318070: 0x14bb025  or          $s6, $t2, $t3
    ctx->pc = 0x318070u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x318074: 0xaf928b2c  sw          $s2, -0x74D4($gp)
    ctx->pc = 0x318074u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 18));
    // 0x318078: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x318078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x31807c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31807cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318080: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x318080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x318084: 0xfe490000  sd          $t1, 0x0($s2)
    ctx->pc = 0x318084u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 9));
    // 0x318088: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x318088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31808c: 0xfe480008  sd          $t0, 0x8($s2)
    ctx->pc = 0x31808cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 8));
    // 0x318090: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x318090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x318094: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x318094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x318098: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x318098u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x31809c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31809cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3180a0: 0x35110080  ori         $s1, $t0, 0x80
    ctx->pc = 0x3180a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x3180a4: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x3180a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x3180a8: 0x35090008  ori         $t1, $t0, 0x8
    ctx->pc = 0x3180a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x3180ac: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x3180acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x3180b0: 0x2410004d  addiu       $s0, $zero, 0x4D
    ctx->pc = 0x3180b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3180b4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3180b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3180b8: 0x2406037c  addiu       $a2, $zero, 0x37C
    ctx->pc = 0x3180b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x3180bc: 0xfe450000  sd          $a1, 0x0($s2)
    ctx->pc = 0x3180bcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 5));
    // 0x3180c0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3180c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3180c4: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x3180c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
    // 0x3180c8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x3180c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x3180cc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3180ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3180d0: 0x34a4c00a  ori         $a0, $a1, 0xC00A
    ctx->pc = 0x3180d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49162);
    // 0x3180d4: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x3180d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x3180d8: 0x867825  or          $t7, $a0, $a2
    ctx->pc = 0x3180d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3180dc: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3180dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3180e0: 0x3c0400df  lui         $a0, 0xDF
    ctx->pc = 0x3180e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)223 << 16));
    // 0x3180e4: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x3180e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x3180e8: 0x4583c  dsll32      $t3, $a0, 0
    ctx->pc = 0x3180e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3180ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3180ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3180f0: 0x3c047900  lui         $a0, 0x7900
    ctx->pc = 0x3180f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30976 << 16));
    // 0x3180f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3180f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3180f8: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x3180f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3180fc: 0x240d0316  addiu       $t5, $zero, 0x316
    ctx->pc = 0x3180fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x318100: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x318100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x318104: 0x34847000  ori         $a0, $a0, 0x7000
    ctx->pc = 0x318104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28672);
    // 0x318108: 0x240c0015  addiu       $t4, $zero, 0x15
    ctx->pc = 0x318108u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x31810c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x31810cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x318110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318114: 0xdc770020  ld          $s7, 0x20($v1)
    ctx->pc = 0x318114u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x318118: 0x70043b89  pcpyld      $a3, $zero, $a0
    ctx->pc = 0x318118u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x31811c: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x31811cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x318120: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x318120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318124: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x318124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x318128: 0x32f701ff  andi        $s7, $s7, 0x1FF
    ctx->pc = 0x318128u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)511);
    // 0x31812c: 0x3c030e09  lui         $v1, 0xE09
    ctx->pc = 0x31812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3593 << 16));
    // 0x318130: 0x17b978  dsll        $s7, $s7, 5
    ctx->pc = 0x318130u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 5);
    // 0x318134: 0x34652009  ori         $a1, $v1, 0x2009
    ctx->pc = 0x318134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8201);
    // 0x318138: 0x2f6b025  or          $s6, $s7, $s6
    ctx->pc = 0x318138u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 23) | GPR_U64(ctx, 22));
    // 0x31813c: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x31813cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x318140: 0xfe560000  sd          $s6, 0x0($s2)
    ctx->pc = 0x318140u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
    // 0x318144: 0x34649000  ori         $a0, $v1, 0x9000
    ctx->pc = 0x318144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x318148: 0xfe530008  sd          $s3, 0x8($s2)
    ctx->pc = 0x318148u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 19));
    // 0x31814c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x31814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x318150: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318154: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x318154u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x318158: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x318158u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x31815c: 0xfe500008  sd          $s0, 0x8($s2)
    ctx->pc = 0x31815cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 16));
    // 0x318160: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318164: 0xfe4f0000  sd          $t7, 0x0($s2)
    ctx->pc = 0x318164u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 15));
    // 0x318168: 0xfe4e0008  sd          $t6, 0x8($s2)
    ctx->pc = 0x318168u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 14));
    // 0x31816c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31816cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318170: 0xfe4d0000  sd          $t5, 0x0($s2)
    ctx->pc = 0x318170u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 13));
    // 0x318174: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x318174u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x318178: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31817c: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x31817cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x318180: 0xfe4c0008  sd          $t4, 0x8($s2)
    ctx->pc = 0x318180u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 12));
    // 0x318184: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x318184u;
    {
        const bool branch_taken_0x318184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318184u;
        // 0x318188: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318184) {
            ctx->pc = 0x3181F8u;
            goto label_3181f8;
        }
    }
    ctx->pc = 0x31818Cu;
    // 0x31818c: 0x0  nop
    ctx->pc = 0x31818cu;
    // NOP
label_318190:
    // 0x318190: 0x26180  sll         $t4, $v0, 6
    ctx->pc = 0x318190u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x318194: 0x258d003f  addiu       $t5, $t4, 0x3F
    ctx->pc = 0x318194u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 63));
    // 0x318198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31819c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x31819cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3181a0: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x3181a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x3181a4: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x3181a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x3181a8: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x3181a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x3181ac: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x3181acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x3181b0: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x3181b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x3181b4: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x3181b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x3181b8: 0xfe4c0000  sd          $t4, 0x0($s2)
    ctx->pc = 0x3181b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 12));
    // 0x3181bc: 0xfe4a0008  sd          $t2, 0x8($s2)
    ctx->pc = 0x3181bcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 10));
    // 0x3181c0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3181c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3181c4: 0xfe490000  sd          $t1, 0x0($s2)
    ctx->pc = 0x3181c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 9));
    // 0x3181c8: 0xfe480008  sd          $t0, 0x8($s2)
    ctx->pc = 0x3181c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 8));
    // 0x3181cc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3181ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3181d0: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x3181d0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x3181d4: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x3181d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x3181d8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3181d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3181dc: 0xfe450000  sd          $a1, 0x0($s2)
    ctx->pc = 0x3181dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 5));
    // 0x3181e0: 0xfe480008  sd          $t0, 0x8($s2)
    ctx->pc = 0x3181e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 8));
    // 0x3181e4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3181e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3181e8: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x3181e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x3181ec: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x3181ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x3181f0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3181f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3181f4: 0x0  nop
    ctx->pc = 0x3181f4u;
    // NOP
label_3181f8:
    // 0x3181f8: 0x2c4c0008  sltiu       $t4, $v0, 0x8
    ctx->pc = 0x3181f8u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3181fc: 0x1580ffe4  bnez        $t4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3181FCu;
    {
        const bool branch_taken_0x3181fc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x3181fc) {
            ctx->pc = 0x318190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318190;
        }
    }
    ctx->pc = 0x318204u;
    // 0x318204: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x318204u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x318208: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x318208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31820c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x31820cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x318210: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x318210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318214: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x318214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x318218: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x318218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31821c: 0x344300c0  ori         $v1, $v0, 0xC0
    ctx->pc = 0x31821cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x318220: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318224: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x318224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x318228: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x318228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x31822c: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x31822cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x318230: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x318230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x318234: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x318234u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x318238: 0x3444040b  ori         $a0, $v0, 0x40B
    ctx->pc = 0x318238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1035);
    // 0x31823c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31823cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318240: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x318240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x318244: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x318244u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x318248: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x318248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31824c: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x31824cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x318250: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x318250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x318254: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x318254u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F014u));
    // 0x318258: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31825c: 0xdc630040  ld          $v1, 0x40($v1)
    ctx->pc = 0x31825cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x318260: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x318260u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x318264: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x318264u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x318268: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x318268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31826c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31826cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318270: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x318270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x318274: 0x21e82  srl         $v1, $v0, 26
    ctx->pc = 0x318274u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 26));
    // 0x318278: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x318278u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x31827c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x31827cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x318280: 0x10660013  beq         $v1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x318280u;
    {
        const bool branch_taken_0x318280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x318284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318280u;
        // 0x318284: 0x3045000f  andi        $a1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318280) {
            ctx->pc = 0x3182D0u;
            goto label_3182d0;
        }
    }
    ctx->pc = 0x318288u;
    // 0x318288: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x318288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31828c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31828Cu;
    {
        const bool branch_taken_0x31828c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31828c) {
            ctx->pc = 0x3182A8u;
            goto label_3182a8;
        }
    }
    ctx->pc = 0x318294u;
    // 0x318294: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x318294u;
    {
        const bool branch_taken_0x318294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318294) {
            ctx->pc = 0x3182A8u;
            goto label_3182a8;
        }
    }
    ctx->pc = 0x31829Cu;
    // 0x31829c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31829Cu;
    {
        const bool branch_taken_0x31829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31829c) {
            ctx->pc = 0x318300u;
            goto label_318300;
        }
    }
    ctx->pc = 0x3182A4u;
    // 0x3182a4: 0x0  nop
    ctx->pc = 0x3182a4u;
    // NOP
label_3182a8:
    // 0x3182a8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x3182a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3182ac: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x3182acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3182b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3182B0u;
    {
        const bool branch_taken_0x3182b0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3182B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182B0u;
        // 0x3182b4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182b0) {
            ctx->pc = 0x3182C0u;
            goto label_3182c0;
        }
    }
    ctx->pc = 0x3182B8u;
    // 0x3182b8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3182b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3182bc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3182bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3182c0:
    // 0x3182c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3182c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3182c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3182C4u;
    {
        const bool branch_taken_0x3182c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3182C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182C4u;
        // 0x3182c8: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182c4) {
            ctx->pc = 0x318300u;
            goto label_318300;
        }
    }
    ctx->pc = 0x3182CCu;
    // 0x3182cc: 0x0  nop
    ctx->pc = 0x3182ccu;
    // NOP
label_3182d0:
    // 0x3182d0: 0x2441823  subu        $v1, $s2, $a0
    ctx->pc = 0x3182d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3182d4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3182D4u;
    {
        const bool branch_taken_0x3182d4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3182D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182D4u;
        // 0x3182d8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182d4) {
            ctx->pc = 0x3182E4u;
            goto label_3182e4;
        }
    }
    ctx->pc = 0x3182DCu;
    // 0x3182dc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3182dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3182e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3182e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3182e4:
    // 0x3182e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3182e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3182e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3182e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3182ec: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x3182ecu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3182f0: 0x0  nop
    ctx->pc = 0x3182f0u;
    // NOP
    // 0x3182f4: 0x0  nop
    ctx->pc = 0x3182f4u;
    // NOP
    // 0x3182f8: 0x1012  mflo        $v0
    ctx->pc = 0x3182f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3182fc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x3182fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_318300:
    // 0x318300: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x318300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x318304: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x318304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x318308: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x318308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31830c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x31830cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x318310: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x318310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x318314: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318314u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318318: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318318u;
    {
        const bool branch_taken_0x318318 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318318u;
        // 0x31831c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318318) {
            ctx->pc = 0x318328u;
            goto label_318328;
        }
    }
    ctx->pc = 0x318320u;
    // 0x318320: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318324: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318328:
    // 0x318328: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x318328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31832c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x31832cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x318330: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x318330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x318334: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x318334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x318338: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x318338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x31833c: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x31833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x318340: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318340u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318344: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318344u;
    {
        const bool branch_taken_0x318344 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318344u;
        // 0x318348: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318344) {
            ctx->pc = 0x318354u;
            goto label_318354;
        }
    }
    ctx->pc = 0x31834Cu;
    // 0x31834c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318350: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318350u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318354:
    // 0x318354: 0x8f838b28  lw          $v1, -0x74D8($gp)
    ctx->pc = 0x318354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x318358: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x318358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31835c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x318360: 0x641100ff  daddiu      $s1, $zero, 0xFF
    ctx->pc = 0x318360u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x318364: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x318364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x318368: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x318368u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31836c: 0x64170040  daddiu      $s7, $zero, 0x40
    ctx->pc = 0x31836cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x318370: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x318370u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318374: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x318374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318378: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x318378u;
    {
        const bool branch_taken_0x318378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318378u;
        // 0x31837c: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318378) {
            ctx->pc = 0x318790u;
            goto label_318790;
        }
    }
    ctx->pc = 0x318380u;
label_318380:
    // 0x318380: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x318380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x318384: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x318384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x318388: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x318388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31838c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318390: 0x146200fd  bne         $v1, $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x318390u;
    {
        const bool branch_taken_0x318390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x318390) {
            ctx->pc = 0x318788u;
            goto label_318788;
        }
    }
    ctx->pc = 0x318398u;
    // 0x318398: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x318398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x31839c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x31839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3183a0: 0x92770033  lbu         $s7, 0x33($s3)
    ctx->pc = 0x3183a0u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 51)));
    // 0x3183a4: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3183A4u;
    {
        const bool branch_taken_0x3183a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3183A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183A4u;
        // 0x3183a8: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183a4) {
            ctx->pc = 0x318428u;
            goto label_318428;
        }
    }
    ctx->pc = 0x3183ACu;
    // 0x3183ac: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x3183acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x3183b0: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x3183b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3183b4: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x3183b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3183b8: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3183b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3183bc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3183bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3183c0: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x3183c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3183c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3183c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3183c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3183c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3183cc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3183CCu;
    SET_GPR_U32(ctx, 31, 0x3183D4u);
    ctx->pc = 0x3183D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3183CCu;
    // 0x3183d0: 0x7c660000  sq          $a2, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3183CCu, 0x3183D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183D4u;
label_3183d4:
    // 0x3183d4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3183d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3183d8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3183d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3183dc: 0xc04d6e8  jal         func_135BA0
    ctx->pc = 0x3183DCu;
    SET_GPR_U32(ctx, 31, 0x3183E4u);
    ctx->pc = 0x3183E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3183DCu;
    // 0x3183e0: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BA0u, 0x3183DCu, 0x3183E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183E4u;
label_3183e4:
    // 0x3183e4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x3183e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x3183e8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3183e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x3183ec: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x3183ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x3183f0: 0xc04144e  jal         func_105138
    ctx->pc = 0x3183F0u;
    SET_GPR_U32(ctx, 31, 0x3183F8u);
    ctx->pc = 0x3183F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3183F0u;
    // 0x3183f4: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x3183F0u, 0x3183F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183F8u;
label_3183f8:
    // 0x3183f8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x3183f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x3183fc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3183fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x318400: 0x24a569a0  addiu       $a1, $a1, 0x69A0
    ctx->pc = 0x318400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    // 0x318404: 0xc04144e  jal         func_105138
    ctx->pc = 0x318404u;
    SET_GPR_U32(ctx, 31, 0x31840Cu);
    ctx->pc = 0x318408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318404u;
    // 0x318408: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x318404u, 0x31840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31840Cu;
label_31840c:
    // 0x31840c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31840cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x318410: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318414: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x318414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x318418: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x318418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x31841c: 0xc0c65ac  jal         func_3196B0
    ctx->pc = 0x31841Cu;
    SET_GPR_U32(ctx, 31, 0x318424u);
    ctx->pc = 0x318420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31841Cu;
    // 0x318420: 0x27a70190  addiu       $a3, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3196B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3196B0u, 0x31841Cu, 0x318424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318424u;
label_318424:
    // 0x318424: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x318424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318428:
    // 0x318428: 0x92620032  lbu         $v0, 0x32($s3)
    ctx->pc = 0x318428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 50)));
    // 0x31842c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x31842cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x318430: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318430u;
    {
        const bool branch_taken_0x318430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x318430) {
            ctx->pc = 0x318448u;
            goto label_318448;
        }
    }
    ctx->pc = 0x318438u;
    // 0x318438: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x318438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x31843c: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x31843cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x318440: 0x10620099  beq         $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x318440u;
    {
        const bool branch_taken_0x318440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x318440) {
            ctx->pc = 0x3186A8u;
            goto label_3186a8;
        }
    }
    ctx->pc = 0x318448u;
label_318448:
    // 0x318448: 0x92710032  lbu         $s1, 0x32($s3)
    ctx->pc = 0x318448u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 50)));
    // 0x31844c: 0x927e0030  lbu         $fp, 0x30($s3)
    ctx->pc = 0x31844cu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x318450: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x318450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x318454: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x318454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x318458: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x318458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31845c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x31845cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x318460: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x318460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x318464: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x318464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x318468: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x318468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x31846c: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x31846cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x318470: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318474: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x318474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x318478: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x318478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x31847c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x31847cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x318480: 0xaf928b2c  sw          $s2, -0x74D4($gp)
    ctx->pc = 0x318480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 18));
    // 0x318484: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318488: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x318488u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x31848c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x31848cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x318490: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x318490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x318494: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x318494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x318498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x318498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31849c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31849Cu;
    {
        const bool branch_taken_0x31849c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3184A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31849Cu;
        // 0x3184a0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31849c) {
            ctx->pc = 0x3184C0u;
            goto label_3184c0;
        }
    }
    ctx->pc = 0x3184A4u;
    // 0x3184a4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x3184a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x3184a8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3184a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3184ac: 0x3463020b  ori         $v1, $v1, 0x20B
    ctx->pc = 0x3184acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)523);
    // 0x3184b0: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x3184b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x3184b4: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3184b4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3184b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3184B8u;
    {
        const bool branch_taken_0x3184b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3184BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184B8u;
        // 0x3184bc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184b8) {
            ctx->pc = 0x3184D8u;
            goto label_3184d8;
        }
    }
    ctx->pc = 0x3184C0u;
label_3184c0:
    // 0x3184c0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3184c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3184c4: 0x3443020b  ori         $v1, $v0, 0x20B
    ctx->pc = 0x3184c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)523);
    // 0x3184c8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3184c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3184cc: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x3184ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x3184d0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3184d0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3184d4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3184d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3184d8:
    // 0x3184d8: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x3184d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x3184dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3184dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3184e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3184E0u;
    {
        const bool branch_taken_0x3184e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3184e0) {
            ctx->pc = 0x318528u;
            goto label_318528;
        }
    }
    ctx->pc = 0x3184E8u;
    // 0x3184e8: 0x92650032  lbu         $a1, 0x32($s3)
    ctx->pc = 0x3184e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 50)));
    // 0x3184ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3184ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3184f0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3184f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3184f4: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x3184f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3184f8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3184f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3184fc: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x3184fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x318500: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x318500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x318504: 0x802027  not         $a0, $a0
    ctx->pc = 0x318504u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x318508: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x318508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31850c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31850cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x318510: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x318510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x318514: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x318514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x318518: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x318518u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x31851c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x31851cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x318520: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x318520u;
    {
        const bool branch_taken_0x318520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318520u;
        // 0x318524: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318520) {
            ctx->pc = 0x318568u;
            goto label_318568;
        }
    }
    ctx->pc = 0x318528u;
label_318528:
    // 0x318528: 0x92650032  lbu         $a1, 0x32($s3)
    ctx->pc = 0x318528u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 50)));
    // 0x31852c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x31852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x318530: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x318530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x318534: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x318534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x318538: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x318538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x31853c: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x31853cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x318540: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x318540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x318544: 0x802027  not         $a0, $a0
    ctx->pc = 0x318544u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x318548: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x318548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31854c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31854cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x318550: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x318550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x318554: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x318554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x318558: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x318558u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x31855c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x31855cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x318560: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318564: 0x0  nop
    ctx->pc = 0x318564u;
    // NOP
label_318568:
    // 0x318568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31856c: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x31856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x318570: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x318570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318574: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x318574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x318578: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x318578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x31857c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31857cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x318580: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x318580u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x318584: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x318584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x318588: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x318588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31858c: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x31858cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x318590: 0x240300aa  addiu       $v1, $zero, 0xAA
    ctx->pc = 0x318590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x318594: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318598: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x318598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31859c: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x31859cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x3185a0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x3185a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3185a4: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x3185a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x3185a8: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x3185a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3185ac: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3185acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3185b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3185b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3185b4: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x3185b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x3185b8: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x3185b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x3185bc: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x3185bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3185c0: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3185C0u;
    {
        const bool branch_taken_0x3185c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3185C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185C0u;
        // 0x3185c4: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185c0) {
            ctx->pc = 0x318610u;
            goto label_318610;
        }
    }
    ctx->pc = 0x3185C8u;
    // 0x3185c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3185c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3185cc: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3185CCu;
    {
        const bool branch_taken_0x3185cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3185cc) {
            ctx->pc = 0x3185E8u;
            goto label_3185e8;
        }
    }
    ctx->pc = 0x3185D4u;
    // 0x3185d4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3185D4u;
    {
        const bool branch_taken_0x3185d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185d4) {
            ctx->pc = 0x3185E8u;
            goto label_3185e8;
        }
    }
    ctx->pc = 0x3185DCu;
    // 0x3185dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3185DCu;
    {
        const bool branch_taken_0x3185dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185dc) {
            ctx->pc = 0x318640u;
            goto label_318640;
        }
    }
    ctx->pc = 0x3185E4u;
    // 0x3185e4: 0x0  nop
    ctx->pc = 0x3185e4u;
    // NOP
label_3185e8:
    // 0x3185e8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x3185e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3185ec: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x3185ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3185f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3185F0u;
    {
        const bool branch_taken_0x3185f0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3185F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185F0u;
        // 0x3185f4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185f0) {
            ctx->pc = 0x318600u;
            goto label_318600;
        }
    }
    ctx->pc = 0x3185F8u;
    // 0x3185f8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3185f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3185fc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3185fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318600:
    // 0x318600: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318604: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x318604u;
    {
        const bool branch_taken_0x318604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318604u;
        // 0x318608: 0xa7a20100  sh          $v0, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318604) {
            ctx->pc = 0x318640u;
            goto label_318640;
        }
    }
    ctx->pc = 0x31860Cu;
    // 0x31860c: 0x0  nop
    ctx->pc = 0x31860cu;
    // NOP
label_318610:
    // 0x318610: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x318610u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x318614: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318614u;
    {
        const bool branch_taken_0x318614 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318614u;
        // 0x318618: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318614) {
            ctx->pc = 0x318624u;
            goto label_318624;
        }
    }
    ctx->pc = 0x31861Cu;
    // 0x31861c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318620: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318620u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318624:
    // 0x318624: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318628: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x318628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31862c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x31862cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x318630: 0x0  nop
    ctx->pc = 0x318630u;
    // NOP
    // 0x318634: 0x0  nop
    ctx->pc = 0x318634u;
    // NOP
    // 0x318638: 0x1012  mflo        $v0
    ctx->pc = 0x318638u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31863c: 0xa7a20100  sh          $v0, 0x100($sp)
    ctx->pc = 0x31863cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 2));
label_318640:
    // 0x318640: 0x97a20100  lhu         $v0, 0x100($sp)
    ctx->pc = 0x318640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x318644: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x318644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318648: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x318648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31864c: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x31864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318650: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x318650u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x318654: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x318654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x318658: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31865c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31865Cu;
    {
        const bool branch_taken_0x31865c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31865Cu;
        // 0x318660: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31865c) {
            ctx->pc = 0x31866Cu;
            goto label_31866c;
        }
    }
    ctx->pc = 0x318664u;
    // 0x318664: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318668: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31866c:
    // 0x31866c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x31866cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318670: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x318670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x318674: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x318674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x318678: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x318678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x31867c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x31867cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x318680: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x318680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x318684: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318684u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318688: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318688u;
    {
        const bool branch_taken_0x318688 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318688u;
        // 0x31868c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318688) {
            ctx->pc = 0x318698u;
            goto label_318698;
        }
    }
    ctx->pc = 0x318690u;
    // 0x318690: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318694: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318694u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318698:
    // 0x318698: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x318698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31869c: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x31869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3186a0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3186a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3186a4: 0x0  nop
    ctx->pc = 0x3186a4u;
    // NOP
label_3186a8:
    // 0x3186a8: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x3186a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3186ac: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3186ACu;
    {
        const bool branch_taken_0x3186ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186ACu;
        // 0x3186b0: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186ac) {
            ctx->pc = 0x3186C8u;
            goto label_3186c8;
        }
    }
    ctx->pc = 0x3186B4u;
    // 0x3186b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3186b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3186b8: 0xc0c663c  jal         func_3198F0
    ctx->pc = 0x3186B8u;
    SET_GPR_U32(ctx, 31, 0x3186C0u);
    ctx->pc = 0x3186BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3186B8u;
    // 0x3186bc: 0x2484bb10  addiu       $a0, $a0, -0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3198F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3198F0u, 0x3186B8u, 0x3186C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3186C0u;
label_3186c0:
    // 0x3186c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3186C0u;
    {
        const bool branch_taken_0x3186c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186C0u;
        // 0x3186c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186c0) {
            ctx->pc = 0x3186E0u;
            goto label_3186e0;
        }
    }
    ctx->pc = 0x3186C8u;
label_3186c8:
    // 0x3186c8: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x3186c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x3186cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3186ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3186d0: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x3186d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x3186d4: 0xc0c663c  jal         func_3198F0
    ctx->pc = 0x3186D4u;
    SET_GPR_U32(ctx, 31, 0x3186DCu);
    ctx->pc = 0x3186D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3186D4u;
    // 0x3186d8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3198F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3198F0u, 0x3186D4u, 0x3186DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3186DCu;
label_3186dc:
    // 0x3186dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3186dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3186e0:
    // 0x3186e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3186E0u;
    {
        const bool branch_taken_0x3186e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186E0u;
        // 0x3186e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186e0) {
            ctx->pc = 0x318770u;
            goto label_318770;
        }
    }
    ctx->pc = 0x3186E8u;
label_3186e8:
    // 0x3186e8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x3186e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3186ec: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x3186ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3186f0: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x3186f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x3186f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3186f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3186f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3186f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3186fc: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x3186fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x318700: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x318700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x318704: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x318704u;
    {
        const bool branch_taken_0x318704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318704) {
            ctx->pc = 0x318768u;
            goto label_318768;
        }
    }
    ctx->pc = 0x31870Cu;
    // 0x31870c: 0x16c0000c  bnez        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x31870Cu;
    {
        const bool branch_taken_0x31870c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x318710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31870Cu;
        // 0x318710: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31870c) {
            ctx->pc = 0x318740u;
            goto label_318740;
        }
    }
    ctx->pc = 0x318714u;
    // 0x318714: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318718: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x318718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x31871c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x31871cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318720: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x318720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x318724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318728: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x318728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31872c: 0xc0c6650  jal         func_319940
    ctx->pc = 0x31872Cu;
    SET_GPR_U32(ctx, 31, 0x318734u);
    ctx->pc = 0x318730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31872Cu;
    // 0x318730: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x319940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319940u, 0x31872Cu, 0x318734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318734u;
label_318734:
    // 0x318734: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x318734u;
    {
        const bool branch_taken_0x318734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318734u;
        // 0x318738: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318734) {
            ctx->pc = 0x318768u;
            goto label_318768;
        }
    }
    ctx->pc = 0x31873Cu;
    // 0x31873c: 0x0  nop
    ctx->pc = 0x31873cu;
    // NOP
label_318740:
    // 0x318740: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x318740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x318744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318748: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x318748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x31874c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x31874cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318750: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x318750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318754: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x318754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x318758: 0xc0c6650  jal         func_319940
    ctx->pc = 0x318758u;
    SET_GPR_U32(ctx, 31, 0x318760u);
    ctx->pc = 0x31875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318758u;
    // 0x31875c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319940u, 0x318758u, 0x318760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318760u;
label_318760:
    // 0x318760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x318760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318764: 0x0  nop
    ctx->pc = 0x318764u;
    // NOP
label_318768:
    // 0x318768: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x318768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31876c: 0x0  nop
    ctx->pc = 0x31876cu;
    // NOP
label_318770:
    // 0x318770: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x318770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x318774: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x318774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318778: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x318778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31877c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x31877Cu;
    {
        const bool branch_taken_0x31877c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31877c) {
            ctx->pc = 0x3186E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3186e8;
        }
    }
    ctx->pc = 0x318784u;
    // 0x318784: 0x0  nop
    ctx->pc = 0x318784u;
    // NOP
label_318788:
    // 0x318788: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x318788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31878c: 0x0  nop
    ctx->pc = 0x31878cu;
    // NOP
label_318790:
    // 0x318790: 0x8ea22000  lw          $v0, 0x2000($s5)
    ctx->pc = 0x318790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8192)));
    // 0x318794: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x318794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x318798: 0x1440fef9  bnez        $v0, . + 4 + (-0x107 << 2)
    ctx->pc = 0x318798u;
    {
        const bool branch_taken_0x318798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318798u;
        // 0x31879c: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318798) {
            ctx->pc = 0x318380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318380;
        }
    }
    ctx->pc = 0x3187A0u;
    // 0x3187a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3187a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3187a4: 0xc0c65d8  jal         func_319760
    ctx->pc = 0x3187A4u;
    SET_GPR_U32(ctx, 31, 0x3187ACu);
    ctx->pc = 0x3187A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3187A4u;
    // 0x3187a8: 0x2484bb10  addiu       $a0, $a0, -0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319760u, 0x3187A4u, 0x3187ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3187ACu;
label_3187ac:
    // 0x3187ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3187acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3187b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3187b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3187b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3187b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3187b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3187b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3187bc: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x3187bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x3187c0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3187c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3187c4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3187c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3187c8: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x3187c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x3187cc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3187ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3187d0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3187d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3187d4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3187d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x3187d8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3187d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x3187dc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3187dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x3187e0: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3187e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3187e4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3187e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3187e8: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x3187e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3187ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3187ECu;
    {
        const bool branch_taken_0x3187ec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3187F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187ECu;
        // 0x3187f0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3187ec) {
            ctx->pc = 0x3187FCu;
            goto label_3187fc;
        }
    }
    ctx->pc = 0x3187F4u;
    // 0x3187f4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3187f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3187f8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3187f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3187fc:
    // 0x3187fc: 0x8f888b28  lw          $t0, -0x74D8($gp)
    ctx->pc = 0x3187fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x318800: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x318800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318804: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x318804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x318808: 0x24047900  addiu       $a0, $zero, 0x7900
    ctx->pc = 0x318808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x31880c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x31880cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x318810: 0x7703c  dsll32      $t6, $a3, 0
    ctx->pc = 0x318810u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) << (32 + 0));
    // 0x318814: 0x24047000  addiu       $a0, $zero, 0x7000
    ctx->pc = 0x318814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x318818: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x318818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31881c: 0x856025  or          $t4, $a0, $a1
    ctx->pc = 0x31881cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x318820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318824: 0x3c043a00  lui         $a0, 0x3A00
    ctx->pc = 0x318824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14848 << 16));
    // 0x318828: 0x240d001a  addiu       $t5, $zero, 0x1A
    ctx->pc = 0x318828u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x31882c: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x31882cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x318830: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x318830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x318834: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x318834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x318838: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x318838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31883c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x31883cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x318840: 0x348400c0  ori         $a0, $a0, 0xC0
    ctx->pc = 0x318840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)192);
    // 0x318844: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x318844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x318848: 0x855825  or          $t3, $a0, $a1
    ctx->pc = 0x318848u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x31884c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x31884cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x318850: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x318850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x318854: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x318854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x318858: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x318858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31885c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31885cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318860: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x318860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x318864: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x318864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x318868: 0x3c0a0003  lui         $t2, 0x3
    ctx->pc = 0x318868u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x31886c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x31886cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x318870: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x318870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x318874: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x318874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x318878: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x318878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x31887c: 0xaf928b2c  sw          $s2, -0x74D4($gp)
    ctx->pc = 0x31887cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 18));
    // 0x318880: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x318880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x318884: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318888: 0x240f0700  addiu       $t7, $zero, 0x700
    ctx->pc = 0x318888u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x31888c: 0xfe4e0000  sd          $t6, 0x0($s2)
    ctx->pc = 0x31888cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 14));
    // 0x318890: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x318890u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x318894: 0xf703c  dsll32      $t6, $t7, 0
    ctx->pc = 0x318894u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << (32 + 0));
    // 0x318898: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x318898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x31889c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x31889cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x3188a0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3188a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3188a4: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x3188a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x3188a8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x3188a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x3188ac: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x3188acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x3188b0: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x3188b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x3188b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3188b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3188b8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3188b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3188bc: 0x3c0d2003  lui         $t5, 0x2003
    ctx->pc = 0x3188bcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8195 << 16));
    // 0x3188c0: 0xfe4c0000  sd          $t4, 0x0($s2)
    ctx->pc = 0x3188c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 12));
    // 0x3188c4: 0x35ada58e  ori         $t5, $t5, 0xA58E
    ctx->pc = 0x3188c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)42382);
    // 0x3188c8: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x3188c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x3188cc: 0xd603c  dsll32      $t4, $t5, 0
    ctx->pc = 0x3188ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3188d0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3188d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3188d4: 0x3c066422  lui         $a2, 0x6422
    ctx->pc = 0x3188d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25634 << 16));
    // 0x3188d8: 0xfe4b0000  sd          $t3, 0x0($s2)
    ctx->pc = 0x3188d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 11));
    // 0x3188dc: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x3188dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x3188e0: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x3188e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x3188e4: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x3188e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x3188e8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3188e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3188ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3188ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3188f0: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x3188f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x3188f4: 0x240b3fff  addiu       $t3, $zero, 0x3FFF
    ctx->pc = 0x3188f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x3188f8: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x3188f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x3188fc: 0xb503c  dsll32      $t2, $t3, 0
    ctx->pc = 0x3188fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) << (32 + 0));
    // 0x318900: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318904: 0x3c090208  lui         $t1, 0x208
    ctx->pc = 0x318904u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)520 << 16));
    // 0x318908: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x318908u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x31890c: 0x35290080  ori         $t1, $t1, 0x80
    ctx->pc = 0x31890cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)128);
    // 0x318910: 0xfe480008  sd          $t0, 0x8($s2)
    ctx->pc = 0x318910u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 8));
    // 0x318914: 0x12a5025  or          $t2, $t1, $t2
    ctx->pc = 0x318914u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x318918: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31891c: 0x2409004d  addiu       $t1, $zero, 0x4D
    ctx->pc = 0x31891cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x318920: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x318920u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x318924: 0x24080316  addiu       $t0, $zero, 0x316
    ctx->pc = 0x318924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x318928: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x318928u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
    // 0x31892c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31892cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318930: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318934: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x318934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x318938: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x318938u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x31893c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31893cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x318940: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x318940u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x318944: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x318944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x318948: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31894c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x31894cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x318950: 0xfe460000  sd          $a2, 0x0($s2)
    ctx->pc = 0x318950u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 6));
    // 0x318954: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x318954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x318958: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x318958u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x31895c: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x31895cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318960: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x318960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x318964: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318968: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x318968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31896c: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x31896cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x318970: 0x3c057900  lui         $a1, 0x7900
    ctx->pc = 0x318970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30976 << 16));
    // 0x318974: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x318974u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x318978: 0x34a57080  ori         $a1, $a1, 0x7080
    ctx->pc = 0x318978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28800);
    // 0x31897c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31897cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318980: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x318980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x318984: 0xfe480000  sd          $t0, 0x0($s2)
    ctx->pc = 0x318984u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 8));
    // 0x318988: 0x70055b89  pcpyld      $t3, $zero, $a1
    ctx->pc = 0x318988u;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x31898c: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x31898cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x318990: 0x3c051c09  lui         $a1, 0x1C09
    ctx->pc = 0x318990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7177 << 16));
    // 0x318994: 0x240a000d  addiu       $t2, $zero, 0xD
    ctx->pc = 0x318994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x318998: 0x34a92009  ori         $t1, $a1, 0x2009
    ctx->pc = 0x318998u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8201);
    // 0x31899c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31899cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3189a0: 0x3c059500  lui         $a1, 0x9500
    ctx->pc = 0x3189a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38144 << 16));
    // 0x3189a4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3189a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3189a8: 0x34a59080  ori         $a1, $a1, 0x9080
    ctx->pc = 0x3189a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36992);
    // 0x3189ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3189ACu;
    {
        const bool branch_taken_0x3189ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3189B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189ACu;
        // 0x3189b0: 0x70054389  pcpyld      $t0, $zero, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189ac) {
            ctx->pc = 0x318A20u;
            goto label_318a20;
        }
    }
    ctx->pc = 0x3189B4u;
    // 0x3189b4: 0x0  nop
    ctx->pc = 0x3189b4u;
    // NOP
label_3189b8:
    // 0x3189b8: 0x72940  sll         $a1, $a3, 5
    ctx->pc = 0x3189b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x3189bc: 0x24ad001f  addiu       $t5, $a1, 0x1F
    ctx->pc = 0x3189bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x3189c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3189c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3189c4: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x3189c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3189c8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3189c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3189cc: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x3189ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x3189d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3189d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3189d4: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x3189d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x3189d8: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x3189d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x3189dc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3189dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3189e0: 0xfe450000  sd          $a1, 0x0($s2)
    ctx->pc = 0x3189e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 5));
    // 0x3189e4: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x3189e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x3189e8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3189e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3189ec: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x3189ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x3189f0: 0xfe4c0008  sd          $t4, 0x8($s2)
    ctx->pc = 0x3189f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 12));
    // 0x3189f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3189f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3189f8: 0xfe4b0000  sd          $t3, 0x0($s2)
    ctx->pc = 0x3189f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 11));
    // 0x3189fc: 0xfe4a0008  sd          $t2, 0x8($s2)
    ctx->pc = 0x3189fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 10));
    // 0x318a00: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318a04: 0xfe490000  sd          $t1, 0x0($s2)
    ctx->pc = 0x318a04u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 9));
    // 0x318a08: 0xfe4c0008  sd          $t4, 0x8($s2)
    ctx->pc = 0x318a08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 12));
    // 0x318a0c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318a0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318a10: 0xfe480000  sd          $t0, 0x0($s2)
    ctx->pc = 0x318a10u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 8));
    // 0x318a14: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x318a14u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x318a18: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318a1c: 0x0  nop
    ctx->pc = 0x318a1cu;
    // NOP
label_318a20:
    // 0x318a20: 0x2ce50010  sltiu       $a1, $a3, 0x10
    ctx->pc = 0x318a20u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x318a24: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x318A24u;
    {
        const bool branch_taken_0x318a24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x318a24) {
            ctx->pc = 0x3189B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3189b8;
        }
    }
    ctx->pc = 0x318A2Cu;
    // 0x318a2c: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x318a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x318a30: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x318a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x318a34: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x318a34u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x318a38: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x318a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318a40: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318a40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318a44: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x318a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x318a48: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x318a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x318a4c: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x318a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x318a50: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x318a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x318a54: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x318A54u;
    {
        const bool branch_taken_0x318a54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x318A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A54u;
        // 0x318a58: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a54) {
            ctx->pc = 0x318AA0u;
            goto label_318aa0;
        }
    }
    ctx->pc = 0x318A5Cu;
    // 0x318a5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x318a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318a60: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318A60u;
    {
        const bool branch_taken_0x318a60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x318a60) {
            ctx->pc = 0x318A78u;
            goto label_318a78;
        }
    }
    ctx->pc = 0x318A68u;
    // 0x318a68: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x318A68u;
    {
        const bool branch_taken_0x318a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a68) {
            ctx->pc = 0x318A78u;
            goto label_318a78;
        }
    }
    ctx->pc = 0x318A70u;
    // 0x318a70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x318A70u;
    {
        const bool branch_taken_0x318a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a70) {
            ctx->pc = 0x318AD0u;
            goto label_318ad0;
        }
    }
    ctx->pc = 0x318A78u;
label_318a78:
    // 0x318a78: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x318a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318a7c: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318a80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318A80u;
    {
        const bool branch_taken_0x318a80 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A80u;
        // 0x318a84: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a80) {
            ctx->pc = 0x318A90u;
            goto label_318a90;
        }
    }
    ctx->pc = 0x318A88u;
    // 0x318a88: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318a8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318a8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318a90:
    // 0x318a90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318a94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x318A94u;
    {
        const bool branch_taken_0x318a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A94u;
        // 0x318a98: 0xa7a200f0  sh          $v0, 0xF0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a94) {
            ctx->pc = 0x318AD0u;
            goto label_318ad0;
        }
    }
    ctx->pc = 0x318A9Cu;
    // 0x318a9c: 0x0  nop
    ctx->pc = 0x318a9cu;
    // NOP
label_318aa0:
    // 0x318aa0: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x318aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x318aa4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318AA4u;
    {
        const bool branch_taken_0x318aa4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AA4u;
        // 0x318aa8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318aa4) {
            ctx->pc = 0x318AB4u;
            goto label_318ab4;
        }
    }
    ctx->pc = 0x318AACu;
    // 0x318aac: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318ab0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318ab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318ab4:
    // 0x318ab4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318ab8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x318ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x318abc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x318abcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x318ac0: 0x0  nop
    ctx->pc = 0x318ac0u;
    // NOP
    // 0x318ac4: 0x0  nop
    ctx->pc = 0x318ac4u;
    // NOP
    // 0x318ac8: 0x1012  mflo        $v0
    ctx->pc = 0x318ac8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x318acc: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x318accu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_318ad0:
    // 0x318ad0: 0x97a200f0  lhu         $v0, 0xF0($sp)
    ctx->pc = 0x318ad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x318ad4: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x318ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318ad8: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x318ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x318adc: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x318adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318ae0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x318ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x318ae4: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x318ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x318ae8: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318aec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318AECu;
    {
        const bool branch_taken_0x318aec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AECu;
        // 0x318af0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318aec) {
            ctx->pc = 0x318AFCu;
            goto label_318afc;
        }
    }
    ctx->pc = 0x318AF4u;
    // 0x318af4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318af8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318af8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318afc:
    // 0x318afc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x318afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318b00: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x318b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x318b04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x318b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x318b08: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x318b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x318b0c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x318b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x318b10: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x318b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x318b14: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318b18: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318B18u;
    {
        const bool branch_taken_0x318b18 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B18u;
        // 0x318b1c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b18) {
            ctx->pc = 0x318B28u;
            goto label_318b28;
        }
    }
    ctx->pc = 0x318B20u;
    // 0x318b20: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318b24: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318b24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318b28:
    // 0x318b28: 0x8f858b28  lw          $a1, -0x74D8($gp)
    ctx->pc = 0x318b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x318b2c: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x318b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318b30: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x318b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x318b34: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x318b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x318b38: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x318b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x318b3c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x318b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x318b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x318b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318b44: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x318b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x318b48: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x318b48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x318b4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x318B4Cu;
    {
        const bool branch_taken_0x318b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B4Cu;
        // 0x318b50: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b4c) {
            ctx->pc = 0x318B98u;
            goto label_318b98;
        }
    }
    ctx->pc = 0x318B54u;
    // 0x318b54: 0x0  nop
    ctx->pc = 0x318b54u;
    // NOP
label_318b58:
    // 0x318b58: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x318b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x318b5c: 0x3845000f  xori        $a1, $v0, 0xF
    ctx->pc = 0x318b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x318b60: 0x38e2000f  xori        $v0, $a3, 0xF
    ctx->pc = 0x318b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)15);
    // 0x318b64: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x318b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x318b68: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x318b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x318b6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318B6Cu;
    {
        const bool branch_taken_0x318b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B6Cu;
        // 0x318b70: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b6c) {
            ctx->pc = 0x318B80u;
            goto label_318b80;
        }
    }
    ctx->pc = 0x318B74u;
    // 0x318b74: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x318b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x318b78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x318B78u;
    {
        const bool branch_taken_0x318b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B78u;
        // 0x318b7c: 0xac440210  sw          $a0, 0x210($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b78) {
            ctx->pc = 0x318B90u;
            goto label_318b90;
        }
    }
    ctx->pc = 0x318B80u;
label_318b80:
    // 0x318b80: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x318b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x318b84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x318b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x318b88: 0xac430210  sw          $v1, 0x210($v0)
    ctx->pc = 0x318b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 3));
    // 0x318b8c: 0x0  nop
    ctx->pc = 0x318b8cu;
    // NOP
label_318b90:
    // 0x318b90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x318b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x318b94: 0x0  nop
    ctx->pc = 0x318b94u;
    // NOP
label_318b98:
    // 0x318b98: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x318b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x318b9c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x318B9Cu;
    {
        const bool branch_taken_0x318b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B9Cu;
        // 0x318ba0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b9c) {
            ctx->pc = 0x318B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318b58;
        }
    }
    ctx->pc = 0x318BA4u;
    // 0x318ba4: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x318ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x318ba8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x318ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x318bac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x318bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318bb0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x318bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x318bb4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x318bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x318bb8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x318bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x318bbc: 0x34421d2c  ori         $v0, $v0, 0x1D2C
    ctx->pc = 0x318bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7468);
    // 0x318bc0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x318bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x318bc4: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x318bc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318bc8: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x318bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x318bcc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x318bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x318bd0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318bd4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x318bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x318bd8: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x318bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x318bdc: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x318bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x318be0: 0xaf928b2c  sw          $s2, -0x74D4($gp)
    ctx->pc = 0x318be0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 18));
    // 0x318be4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x318be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x318be8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318bec: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x318becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x318bf0: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x318bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x318bf4: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x318bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x318bf8: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x318bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x318bfc: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x318bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x318c00: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x318c00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x318c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318c08: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318c0c: 0xfe480000  sd          $t0, 0x0($s2)
    ctx->pc = 0x318c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 8));
    // 0x318c10: 0xfe470008  sd          $a3, 0x8($s2)
    ctx->pc = 0x318c10u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 7));
    // 0x318c14: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318c18: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x318c18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x318c1c: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x318c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x318c20: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318c24: 0xfe450000  sd          $a1, 0x0($s2)
    ctx->pc = 0x318c24u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 5));
    // 0x318c28: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x318c28u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
    // 0x318c2c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318c30: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x318c30u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x318c34: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x318c34u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x318c38: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x318c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318c3c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318c40: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x318c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x318c44: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x318c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x318c48: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x318c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x318c4c: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x318c4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x318c50: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x318C50u;
    {
        const bool branch_taken_0x318c50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x318C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C50u;
        // 0x318c54: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c50) {
            ctx->pc = 0x318CA0u;
            goto label_318ca0;
        }
    }
    ctx->pc = 0x318C58u;
    // 0x318c58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x318c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318c5c: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x318C5Cu;
    {
        const bool branch_taken_0x318c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x318c5c) {
            ctx->pc = 0x318C78u;
            goto label_318c78;
        }
    }
    ctx->pc = 0x318C64u;
    // 0x318c64: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x318C64u;
    {
        const bool branch_taken_0x318c64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c64) {
            ctx->pc = 0x318C78u;
            goto label_318c78;
        }
    }
    ctx->pc = 0x318C6Cu;
    // 0x318c6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x318C6Cu;
    {
        const bool branch_taken_0x318c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c6c) {
            ctx->pc = 0x318CD0u;
            goto label_318cd0;
        }
    }
    ctx->pc = 0x318C74u;
    // 0x318c74: 0x0  nop
    ctx->pc = 0x318c74u;
    // NOP
label_318c78:
    // 0x318c78: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x318c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318c7c: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318c80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318C80u;
    {
        const bool branch_taken_0x318c80 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C80u;
        // 0x318c84: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c80) {
            ctx->pc = 0x318C90u;
            goto label_318c90;
        }
    }
    ctx->pc = 0x318C88u;
    // 0x318c88: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318c8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318c8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318c90:
    // 0x318c90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318c94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x318C94u;
    {
        const bool branch_taken_0x318c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C94u;
        // 0x318c98: 0xa7a200e0  sh          $v0, 0xE0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c94) {
            ctx->pc = 0x318CD0u;
            goto label_318cd0;
        }
    }
    ctx->pc = 0x318C9Cu;
    // 0x318c9c: 0x0  nop
    ctx->pc = 0x318c9cu;
    // NOP
label_318ca0:
    // 0x318ca0: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x318ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x318ca4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318CA4u;
    {
        const bool branch_taken_0x318ca4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CA4u;
        // 0x318ca8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ca4) {
            ctx->pc = 0x318CB4u;
            goto label_318cb4;
        }
    }
    ctx->pc = 0x318CACu;
    // 0x318cac: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318cb0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318cb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318cb4:
    // 0x318cb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318cb8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x318cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x318cbc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x318cbcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x318cc0: 0x0  nop
    ctx->pc = 0x318cc0u;
    // NOP
    // 0x318cc4: 0x0  nop
    ctx->pc = 0x318cc4u;
    // NOP
    // 0x318cc8: 0x1012  mflo        $v0
    ctx->pc = 0x318cc8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x318ccc: 0xa7a200e0  sh          $v0, 0xE0($sp)
    ctx->pc = 0x318cccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
label_318cd0:
    // 0x318cd0: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x318cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x318cd4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x318cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318cd8: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x318cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318cdc: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x318cdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x318ce0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x318ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x318ce4: 0x27a70210  addiu       $a3, $sp, 0x210
    ctx->pc = 0x318ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x318ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x318ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318cec: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x318cecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x318cf0: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x318cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x318cf4: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x318cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x318cf8: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x318cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x318cfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x318CFCu;
    {
        const bool branch_taken_0x318cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CFCu;
        // 0x318d00: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318cfc) {
            ctx->pc = 0x318D38u;
            goto label_318d38;
        }
    }
    ctx->pc = 0x318D04u;
    // 0x318d04: 0x0  nop
    ctx->pc = 0x318d04u;
    // NOP
label_318d08:
    // 0x318d08: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x318d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x318d0c: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x318d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x318d10: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x318d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x318d14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x318d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x318d18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x318d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x318d1c: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x318d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x318d20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x318d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318d24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x318d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x318d28: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x318d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x318d2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x318d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318d30: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x318d30u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x318d34: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_318d38:
    // 0x318d38: 0x2cc20040  sltiu       $v0, $a2, 0x40
    ctx->pc = 0x318d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x318d3c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x318D3Cu;
    {
        const bool branch_taken_0x318d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318d3c) {
            ctx->pc = 0x318D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318d08;
        }
    }
    ctx->pc = 0x318D44u;
    // 0x318d44: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x318d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318d4c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x318d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x318d50: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x318d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x318d54: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x318d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x318d58: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x318d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x318d5c: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x318D5Cu;
    {
        const bool branch_taken_0x318d5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x318D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D5Cu;
        // 0x318d60: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d5c) {
            ctx->pc = 0x318DA8u;
            goto label_318da8;
        }
    }
    ctx->pc = 0x318D64u;
    // 0x318d64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x318d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318d68: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318D68u;
    {
        const bool branch_taken_0x318d68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x318d68) {
            ctx->pc = 0x318D80u;
            goto label_318d80;
        }
    }
    ctx->pc = 0x318D70u;
    // 0x318d70: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x318D70u;
    {
        const bool branch_taken_0x318d70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d70) {
            ctx->pc = 0x318D80u;
            goto label_318d80;
        }
    }
    ctx->pc = 0x318D78u;
    // 0x318d78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x318D78u;
    {
        const bool branch_taken_0x318d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d78) {
            ctx->pc = 0x318DD8u;
            goto label_318dd8;
        }
    }
    ctx->pc = 0x318D80u;
label_318d80:
    // 0x318d80: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x318d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318d84: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318d88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318D88u;
    {
        const bool branch_taken_0x318d88 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D88u;
        // 0x318d8c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d88) {
            ctx->pc = 0x318D98u;
            goto label_318d98;
        }
    }
    ctx->pc = 0x318D90u;
    // 0x318d90: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318d94: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318d94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318d98:
    // 0x318d98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318d9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x318D9Cu;
    {
        const bool branch_taken_0x318d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D9Cu;
        // 0x318da0: 0xa7a200d0  sh          $v0, 0xD0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d9c) {
            ctx->pc = 0x318DD8u;
            goto label_318dd8;
        }
    }
    ctx->pc = 0x318DA4u;
    // 0x318da4: 0x0  nop
    ctx->pc = 0x318da4u;
    // NOP
label_318da8:
    // 0x318da8: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x318da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x318dac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318DACu;
    {
        const bool branch_taken_0x318dac = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DACu;
        // 0x318db0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318dac) {
            ctx->pc = 0x318DBCu;
            goto label_318dbc;
        }
    }
    ctx->pc = 0x318DB4u;
    // 0x318db4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318db8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318db8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318dbc:
    // 0x318dbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318dc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x318dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x318dc4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x318dc4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x318dc8: 0x0  nop
    ctx->pc = 0x318dc8u;
    // NOP
    // 0x318dcc: 0x0  nop
    ctx->pc = 0x318dccu;
    // NOP
    // 0x318dd0: 0x1012  mflo        $v0
    ctx->pc = 0x318dd0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x318dd4: 0xa7a200d0  sh          $v0, 0xD0($sp)
    ctx->pc = 0x318dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
label_318dd8:
    // 0x318dd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x318dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x318ddc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x318ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318de0: 0x8f878b30  lw          $a3, -0x74D0($gp)
    ctx->pc = 0x318de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318de4: 0x97a200d0  lhu         $v0, 0xD0($sp)
    ctx->pc = 0x318de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x318de8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x318de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x318dec: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x318decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x318df0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318df4: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x318df4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x318df8: 0xfe460000  sd          $a2, 0x0($s2)
    ctx->pc = 0x318df8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 6));
    // 0x318dfc: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x318dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x318e00: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x318e00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x318e04: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318e08: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x318e08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x318e0c: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x318e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
    // 0x318e10: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x318e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318e14: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318e14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318e18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x318e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x318e1c: 0x22682  srl         $a0, $v0, 26
    ctx->pc = 0x318e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 26));
    // 0x318e20: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x318e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x318e24: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x318e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x318e28: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x318E28u;
    {
        const bool branch_taken_0x318e28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x318E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E28u;
        // 0x318e2c: 0x3044000f  andi        $a0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e28) {
            ctx->pc = 0x318E78u;
            goto label_318e78;
        }
    }
    ctx->pc = 0x318E30u;
    // 0x318e30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x318e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318e34: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x318E34u;
    {
        const bool branch_taken_0x318e34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x318e34) {
            ctx->pc = 0x318E50u;
            goto label_318e50;
        }
    }
    ctx->pc = 0x318E3Cu;
    // 0x318e3c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x318E3Cu;
    {
        const bool branch_taken_0x318e3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e3c) {
            ctx->pc = 0x318E50u;
            goto label_318e50;
        }
    }
    ctx->pc = 0x318E44u;
    // 0x318e44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x318E44u;
    {
        const bool branch_taken_0x318e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e44) {
            ctx->pc = 0x318EA8u;
            goto label_318ea8;
        }
    }
    ctx->pc = 0x318E4Cu;
    // 0x318e4c: 0x0  nop
    ctx->pc = 0x318e4cu;
    // NOP
label_318e50:
    // 0x318e50: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x318e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318e54: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318e58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318E58u;
    {
        const bool branch_taken_0x318e58 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E58u;
        // 0x318e5c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e58) {
            ctx->pc = 0x318E68u;
            goto label_318e68;
        }
    }
    ctx->pc = 0x318E60u;
    // 0x318e60: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318e64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318e64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318e68:
    // 0x318e68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318e6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x318E6Cu;
    {
        const bool branch_taken_0x318e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E6Cu;
        // 0x318e70: 0xa7a200c0  sh          $v0, 0xC0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e6c) {
            ctx->pc = 0x318EA8u;
            goto label_318ea8;
        }
    }
    ctx->pc = 0x318E74u;
    // 0x318e74: 0x0  nop
    ctx->pc = 0x318e74u;
    // NOP
label_318e78:
    // 0x318e78: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x318e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x318e7c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318E7Cu;
    {
        const bool branch_taken_0x318e7c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E7Cu;
        // 0x318e80: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e7c) {
            ctx->pc = 0x318E8Cu;
            goto label_318e8c;
        }
    }
    ctx->pc = 0x318E84u;
    // 0x318e84: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318e88: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318e8c:
    // 0x318e8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318e90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x318e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x318e94: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x318e94u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x318e98: 0x0  nop
    ctx->pc = 0x318e98u;
    // NOP
    // 0x318e9c: 0x0  nop
    ctx->pc = 0x318e9cu;
    // NOP
    // 0x318ea0: 0x1012  mflo        $v0
    ctx->pc = 0x318ea0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x318ea4: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x318ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
label_318ea8:
    // 0x318ea8: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x318ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x318eac: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x318eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318eb0: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x318eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x318eb4: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x318eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x318eb8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x318eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x318ebc: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x318ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x318ec0: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318ec4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318EC4u;
    {
        const bool branch_taken_0x318ec4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318EC4u;
        // 0x318ec8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ec4) {
            ctx->pc = 0x318ED4u;
            goto label_318ed4;
        }
    }
    ctx->pc = 0x318ECCu;
    // 0x318ecc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318ed0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318ed0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318ed4:
    // 0x318ed4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x318ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318ed8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x318ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x318edc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x318edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x318ee0: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x318ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x318ee4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x318ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x318ee8: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x318ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x318eec: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x318eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x318ef0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318EF0u;
    {
        const bool branch_taken_0x318ef0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318EF0u;
        // 0x318ef4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ef0) {
            ctx->pc = 0x318F00u;
            goto label_318f00;
        }
    }
    ctx->pc = 0x318EF8u;
    // 0x318ef8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x318ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x318efc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x318efcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_318f00:
    // 0x318f00: 0x8f898b28  lw          $t1, -0x74D8($gp)
    ctx->pc = 0x318f00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x318f04: 0x244affff  addiu       $t2, $v0, -0x1
    ctx->pc = 0x318f04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318f08: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x318f08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x318f0c: 0x3c022003  lui         $v0, 0x2003
    ctx->pc = 0x318f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8195 << 16));
    // 0x318f10: 0x3443a58e  ori         $v1, $v0, 0xA58E
    ctx->pc = 0x318f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42382);
    // 0x318f14: 0x3c158700  lui         $s5, 0x8700
    ctx->pc = 0x318f14u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34560 << 16));
    // 0x318f18: 0x3c0225b2  lui         $v0, 0x25B2
    ctx->pc = 0x318f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9650 << 16));
    // 0x318f1c: 0x36b59000  ori         $s5, $s5, 0x9000
    ctx->pc = 0x318f1cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)36864);
    // 0x318f20: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x318f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x318f24: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x318f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x318f28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x318f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x318f2c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x318f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x318f30: 0xa52a0000  sh          $t2, 0x0($t1)
    ctx->pc = 0x318f30u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x318f34: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x318f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x318f38: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x318f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x318f3c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x318f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x318f40: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x318f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x318f44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x318f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318f48: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x318f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x318f4c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x318f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x318f50: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x318f50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x318f54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x318f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x318f58: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x318f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x318f5c: 0x70028b89  pcpyld      $s1, $zero, $v0
    ctx->pc = 0x318f5cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x318f60: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318f60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318f64: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x318f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x318f68: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x318f68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x318f6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x318f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318f70: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x318f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x318f74: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x318f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x318f78: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x318f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x318f7c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x318f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x318f80: 0xaf928b2c  sw          $s2, -0x74D4($gp)
    ctx->pc = 0x318f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 18));
    // 0x318f84: 0x437825  or          $t7, $v0, $v1
    ctx->pc = 0x318f84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x318f88: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318f8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x318f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x318f90: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x318f90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x318f94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x318f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318f98: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x318f98u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x318f9c: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x318f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x318fa0: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x318fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x318fa4: 0x435025  or          $t2, $v0, $v1
    ctx->pc = 0x318fa4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x318fa8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318fac: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x318facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x318fb0: 0xfe450000  sd          $a1, 0x0($s2)
    ctx->pc = 0x318fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 5));
    // 0x318fb4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x318fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x318fb8: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x318fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
    // 0x318fbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x318fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x318fc0: 0x8c24f014  lw          $a0, -0xFEC($at)
    ctx->pc = 0x318fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F014u));
    // 0x318fc4: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x318fc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318fc8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x318fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x318fcc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x318fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x318fd0: 0x34460010  ori         $a2, $v0, 0x10
    ctx->pc = 0x318fd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x318fd4: 0x2410004d  addiu       $s0, $zero, 0x4D
    ctx->pc = 0x318fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x318fd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x318fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x318fdc: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x318fdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x318fe0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x318fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x318fe4: 0x240d0356  addiu       $t5, $zero, 0x356
    ctx->pc = 0x318fe4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x318fe8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x318fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x318fec: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x318fecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x318ff0: 0xdc930020  ld          $s3, 0x20($a0)
    ctx->pc = 0x318ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x318ff4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x318ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x318ff8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x318ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x318ffc: 0x240b0015  addiu       $t3, $zero, 0x15
    ctx->pc = 0x318ffcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x319000: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x319000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x319004: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x319004u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319008: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x319008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x31900c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x319010: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x319010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x319014: 0x7015ab89  pcpyld      $s5, $zero, $s5
    ctx->pc = 0x319014u;
    SET_GPR_VEC(ctx, 21, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 21)));
    // 0x319018: 0x327601ff  andi        $s6, $s3, 0x1FF
    ctx->pc = 0x319018u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)511);
    // 0x31901c: 0x2d18825  or          $s1, $s6, $s1
    ctx->pc = 0x31901cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) | GPR_U64(ctx, 17));
    // 0x319020: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x319020u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x319024: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x319024u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x319028: 0x70022389  pcpyld      $a0, $zero, $v0
    ctx->pc = 0x319028u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x31902c: 0xfe500008  sd          $s0, 0x8($s2)
    ctx->pc = 0x31902cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 16));
    // 0x319030: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x319030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x319034: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319038: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x319038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x31903c: 0xfe4f0000  sd          $t7, 0x0($s2)
    ctx->pc = 0x31903cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 15));
    // 0x319040: 0xfe4e0008  sd          $t6, 0x8($s2)
    ctx->pc = 0x319040u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 14));
    // 0x319044: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319048: 0xfe4d0000  sd          $t5, 0x0($s2)
    ctx->pc = 0x319048u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 13));
    // 0x31904c: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x31904cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x319050: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319054: 0xfe4c0000  sd          $t4, 0x0($s2)
    ctx->pc = 0x319054u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 12));
    // 0x319058: 0xfe4b0008  sd          $t3, 0x8($s2)
    ctx->pc = 0x319058u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 11));
    // 0x31905c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31905cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319060: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x319060u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x319064: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x319064u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x319068: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x319068u;
    {
        const bool branch_taken_0x319068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319068u;
        // 0x31906c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319068) {
            ctx->pc = 0x3190D8u;
            goto label_3190d8;
        }
    }
    ctx->pc = 0x319070u;
label_319070:
    // 0x319070: 0x144940  sll         $t1, $s4, 5
    ctx->pc = 0x319070u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x319074: 0x252a001f  addiu       $t2, $t1, 0x1F
    ctx->pc = 0x319074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
    // 0x319078: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x319078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31907c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x31907cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x319080: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x319080u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x319084: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x319084u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x319088: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x319088u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x31908c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x31908cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x319090: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x319090u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x319094: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x319094u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x319098: 0xfe490000  sd          $t1, 0x0($s2)
    ctx->pc = 0x319098u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 9));
    // 0x31909c: 0xfe470008  sd          $a3, 0x8($s2)
    ctx->pc = 0x31909cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 7));
    // 0x3190a0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3190a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3190a4: 0xfe460000  sd          $a2, 0x0($s2)
    ctx->pc = 0x3190a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 6));
    // 0x3190a8: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x3190a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x3190ac: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3190acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3190b0: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x3190b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x3190b4: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x3190b4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x3190b8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3190b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3190bc: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x3190bcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x3190c0: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x3190c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x3190c4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3190c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3190c8: 0xfe550000  sd          $s5, 0x0($s2)
    ctx->pc = 0x3190c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 21));
    // 0x3190cc: 0xfe530008  sd          $s3, 0x8($s2)
    ctx->pc = 0x3190ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 19));
    // 0x3190d0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3190d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3190d4: 0x0  nop
    ctx->pc = 0x3190d4u;
    // NOP
label_3190d8:
    // 0x3190d8: 0x2e890010  sltiu       $t1, $s4, 0x10
    ctx->pc = 0x3190d8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3190dc: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3190DCu;
    {
        const bool branch_taken_0x3190dc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3190dc) {
            ctx->pc = 0x319070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319070;
        }
    }
    ctx->pc = 0x3190E4u;
    // 0x3190e4: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x3190e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x3190e8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3190e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3190ec: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3190ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3190f0: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x3190f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3190f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3190f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3190f8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3190f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3190fc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3190fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x319100: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x319100u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x319104: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x319104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x319108: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x319108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x31910c: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31910Cu;
    {
        const bool branch_taken_0x31910c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x319110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31910Cu;
        // 0x319110: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31910c) {
            ctx->pc = 0x319158u;
            goto label_319158;
        }
    }
    ctx->pc = 0x319114u;
    // 0x319114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x319114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x319118: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319118u;
    {
        const bool branch_taken_0x319118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x319118) {
            ctx->pc = 0x319130u;
            goto label_319130;
        }
    }
    ctx->pc = 0x319120u;
    // 0x319120: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x319120u;
    {
        const bool branch_taken_0x319120 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x319120) {
            ctx->pc = 0x319130u;
            goto label_319130;
        }
    }
    ctx->pc = 0x319128u;
    // 0x319128: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x319128u;
    {
        const bool branch_taken_0x319128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319128) {
            ctx->pc = 0x319188u;
            goto label_319188;
        }
    }
    ctx->pc = 0x319130u;
label_319130:
    // 0x319130: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x319130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x319134: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x319134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x319138: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319138u;
    {
        const bool branch_taken_0x319138 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319138u;
        // 0x31913c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319138) {
            ctx->pc = 0x319148u;
            goto label_319148;
        }
    }
    ctx->pc = 0x319140u;
    // 0x319140: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x319140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x319144: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x319144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_319148:
    // 0x319148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x319148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31914c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31914Cu;
    {
        const bool branch_taken_0x31914c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31914Cu;
        // 0x319150: 0xa7a200b0  sh          $v0, 0xB0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31914c) {
            ctx->pc = 0x319188u;
            goto label_319188;
        }
    }
    ctx->pc = 0x319154u;
    // 0x319154: 0x0  nop
    ctx->pc = 0x319154u;
    // NOP
label_319158:
    // 0x319158: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x319158u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x31915c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31915Cu;
    {
        const bool branch_taken_0x31915c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x319160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31915Cu;
        // 0x319160: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31915c) {
            ctx->pc = 0x31916Cu;
            goto label_31916c;
        }
    }
    ctx->pc = 0x319164u;
    // 0x319164: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x319164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x319168: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x319168u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31916c:
    // 0x31916c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x319170: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x319170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x319174: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x319174u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x319178: 0x0  nop
    ctx->pc = 0x319178u;
    // NOP
    // 0x31917c: 0x0  nop
    ctx->pc = 0x31917cu;
    // NOP
    // 0x319180: 0x1012  mflo        $v0
    ctx->pc = 0x319180u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x319184: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x319184u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
label_319188:
    // 0x319188: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x319188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31918c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x31918cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319190: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x319190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x319194: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x319194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x319198: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x319198u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31919c: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x31919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x3191a0: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x3191a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3191a4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3191A4u;
    {
        const bool branch_taken_0x3191a4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3191A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191A4u;
        // 0x3191a8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191a4) {
            ctx->pc = 0x3191B4u;
            goto label_3191b4;
        }
    }
    ctx->pc = 0x3191ACu;
    // 0x3191ac: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3191acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3191b0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3191b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3191b4:
    // 0x3191b4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3191b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3191b8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3191b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x3191bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3191bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3191c0: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x3191c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x3191c4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3191c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x3191c8: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3191c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3191cc: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x3191ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3191d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3191D0u;
    {
        const bool branch_taken_0x3191d0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3191D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191D0u;
        // 0x3191d4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191d0) {
            ctx->pc = 0x3191E0u;
            goto label_3191e0;
        }
    }
    ctx->pc = 0x3191D8u;
    // 0x3191d8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3191d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3191dc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3191dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3191e0:
    // 0x3191e0: 0x8f858b28  lw          $a1, -0x74D8($gp)
    ctx->pc = 0x3191e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3191e4: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x3191e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3191e8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3191e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3191ec: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3191ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x3191f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3191f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3191f4: 0x4883c  dsll32      $s1, $a0, 0
    ctx->pc = 0x3191f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3191f8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3191f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3191fc: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x3191fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x319200: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x319200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x319204: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x319204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x319208: 0x70027b89  pcpyld      $t7, $zero, $v0
    ctx->pc = 0x319208u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x31920c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x31920cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x319210: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x319210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x319214: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x319214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x319218: 0x344d00c0  ori         $t5, $v0, 0xC0
    ctx->pc = 0x319218u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x31921c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x31921cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x319220: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x319220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x319224: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x319224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x319228: 0x240e004c  addiu       $t6, $zero, 0x4C
    ctx->pc = 0x319228u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x31922c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x31922cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x319230: 0x240c004e  addiu       $t4, $zero, 0x4E
    ctx->pc = 0x319230u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x319234: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x319234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x319238: 0x344b17fd  ori         $t3, $v0, 0x17FD
    ctx->pc = 0x319238u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x31923c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31923cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319240: 0x3446020b  ori         $a2, $v0, 0x20B
    ctx->pc = 0x319240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)523);
    // 0x319244: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x319244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x319248: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x319248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x31924c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x31924cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x319250: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x319250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x319254: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x319254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x319258: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x319258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x31925c: 0xaf928b2c  sw          $s2, -0x74D4($gp)
    ctx->pc = 0x31925cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 18));
    // 0x319260: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x319260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x319264: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319268: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x319268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x31926c: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x31926cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x319270: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x319270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x319274: 0xfe500008  sd          $s0, 0x8($s2)
    ctx->pc = 0x319274u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 16));
    // 0x319278: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x319278u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31927c: 0x8c30f014  lw          $s0, -0xFEC($at)
    ctx->pc = 0x31927cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x319280: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x319280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x319284: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x319284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x319288: 0x51b025  or          $s6, $v0, $s1
    ctx->pc = 0x319288u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x31928c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31928cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319290: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x319290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x319294: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x319294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x319298: 0x24150041  addiu       $s5, $zero, 0x41
    ctx->pc = 0x319298u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x31929c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3192a0: 0x24140046  addiu       $s4, $zero, 0x46
    ctx->pc = 0x3192a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x3192a4: 0x24130061  addiu       $s3, $zero, 0x61
    ctx->pc = 0x3192a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3192a8: 0x24110015  addiu       $s1, $zero, 0x15
    ctx->pc = 0x3192a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3192ac: 0xde100020  ld          $s0, 0x20($s0)
    ctx->pc = 0x3192acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3192b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3192b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3192b4: 0x321001ff  andi        $s0, $s0, 0x1FF
    ctx->pc = 0x3192b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)511);
    // 0x3192b8: 0x20f7825  or          $t7, $s0, $t7
    ctx->pc = 0x3192b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) | GPR_U64(ctx, 15));
    // 0x3192bc: 0xfe4f0000  sd          $t7, 0x0($s2)
    ctx->pc = 0x3192bcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 15));
    // 0x3192c0: 0xfe4e0008  sd          $t6, 0x8($s2)
    ctx->pc = 0x3192c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 14));
    // 0x3192c4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3192c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3192c8: 0xfe4d0000  sd          $t5, 0x0($s2)
    ctx->pc = 0x3192c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 13));
    // 0x3192cc: 0xfe4c0008  sd          $t4, 0x8($s2)
    ctx->pc = 0x3192ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 12));
    // 0x3192d0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3192d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3192d4: 0xfe4b0000  sd          $t3, 0x0($s2)
    ctx->pc = 0x3192d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 11));
    // 0x3192d8: 0xfe4a0008  sd          $t2, 0x8($s2)
    ctx->pc = 0x3192d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 10));
    // 0x3192dc: 0x8c2af014  lw          $t2, -0xFEC($at)
    ctx->pc = 0x3192dcu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F014u));
    // 0x3192e0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3192e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3192e4: 0xdd4a0040  ld          $t2, 0x40($t2)
    ctx->pc = 0x3192e4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x3192e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3192e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3192ec: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x3192ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x3192f0: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x3192f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x3192f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3192f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3192f8: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x3192f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x3192fc: 0xfe480008  sd          $t0, 0x8($s2)
    ctx->pc = 0x3192fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 8));
    // 0x319300: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319304: 0xfe4d0000  sd          $t5, 0x0($s2)
    ctx->pc = 0x319304u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 13));
    // 0x319308: 0xfe470008  sd          $a3, 0x8($s2)
    ctx->pc = 0x319308u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 7));
    // 0x31930c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31930cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319310: 0xfe460000  sd          $a2, 0x0($s2)
    ctx->pc = 0x319310u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 6));
    // 0x319314: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x319314u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x319318: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31931c: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x31931cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x319320: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x319320u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
    // 0x319324: 0x8c24f014  lw          $a0, -0xFEC($at)
    ctx->pc = 0x319324u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F014u));
    // 0x319328: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31932c: 0xdc840020  ld          $a0, 0x20($a0)
    ctx->pc = 0x31932cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x319330: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x319330u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x319334: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x319334u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x319338: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31933c: 0xfe560000  sd          $s6, 0x0($s2)
    ctx->pc = 0x31933cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
    // 0x319340: 0xfe550008  sd          $s5, 0x8($s2)
    ctx->pc = 0x319340u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 21));
    // 0x319344: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319348: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x319348u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x31934c: 0xfe540008  sd          $s4, 0x8($s2)
    ctx->pc = 0x31934cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 20));
    // 0x319350: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319354: 0xfe530000  sd          $s3, 0x0($s2)
    ctx->pc = 0x319354u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 19));
    // 0x319358: 0xfe510008  sd          $s1, 0x8($s2)
    ctx->pc = 0x319358u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 17));
    // 0x31935c: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x31935cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x319360: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x319364: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x319364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x319368: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x319368u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x31936c: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x31936cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x319370: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x319370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x319374: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x319374u;
    {
        const bool branch_taken_0x319374 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x319378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319374u;
        // 0x319378: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319374) {
            ctx->pc = 0x3193C0u;
            goto label_3193c0;
        }
    }
    ctx->pc = 0x31937Cu;
    // 0x31937c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x319380: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319380u;
    {
        const bool branch_taken_0x319380 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x319380) {
            ctx->pc = 0x319398u;
            goto label_319398;
        }
    }
    ctx->pc = 0x319388u;
    // 0x319388: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x319388u;
    {
        const bool branch_taken_0x319388 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x319388) {
            ctx->pc = 0x319398u;
            goto label_319398;
        }
    }
    ctx->pc = 0x319390u;
    // 0x319390: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x319390u;
    {
        const bool branch_taken_0x319390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319390) {
            ctx->pc = 0x3193F0u;
            goto label_3193f0;
        }
    }
    ctx->pc = 0x319398u;
label_319398:
    // 0x319398: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x319398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31939c: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x31939cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3193a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3193A0u;
    {
        const bool branch_taken_0x3193a0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3193A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193A0u;
        // 0x3193a4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193a0) {
            ctx->pc = 0x3193B0u;
            goto label_3193b0;
        }
    }
    ctx->pc = 0x3193A8u;
    // 0x3193a8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3193a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3193ac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3193acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3193b0:
    // 0x3193b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3193b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3193b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3193B4u;
    {
        const bool branch_taken_0x3193b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3193B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193B4u;
        // 0x3193b8: 0xa7a200a0  sh          $v0, 0xA0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193b4) {
            ctx->pc = 0x3193F0u;
            goto label_3193f0;
        }
    }
    ctx->pc = 0x3193BCu;
    // 0x3193bc: 0x0  nop
    ctx->pc = 0x3193bcu;
    // NOP
label_3193c0:
    // 0x3193c0: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x3193c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3193c4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3193C4u;
    {
        const bool branch_taken_0x3193c4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3193C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193C4u;
        // 0x3193c8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193c4) {
            ctx->pc = 0x3193D4u;
            goto label_3193d4;
        }
    }
    ctx->pc = 0x3193CCu;
    // 0x3193cc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3193ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3193d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3193d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3193d4:
    // 0x3193d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3193d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3193d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3193d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3193dc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x3193dcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3193e0: 0x0  nop
    ctx->pc = 0x3193e0u;
    // NOP
    // 0x3193e4: 0x0  nop
    ctx->pc = 0x3193e4u;
    // NOP
    // 0x3193e8: 0x1012  mflo        $v0
    ctx->pc = 0x3193e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3193ec: 0xa7a200a0  sh          $v0, 0xA0($sp)
    ctx->pc = 0x3193ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
label_3193f0:
    // 0x3193f0: 0x97a200a0  lhu         $v0, 0xA0($sp)
    ctx->pc = 0x3193f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3193f4: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x3193f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3193f8: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3193f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3193fc: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x3193fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x319400: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x319400u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x319404: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x319404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x319408: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x319408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31940c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31940Cu;
    {
        const bool branch_taken_0x31940c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x319410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31940Cu;
        // 0x319410: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31940c) {
            ctx->pc = 0x31941Cu;
            goto label_31941c;
        }
    }
    ctx->pc = 0x319414u;
    // 0x319414: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x319414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x319418: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x319418u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31941c:
    // 0x31941c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x31941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x319420: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x319420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x319424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x319424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x319428: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x319428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x31942c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x31942cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x319430: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x319430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x319434: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x319434u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x319438: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319438u;
    {
        const bool branch_taken_0x319438 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319438u;
        // 0x31943c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319438) {
            ctx->pc = 0x319448u;
            goto label_319448;
        }
    }
    ctx->pc = 0x319440u;
    // 0x319440: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x319440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x319444: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x319444u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_319448:
    // 0x319448: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x319448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x31944c: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x31944cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x319450: 0x8f888b28  lw          $t0, -0x74D8($gp)
    ctx->pc = 0x319450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x319454: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x319454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x319458: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x319458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31945c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31945cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319460: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x319460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x319464: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x319464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x319468: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x319468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x31946c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31946cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x319470: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x319470u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x319474: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x319474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x319478: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x319478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x31947c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x31947cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x319480: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x319480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x319484: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x319484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x319488: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x319488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31948c: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x31948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x319490: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x319490u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x319494: 0xc061c60  jal         func_187180
    ctx->pc = 0x319494u;
    SET_GPR_U32(ctx, 31, 0x31949Cu);
    ctx->pc = 0x319498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319494u;
    // 0x319498: 0xac32fc90  sw          $s2, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x319494u, 0x31949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31949Cu;
label_31949c:
    // 0x31949c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3194a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3194a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3194a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3194a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3194a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3194a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3194ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3194acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3194b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3194b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3194b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3194b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3194b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3194b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3194bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3194bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3194c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3194c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3194c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3194C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3194C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194C4u;
        // 0x3194c8: 0x27bd0690  addiu       $sp, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3194C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3194CCu;
}
