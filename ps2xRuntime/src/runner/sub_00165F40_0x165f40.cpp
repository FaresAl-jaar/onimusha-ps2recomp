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

// Function: sub_00165F40
// Address: 0x165f40 - 0x166080
void sub_00165F40_0x165f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165F40_0x165f40");
#endif

    ctx->pc = 0x165f40u;

    // 0x165f40: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x165f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x165f44: 0x94670022  lhu         $a3, 0x22($v1)
    ctx->pc = 0x165f44u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x165f48: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x165f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x165f4c: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x165f4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x165f50: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x165F50u;
    {
        const bool branch_taken_0x165f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F50u;
        // 0x165f54: 0x30e6000f  andi        $a2, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f50) {
            ctx->pc = 0x166060u;
            goto label_166060;
        }
    }
    ctx->pc = 0x165F58u;
    // 0x165f58: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x165f58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x165f5c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x165F5Cu;
    {
        const bool branch_taken_0x165f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F5Cu;
        // 0x165f60: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f5c) {
            ctx->pc = 0x165F80u;
            goto label_165f80;
        }
    }
    ctx->pc = 0x165F64u;
    // 0x165f64: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x165f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x165f68: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x165f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x165f6c: 0x8c2368b8  lw          $v1, 0x68B8($at)
    ctx->pc = 0x165f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26808)));
    // 0x165f70: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x165f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165f74: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x165f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x165f78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x165F78u;
    {
        const bool branch_taken_0x165f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F78u;
        // 0x165f7c: 0x654821  addu        $t1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f78) {
            ctx->pc = 0x165F98u;
            goto label_165f98;
        }
    }
    ctx->pc = 0x165F80u;
label_165f80:
    // 0x165f80: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x165f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x165f84: 0x8c2368bc  lw          $v1, 0x68BC($at)
    ctx->pc = 0x165f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26812)));
    // 0x165f88: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x165f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x165f8c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x165f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165f90: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x165f94: 0x654821  addu        $t1, $v1, $a1
    ctx->pc = 0x165f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_165f98:
    // 0x165f98: 0x91260001  lbu         $a2, 0x1($t1)
    ctx->pc = 0x165f98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x165f9c: 0x30e500f0  andi        $a1, $a3, 0xF0
    ctx->pc = 0x165f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
    // 0x165fa0: 0x30e30f00  andi        $v1, $a3, 0xF00
    ctx->pc = 0x165fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x165fa4: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x165fa4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x165fa8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x165fa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x165fac: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x165facu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x165fb0: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x165fb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x165fb4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x165fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x165fb8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x165fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x165fbc: 0x28e10005  slti        $at, $a3, 0x5
    ctx->pc = 0x165fbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x165fc0: 0x66280a  movz        $a1, $v1, $a2
    ctx->pc = 0x165fc0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x165fc4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x165FC4u;
    {
        const bool branch_taken_0x165fc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x165FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FC4u;
        // 0x165fc8: 0xa0850098  sb          $a1, 0x98($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fc4) {
            ctx->pc = 0x165FD4u;
            goto label_165fd4;
        }
    }
    ctx->pc = 0x165FCCu;
    // 0x165fcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x165FCCu;
    {
        const bool branch_taken_0x165fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FCCu;
        // 0x165fd0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fcc) {
            ctx->pc = 0x165FE4u;
            goto label_165fe4;
        }
    }
    ctx->pc = 0x165FD4u;
label_165fd4:
    // 0x165fd4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x165fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165fdc: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x165fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x165fe0: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_165fe4:
    // 0x165fe4: 0xa0830099  sb          $v1, 0x99($a0)
    ctx->pc = 0x165fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 153), (uint8_t)GPR_U32(ctx, 3));
    // 0x165fe8: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x165fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x165fec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165FECu;
    {
        const bool branch_taken_0x165fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165fec) {
            ctx->pc = 0x166008u;
            goto label_166008;
        }
    }
    ctx->pc = 0x165FF4u;
    // 0x165ff4: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x165ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x165ff8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x165ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x165ffc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165FFCu;
    {
        const bool branch_taken_0x165ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FFCu;
        // 0x166000: 0xa0830098  sb          $v1, 0x98($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ffc) {
            ctx->pc = 0x166018u;
            goto label_166018;
        }
    }
    ctx->pc = 0x166004u;
    // 0x166004: 0x0  nop
    ctx->pc = 0x166004u;
    // NOP
label_166008:
    // 0x166008: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x166008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x16600c: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x16600cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x166010: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x166010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x166014: 0xa0830098  sb          $v1, 0x98($a0)
    ctx->pc = 0x166014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
label_166018:
    // 0x166018: 0x90860098  lbu         $a2, 0x98($a0)
    ctx->pc = 0x166018u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x16601c: 0x25230004  addiu       $v1, $t1, 0x4
    ctx->pc = 0x16601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x166020: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x166020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x166024: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x166024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x166028: 0xa086009a  sb          $a2, 0x9A($a0)
    ctx->pc = 0x166028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 154), (uint8_t)GPR_U32(ctx, 6));
    // 0x16602c: 0xa080009b  sb          $zero, 0x9B($a0)
    ctx->pc = 0x16602cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 0));
    // 0x166030: 0xac83009c  sw          $v1, 0x9C($a0)
    ctx->pc = 0x166030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
    // 0x166034: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x166034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x166038: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x166038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x16603c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166040: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x166040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x166044: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x166044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x166048: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x166048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16604c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x16604cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x166050: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x166050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x166054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x166054u;
    {
        const bool branch_taken_0x166054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166054u;
        // 0x166058: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166054) {
            ctx->pc = 0x166078u;
            goto label_166078;
        }
    }
    ctx->pc = 0x16605Cu;
    // 0x16605c: 0x0  nop
    ctx->pc = 0x16605cu;
    // NOP
label_166060:
    // 0x166060: 0xa0800098  sb          $zero, 0x98($a0)
    ctx->pc = 0x166060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x166064: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x166064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x166068: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x166068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x16606c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x166070: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x166070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x166074: 0x0  nop
    ctx->pc = 0x166074u;
    // NOP
label_166078:
    // 0x166078: 0x3e00008  jr          $ra
    ctx->pc = 0x166078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166080u;
}
