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

// Function: sub_00165970
// Address: 0x165970 - 0x165ab0
void sub_00165970_0x165970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165970_0x165970");
#endif

    ctx->pc = 0x165970u;

    // 0x165970: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x165970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165974: 0x9467002e  lhu         $a3, 0x2E($v1)
    ctx->pc = 0x165974u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x165978: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x165978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x16597c: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x16597cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x165980: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x165980u;
    {
        const bool branch_taken_0x165980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165980u;
        // 0x165984: 0x30e6000f  andi        $a2, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165980) {
            ctx->pc = 0x165A90u;
            goto label_165a90;
        }
    }
    ctx->pc = 0x165988u;
    // 0x165988: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x165988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x16598c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x16598Cu;
    {
        const bool branch_taken_0x16598c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16598Cu;
        // 0x165990: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16598c) {
            ctx->pc = 0x1659B0u;
            goto label_1659b0;
        }
    }
    ctx->pc = 0x165994u;
    // 0x165994: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x165994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x165998: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x165998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x16599c: 0x8c2368b8  lw          $v1, 0x68B8($at)
    ctx->pc = 0x16599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26808)));
    // 0x1659a0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1659a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1659a4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1659a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1659a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1659A8u;
    {
        const bool branch_taken_0x1659a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1659ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659A8u;
        // 0x1659ac: 0x654821  addu        $t1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659a8) {
            ctx->pc = 0x1659C8u;
            goto label_1659c8;
        }
    }
    ctx->pc = 0x1659B0u;
label_1659b0:
    // 0x1659b0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1659b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1659b4: 0x8c2368bc  lw          $v1, 0x68BC($at)
    ctx->pc = 0x1659b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26812)));
    // 0x1659b8: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x1659b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x1659bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1659bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1659c0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1659c4: 0x654821  addu        $t1, $v1, $a1
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1659c8:
    // 0x1659c8: 0x91260001  lbu         $a2, 0x1($t1)
    ctx->pc = 0x1659c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1659cc: 0x30e500f0  andi        $a1, $a3, 0xF0
    ctx->pc = 0x1659ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
    // 0x1659d0: 0x30e30f00  andi        $v1, $a3, 0xF00
    ctx->pc = 0x1659d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x1659d4: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1659d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1659d8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1659d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1659dc: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1659dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1659e0: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x1659e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1659e4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1659e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1659e8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1659e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1659ec: 0x28e10005  slti        $at, $a3, 0x5
    ctx->pc = 0x1659ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1659f0: 0x66280a  movz        $a1, $v1, $a2
    ctx->pc = 0x1659f0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1659f4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1659F4u;
    {
        const bool branch_taken_0x1659f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1659F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659F4u;
        // 0x1659f8: 0xa0850098  sb          $a1, 0x98($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659f4) {
            ctx->pc = 0x165A04u;
            goto label_165a04;
        }
    }
    ctx->pc = 0x1659FCu;
    // 0x1659fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1659FCu;
    {
        const bool branch_taken_0x1659fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659FCu;
        // 0x165a00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659fc) {
            ctx->pc = 0x165A14u;
            goto label_165a14;
        }
    }
    ctx->pc = 0x165A04u;
label_165a04:
    // 0x165a04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x165a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165a08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165a0c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x165a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x165a10: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x165a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_165a14:
    // 0x165a14: 0xa0830099  sb          $v1, 0x99($a0)
    ctx->pc = 0x165a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 153), (uint8_t)GPR_U32(ctx, 3));
    // 0x165a18: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x165a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x165a1c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165A1Cu;
    {
        const bool branch_taken_0x165a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165a1c) {
            ctx->pc = 0x165A38u;
            goto label_165a38;
        }
    }
    ctx->pc = 0x165A24u;
    // 0x165a24: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x165a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x165a28: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x165a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x165a2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165A2Cu;
    {
        const bool branch_taken_0x165a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A2Cu;
        // 0x165a30: 0xa0830098  sb          $v1, 0x98($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a2c) {
            ctx->pc = 0x165A48u;
            goto label_165a48;
        }
    }
    ctx->pc = 0x165A34u;
    // 0x165a34: 0x0  nop
    ctx->pc = 0x165a34u;
    // NOP
label_165a38:
    // 0x165a38: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x165a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x165a3c: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x165a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x165a40: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x165a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x165a44: 0xa0830098  sb          $v1, 0x98($a0)
    ctx->pc = 0x165a44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
label_165a48:
    // 0x165a48: 0x90860098  lbu         $a2, 0x98($a0)
    ctx->pc = 0x165a48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x165a4c: 0x25230004  addiu       $v1, $t1, 0x4
    ctx->pc = 0x165a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x165a50: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x165a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x165a54: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x165a54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x165a58: 0xa086009a  sb          $a2, 0x9A($a0)
    ctx->pc = 0x165a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 154), (uint8_t)GPR_U32(ctx, 6));
    // 0x165a5c: 0xa080009b  sb          $zero, 0x9B($a0)
    ctx->pc = 0x165a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 0));
    // 0x165a60: 0xac83009c  sw          $v1, 0x9C($a0)
    ctx->pc = 0x165a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
    // 0x165a64: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x165a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x165a68: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x165a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165a6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x165a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165a70: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x165a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x165a74: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x165a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x165a78: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x165a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x165a7c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x165a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x165a80: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x165a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x165a84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165A84u;
    {
        const bool branch_taken_0x165a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A84u;
        // 0x165a88: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a84) {
            ctx->pc = 0x165AA8u;
            goto label_165aa8;
        }
    }
    ctx->pc = 0x165A8Cu;
    // 0x165a8c: 0x0  nop
    ctx->pc = 0x165a8cu;
    // NOP
label_165a90:
    // 0x165a90: 0xa0800098  sb          $zero, 0x98($a0)
    ctx->pc = 0x165a90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x165a94: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x165a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x165a98: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x165a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165a9c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x165a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x165aa0: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x165aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x165aa4: 0x0  nop
    ctx->pc = 0x165aa4u;
    // NOP
label_165aa8:
    // 0x165aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x165AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165AB0u;
}
