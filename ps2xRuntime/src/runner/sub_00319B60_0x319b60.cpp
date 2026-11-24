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

// Function: sub_00319B60
// Address: 0x319b60 - 0x319d74
void sub_00319B60_0x319b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319B60_0x319b60");
#endif

    ctx->pc = 0x319b60u;

    // 0x319b60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x319b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x319b64: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x319b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x319b68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x319b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x319b6c: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x319b6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319b70: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x319b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x319b74: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x319b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x319b78: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x319b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x319b7c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x319b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x319b80: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x319b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x319b84: 0x24ab0010  addiu       $t3, $a1, 0x10
    ctx->pc = 0x319b84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319b88: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x319b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x319b8c: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x319b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x319b90: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x319b90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x319b94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x319b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319b98: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x319b98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x319b9c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x319b9cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x319ba0: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x319ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x319ba4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x319ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319ba8: 0xaf8b8b2c  sw          $t3, -0x74D4($gp)
    ctx->pc = 0x319ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 11));
    // 0x319bac: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x319bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x319bb0: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x319bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x319bb4: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x319bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x319bb8: 0x24aa0010  addiu       $t2, $a1, 0x10
    ctx->pc = 0x319bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319bbc: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x319bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x319bc0: 0x8cc9007c  lw          $t1, 0x7C($a2)
    ctx->pc = 0x319bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x319bc4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x319bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x319bc8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x319bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x319bcc: 0x79290120  lq          $t1, 0x120($t1)
    ctx->pc = 0x319bccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 288)));
    // 0x319bd0: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x319bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x319bd4: 0x8cc9007c  lw          $t1, 0x7C($a2)
    ctx->pc = 0x319bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x319bd8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x319bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x319bdc: 0x79290130  lq          $t1, 0x130($t1)
    ctx->pc = 0x319bdcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 304)));
    // 0x319be0: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x319be0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x319be4: 0xdca90000  ld          $t1, 0x0($a1)
    ctx->pc = 0x319be4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x319be8: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x319be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x319bec: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x319becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x319bf0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x319bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x319bf4: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x319bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x319bf8: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x319bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x319bfc: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x319bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x319c00: 0x95702  srl         $t2, $t1, 28
    ctx->pc = 0x319c00u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 28));
    // 0x319c04: 0x94e82  srl         $t1, $t1, 26
    ctx->pc = 0x319c04u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x319c08: 0x31290003  andi        $t1, $t1, 0x3
    ctx->pc = 0x319c08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x319c0c: 0x11270012  beq         $t1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x319C0Cu;
    {
        const bool branch_taken_0x319c0c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x319C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C0Cu;
        // 0x319c10: 0x314a000f  andi        $t2, $t2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c0c) {
            ctx->pc = 0x319C58u;
            goto label_319c58;
        }
    }
    ctx->pc = 0x319C14u;
    // 0x319c14: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x319c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x319c18: 0x11270005  beq         $t1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x319C18u;
    {
        const bool branch_taken_0x319c18 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        if (branch_taken_0x319c18) {
            ctx->pc = 0x319C30u;
            goto label_319c30;
        }
    }
    ctx->pc = 0x319C20u;
    // 0x319c20: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319C20u;
    {
        const bool branch_taken_0x319c20 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x319c20) {
            ctx->pc = 0x319C30u;
            goto label_319c30;
        }
    }
    ctx->pc = 0x319C28u;
    // 0x319c28: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x319C28u;
    {
        const bool branch_taken_0x319c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319c28) {
            ctx->pc = 0x319C90u;
            goto label_319c90;
        }
    }
    ctx->pc = 0x319C30u;
label_319c30:
    // 0x319c30: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x319c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319c34: 0x833823  subu        $a3, $a0, $v1
    ctx->pc = 0x319c34u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x319c38: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x319C38u;
    {
        const bool branch_taken_0x319c38 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x319C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C38u;
        // 0x319c3c: 0x72103  sra         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c38) {
            ctx->pc = 0x319C48u;
            goto label_319c48;
        }
    }
    ctx->pc = 0x319C40u;
    // 0x319c40: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x319c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x319c44: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x319c44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_319c48:
    // 0x319c48: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x319c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x319c4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x319C4Cu;
    {
        const bool branch_taken_0x319c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C4Cu;
        // 0x319c50: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c4c) {
            ctx->pc = 0x319C90u;
            goto label_319c90;
        }
    }
    ctx->pc = 0x319C54u;
    // 0x319c54: 0x0  nop
    ctx->pc = 0x319c54u;
    // NOP
