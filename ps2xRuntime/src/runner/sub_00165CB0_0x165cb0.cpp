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

// Function: sub_00165CB0
// Address: 0x165cb0 - 0x165df0
void sub_00165CB0_0x165cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165CB0_0x165cb0");
#endif

    ctx->pc = 0x165cb0u;

    // 0x165cb0: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x165cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165cb4: 0x9467002e  lhu         $a3, 0x2E($v1)
    ctx->pc = 0x165cb4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x165cb8: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x165cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x165cbc: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x165cbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x165cc0: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x165CC0u;
    {
        const bool branch_taken_0x165cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CC0u;
        // 0x165cc4: 0x30e6000f  andi        $a2, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cc0) {
            ctx->pc = 0x165DD0u;
            goto label_165dd0;
        }
    }
    ctx->pc = 0x165CC8u;
    // 0x165cc8: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x165cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x165ccc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x165CCCu;
    {
        const bool branch_taken_0x165ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CCCu;
        // 0x165cd0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ccc) {
            ctx->pc = 0x165CF0u;
            goto label_165cf0;
        }
    }
    ctx->pc = 0x165CD4u;
    // 0x165cd4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x165cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x165cd8: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x165cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x165cdc: 0x8c2368b8  lw          $v1, 0x68B8($at)
    ctx->pc = 0x165cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26808)));
    // 0x165ce0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x165ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165ce4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x165ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x165ce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x165CE8u;
    {
        const bool branch_taken_0x165ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CE8u;
        // 0x165cec: 0x654821  addu        $t1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ce8) {
            ctx->pc = 0x165D08u;
            goto label_165d08;
        }
    }
    ctx->pc = 0x165CF0u;
label_165cf0:
    // 0x165cf0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x165cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x165cf4: 0x8c2368bc  lw          $v1, 0x68BC($at)
    ctx->pc = 0x165cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26812)));
    // 0x165cf8: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x165cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x165cfc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x165cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165d00: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x165d00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x165d04: 0x654821  addu        $t1, $v1, $a1
    ctx->pc = 0x165d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_165d08:
    // 0x165d08: 0x91260001  lbu         $a2, 0x1($t1)
    ctx->pc = 0x165d08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x165d0c: 0x30e500f0  andi        $a1, $a3, 0xF0
    ctx->pc = 0x165d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
    // 0x165d10: 0x30e30f00  andi        $v1, $a3, 0xF00
    ctx->pc = 0x165d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x165d14: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x165d14u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x165d18: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x165d18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x165d1c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x165d20: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x165d20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x165d24: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x165d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x165d28: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x165d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x165d2c: 0x28e10005  slti        $at, $a3, 0x5
    ctx->pc = 0x165d2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x165d30: 0x66280a  movz        $a1, $v1, $a2
    ctx->pc = 0x165d30u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x165d34: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x165D34u;
    {
        const bool branch_taken_0x165d34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x165D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D34u;
        // 0x165d38: 0xa08500a0  sb          $a1, 0xA0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d34) {
            ctx->pc = 0x165D44u;
            goto label_165d44;
        }
    }
    ctx->pc = 0x165D3Cu;
    // 0x165d3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x165D3Cu;
    {
        const bool branch_taken_0x165d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D3Cu;
        // 0x165d40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d3c) {
            ctx->pc = 0x165D54u;
            goto label_165d54;
        }
    }
    ctx->pc = 0x165D44u;
label_165d44:
    // 0x165d44: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x165d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165d48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165d4c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x165d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x165d50: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x165d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_165d54:
    // 0x165d54: 0xa08300a1  sb          $v1, 0xA1($a0)
    ctx->pc = 0x165d54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x165d58: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x165d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x165d5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165D5Cu;
    {
        const bool branch_taken_0x165d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165d5c) {
            ctx->pc = 0x165D78u;
            goto label_165d78;
        }
    }
    ctx->pc = 0x165D64u;
    // 0x165d64: 0x908300a0  lbu         $v1, 0xA0($a0)
    ctx->pc = 0x165d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x165d68: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x165d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x165d6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165D6Cu;
    {
        const bool branch_taken_0x165d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D6Cu;
        // 0x165d70: 0xa08300a0  sb          $v1, 0xA0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d6c) {
            ctx->pc = 0x165D88u;
            goto label_165d88;
        }
    }
    ctx->pc = 0x165D74u;
    // 0x165d74: 0x0  nop
    ctx->pc = 0x165d74u;
    // NOP
label_165d78:
    // 0x165d78: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x165d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x165d7c: 0x908300a0  lbu         $v1, 0xA0($a0)
    ctx->pc = 0x165d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x165d80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x165d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x165d84: 0xa08300a0  sb          $v1, 0xA0($a0)
    ctx->pc = 0x165d84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 3));
label_165d88:
    // 0x165d88: 0x908600a0  lbu         $a2, 0xA0($a0)
    ctx->pc = 0x165d88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x165d8c: 0x25230004  addiu       $v1, $t1, 0x4
    ctx->pc = 0x165d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x165d90: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x165d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x165d94: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x165d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x165d98: 0xa08600a2  sb          $a2, 0xA2($a0)
    ctx->pc = 0x165d98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 162), (uint8_t)GPR_U32(ctx, 6));
    // 0x165d9c: 0xa08000a3  sb          $zero, 0xA3($a0)
    ctx->pc = 0x165d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 163), (uint8_t)GPR_U32(ctx, 0));
    // 0x165da0: 0xac8300a4  sw          $v1, 0xA4($a0)
    ctx->pc = 0x165da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 3));
    // 0x165da4: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x165da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x165da8: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x165da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165dac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x165dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165db0: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x165db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x165db4: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x165db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x165db8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x165db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x165dbc: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x165dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x165dc0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x165dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x165dc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165DC4u;
    {
        const bool branch_taken_0x165dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DC4u;
        // 0x165dc8: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165dc4) {
            ctx->pc = 0x165DE8u;
            goto label_165de8;
        }
    }
    ctx->pc = 0x165DCCu;
    // 0x165dcc: 0x0  nop
    ctx->pc = 0x165dccu;
    // NOP
label_165dd0:
    // 0x165dd0: 0xa08000a0  sb          $zero, 0xA0($a0)
    ctx->pc = 0x165dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x165dd4: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x165dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x165dd8: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x165dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165ddc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x165ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x165de0: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x165de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x165de4: 0x0  nop
    ctx->pc = 0x165de4u;
    // NOP
label_165de8:
    // 0x165de8: 0x3e00008  jr          $ra
    ctx->pc = 0x165DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165DF0u;
}
