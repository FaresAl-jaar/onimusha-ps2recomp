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

// Function: sub_00165B70
// Address: 0x165b70 - 0x165cb0
void sub_00165B70_0x165b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165B70_0x165b70");
#endif

    ctx->pc = 0x165b70u;

    // 0x165b70: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x165b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165b74: 0x94670036  lhu         $a3, 0x36($v1)
    ctx->pc = 0x165b74u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x165b78: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x165b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x165b7c: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x165b7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x165b80: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x165B80u;
    {
        const bool branch_taken_0x165b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B80u;
        // 0x165b84: 0x30e6000f  andi        $a2, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b80) {
            ctx->pc = 0x165C90u;
            goto label_165c90;
        }
    }
    ctx->pc = 0x165B88u;
    // 0x165b88: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x165b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x165b8c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x165B8Cu;
    {
        const bool branch_taken_0x165b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B8Cu;
        // 0x165b90: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b8c) {
            ctx->pc = 0x165BB0u;
            goto label_165bb0;
        }
    }
    ctx->pc = 0x165B94u;
    // 0x165b94: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x165b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x165b98: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x165b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x165b9c: 0x8c2368b8  lw          $v1, 0x68B8($at)
    ctx->pc = 0x165b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26808)));
    // 0x165ba0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x165ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165ba4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x165ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x165ba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x165BA8u;
    {
        const bool branch_taken_0x165ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BA8u;
        // 0x165bac: 0x654821  addu        $t1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ba8) {
            ctx->pc = 0x165BC8u;
            goto label_165bc8;
        }
    }
    ctx->pc = 0x165BB0u;
label_165bb0:
    // 0x165bb0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x165bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x165bb4: 0x8c2368bc  lw          $v1, 0x68BC($at)
    ctx->pc = 0x165bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26812)));
    // 0x165bb8: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x165bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x165bbc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x165bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165bc0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x165bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x165bc4: 0x654821  addu        $t1, $v1, $a1
    ctx->pc = 0x165bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_165bc8:
    // 0x165bc8: 0x91260001  lbu         $a2, 0x1($t1)
    ctx->pc = 0x165bc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x165bcc: 0x30e500f0  andi        $a1, $a3, 0xF0
    ctx->pc = 0x165bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
    // 0x165bd0: 0x30e30f00  andi        $v1, $a3, 0xF00
    ctx->pc = 0x165bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x165bd4: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x165bd4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x165bd8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x165bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x165bdc: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x165bdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x165be0: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x165be0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x165be4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x165be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x165be8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x165be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x165bec: 0x28e10005  slti        $at, $a3, 0x5
    ctx->pc = 0x165becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x165bf0: 0x66280a  movz        $a1, $v1, $a2
    ctx->pc = 0x165bf0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x165bf4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x165BF4u;
    {
        const bool branch_taken_0x165bf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x165BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BF4u;
        // 0x165bf8: 0xa0850098  sb          $a1, 0x98($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bf4) {
            ctx->pc = 0x165C04u;
            goto label_165c04;
        }
    }
    ctx->pc = 0x165BFCu;
    // 0x165bfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x165BFCu;
    {
        const bool branch_taken_0x165bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BFCu;
        // 0x165c00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bfc) {
            ctx->pc = 0x165C14u;
            goto label_165c14;
        }
    }
    ctx->pc = 0x165C04u;
label_165c04:
    // 0x165c04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x165c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165c0c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x165c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x165c10: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x165c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_165c14:
    // 0x165c14: 0xa0830099  sb          $v1, 0x99($a0)
    ctx->pc = 0x165c14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 153), (uint8_t)GPR_U32(ctx, 3));
    // 0x165c18: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x165c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x165c1c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165C1Cu;
    {
        const bool branch_taken_0x165c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165c1c) {
            ctx->pc = 0x165C38u;
            goto label_165c38;
        }
    }
    ctx->pc = 0x165C24u;
    // 0x165c24: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x165c24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x165c28: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x165c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x165c2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165C2Cu;
    {
        const bool branch_taken_0x165c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C2Cu;
        // 0x165c30: 0xa0830098  sb          $v1, 0x98($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c2c) {
            ctx->pc = 0x165C48u;
            goto label_165c48;
        }
    }
    ctx->pc = 0x165C34u;
    // 0x165c34: 0x0  nop
    ctx->pc = 0x165c34u;
    // NOP
label_165c38:
    // 0x165c38: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x165c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x165c3c: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x165c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x165c40: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x165c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x165c44: 0xa0830098  sb          $v1, 0x98($a0)
    ctx->pc = 0x165c44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
label_165c48:
    // 0x165c48: 0x90860098  lbu         $a2, 0x98($a0)
    ctx->pc = 0x165c48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x165c4c: 0x25230004  addiu       $v1, $t1, 0x4
    ctx->pc = 0x165c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x165c50: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x165c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x165c54: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x165c54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x165c58: 0xa086009a  sb          $a2, 0x9A($a0)
    ctx->pc = 0x165c58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 154), (uint8_t)GPR_U32(ctx, 6));
    // 0x165c5c: 0xa080009b  sb          $zero, 0x9B($a0)
    ctx->pc = 0x165c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 0));
    // 0x165c60: 0xac83009c  sw          $v1, 0x9C($a0)
    ctx->pc = 0x165c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
    // 0x165c64: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x165c68: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x165c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165c6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x165c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165c70: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x165c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x165c74: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x165c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x165c78: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x165c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x165c7c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x165c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x165c80: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x165c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x165c84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165C84u;
    {
        const bool branch_taken_0x165c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C84u;
        // 0x165c88: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c84) {
            ctx->pc = 0x165CA8u;
            goto label_165ca8;
        }
    }
    ctx->pc = 0x165C8Cu;
    // 0x165c8c: 0x0  nop
    ctx->pc = 0x165c8cu;
    // NOP
label_165c90:
    // 0x165c90: 0xa0800098  sb          $zero, 0x98($a0)
    ctx->pc = 0x165c90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x165c94: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x165c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x165c98: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x165c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165c9c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x165c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x165ca0: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x165ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x165ca4: 0x0  nop
    ctx->pc = 0x165ca4u;
    // NOP
label_165ca8:
    // 0x165ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x165CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165CB0u;
}