label_319c58:
    // 0x319c58: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x319c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319c5c: 0x833823  subu        $a3, $a0, $v1
    ctx->pc = 0x319c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x319c60: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x319C60u;
    {
        const bool branch_taken_0x319c60 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x319C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C60u;
        // 0x319c64: 0x72103  sra         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c60) {
            ctx->pc = 0x319C70u;
            goto label_319c70;
        }
    }
    ctx->pc = 0x319C68u;
    // 0x319c68: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x319c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x319c6c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x319c6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_319c70:
    // 0x319c70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x319c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x319c74: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x319c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x319c78: 0x8a001b  divu        $zero, $a0, $t2
    ctx->pc = 0x319c78u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x319c7c: 0x0  nop
    ctx->pc = 0x319c7cu;
    // NOP
    // 0x319c80: 0x0  nop
    ctx->pc = 0x319c80u;
    // NOP
    // 0x319c84: 0x2012  mflo        $a0
    ctx->pc = 0x319c84u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x319c88: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x319c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x319c8c: 0x0  nop
    ctx->pc = 0x319c8cu;
    // NOP
label_319c90:
    // 0x319c90: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x319c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x319c94: 0x34878000  ori         $a3, $a0, 0x8000
    ctx->pc = 0x319c94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x319c98: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x319c98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x319c9c: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x319c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319ca0: 0x8f878b2c  lw          $a3, -0x74D4($gp)
    ctx->pc = 0x319ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x319ca4: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x319ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x319ca8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319CA8u;
    {
        const bool branch_taken_0x319ca8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x319CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CA8u;
        // 0x319cac: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ca8) {
            ctx->pc = 0x319CB8u;
            goto label_319cb8;
        }
    }
    ctx->pc = 0x319CB0u;
    // 0x319cb0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x319cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x319cb4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x319cb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_319cb8:
    // 0x319cb8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x319cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x319cbc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x319cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x319cc0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x319cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x319cc4: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x319cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x319cc8: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x319cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319ccc: 0x8f878b28  lw          $a3, -0x74D8($gp)
    ctx->pc = 0x319cccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x319cd0: 0x672023  subu        $a0, $v1, $a3
    ctx->pc = 0x319cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x319cd4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319CD4u;
    {
        const bool branch_taken_0x319cd4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x319CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CD4u;
        // 0x319cd8: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319cd4) {
            ctx->pc = 0x319CE4u;
            goto label_319ce4;
        }
    }
    ctx->pc = 0x319CDCu;
    // 0x319cdc: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x319cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x319ce0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x319ce0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_319ce4:
    // 0x319ce4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x319ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x319ce8: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x319ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x319cec: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x319cecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x319cf0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x319cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x319cf4: 0x8cc8007c  lw          $t0, 0x7C($a2)
    ctx->pc = 0x319cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x319cf8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x319cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x319cfc: 0x34670003  ori         $a3, $v1, 0x3
    ctx->pc = 0x319cfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x319d00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x319d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x319d04: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x319d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x319d08: 0x25080140  addiu       $t0, $t0, 0x140
    ctx->pc = 0x319d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 320));
    // 0x319d0c: 0x8413c  dsll32      $t0, $t0, 4
    ctx->pc = 0x319d0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 4));
    // 0x319d10: 0x8413e  dsrl32      $t0, $t0, 4
    ctx->pc = 0x319d10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 4));
    // 0x319d14: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x319d14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x319d18: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x319d18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x319d1c: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x319d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x319d20: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x319d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x319d24: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x319d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x319d28: 0x8cc30118  lw          $v1, 0x118($a2)
    ctx->pc = 0x319d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
    // 0x319d2c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x319d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x319d30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x319d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x319d34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x319d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x319d38: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x319d38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x319d3c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x319d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x319d40: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x319d40u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x319d44: 0x8cc4007c  lw          $a0, 0x7C($a2)
    ctx->pc = 0x319d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x319d48: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x319d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    // 0x319d4c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x319d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x319d50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x319d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x319d54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x319d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x319d58: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x319d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x319d5c: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x319d5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319d60: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x319d60u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x319d64: 0xfca00018  sd          $zero, 0x18($a1)
    ctx->pc = 0x319d64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 0));
    // 0x319d68: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x319d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x319d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x319D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D6Cu;
        // 0x319d70: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319D74u;
}
