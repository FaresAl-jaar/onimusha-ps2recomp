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

// Function: sub_001BED90
// Address: 0x1bed90 - 0x1bf000
void sub_001BED90_0x1bed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BED90_0x1bed90");
#endif

    switch (ctx->pc) {
        case 0x1bedd0u: goto label_1bedd0;
        case 0x1bedf0u: goto label_1bedf0;
        case 0x1bee80u: goto label_1bee80;
        case 0x1beeb8u: goto label_1beeb8;
        case 0x1beeecu: goto label_1beeec;
        case 0x1bef28u: goto label_1bef28;
        case 0x1bef5cu: goto label_1bef5c;
        default: break;
    }

    ctx->pc = 0x1bed90u;

    // 0x1bed90: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1bed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1bed94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1bed9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1beda0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1beda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1beda4: 0x240753d3  addiu       $a3, $zero, 0x53D3
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21459));
    // 0x1beda8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1beda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bedac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bedacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bedb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bedb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bedb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bedb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bedb8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bedb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bedbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bedc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bedc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bedc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bedc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bedc8: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BEDC8u;
    SET_GPR_U32(ctx, 31, 0x1BEDD0u);
    ctx->pc = 0x1BEDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDC8u;
    // 0x1bedcc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BEDC8u, 0x1BEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDD0u;
label_1bedd0:
    // 0x1bedd0: 0x24020790  addiu       $v0, $zero, 0x790
    ctx->pc = 0x1bedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    // 0x1bedd4: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1bedd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x1bedd8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1bedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1beddc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1beddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bede0: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1bede0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1bede4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1bede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1bede8: 0x24020792  addiu       $v0, $zero, 0x792
    ctx->pc = 0x1bede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1938));
    // 0x1bedec: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1bedecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1bedf0:
    // 0x1bedf0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1bedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1bedf4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bedf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedf8: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1bedf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bedfc: 0x24120700  addiu       $s2, $zero, 0x700
    ctx->pc = 0x1bedfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1bee00: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x1bee00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bee04: 0x24100708  addiu       $s0, $zero, 0x708
    ctx->pc = 0x1bee04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1bee08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1bee08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee0c: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x1bee0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bee10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bee14: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1bee14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1bee18: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1bee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1bee1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bee20: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1bee20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1bee24: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1bee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bee28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bee2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bee2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bee30: 0x3f438  dsll        $fp, $v1, 16
    ctx->pc = 0x1bee30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << 16);
    // 0x1bee34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bee34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bee38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bee38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bee3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bee3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bee40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bee44: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x1bee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
    // 0x1bee48: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1bee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1bee4c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1bee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bee50: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1bee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bee54: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1bee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1bee58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bee58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bee5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bee5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bee60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bee60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bee64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bee64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bee68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bee6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bee70: 0xffa200a0  sd          $v0, 0xA0($sp)
    ctx->pc = 0x1bee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 2));
    // 0x1bee74: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x1bee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x1bee78: 0xffa200b0  sd          $v0, 0xB0($sp)
    ctx->pc = 0x1bee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x1bee7c: 0x0  nop
    ctx->pc = 0x1bee7cu;
    // NOP
label_1bee80:
    // 0x1bee80: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1bee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bee84: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BEE84u;
    {
        const bool branch_taken_0x1bee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE84u;
        // 0x1bee88: 0x121900  sll         $v1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee84) {
            ctx->pc = 0x1BEEF8u;
            goto label_1beef8;
        }
    }
    ctx->pc = 0x1BEE8Cu;
    // 0x1bee8c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1bee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1bee90: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1bee90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bee94: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1bee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1bee98: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bee98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bee9c: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x1bee9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1beea0: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x1beea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1beea4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1beea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1beea8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beeac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1beeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1beeb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEEB0u;
    SET_GPR_U32(ctx, 31, 0x1BEEB8u);
    ctx->pc = 0x1BEEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEB0u;
    // 0x1beeb4: 0x5e3025  or          $a2, $v0, $fp (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEEB0u, 0x1BEEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEEB8u;
label_1beeb8:
    // 0x1beeb8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1beeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1beebc: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1beebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1beec0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1beec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1beec4: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1beec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1beec8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1beec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1beecc: 0xdfa200a0  ld          $v0, 0xA0($sp)
    ctx->pc = 0x1beeccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1beed0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1beed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1beed4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1beed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1beed8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x1beed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1beedc: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x1beedcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1beee0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beee4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEEE4u;
    SET_GPR_U32(ctx, 31, 0x1BEEECu);
    ctx->pc = 0x1BEEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEE4u;
    // 0x1beee8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEEE4u, 0x1BEEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEEECu;
label_1beeec:
    // 0x1beeec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1BEEECu;
    {
        const bool branch_taken_0x1beeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beeec) {
            ctx->pc = 0x1BEF60u;
            goto label_1bef60;
        }
    }
    ctx->pc = 0x1BEEF4u;
    // 0x1beef4: 0x0  nop
    ctx->pc = 0x1beef4u;
    // NOP
label_1beef8:
    // 0x1beef8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1beef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1beefc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1beefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bef00: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x1bef00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1bef04: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x1bef04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bef08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bef08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bef0c: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x1bef0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bef10: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x1bef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1bef14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bef14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bef18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bef1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bef20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEF20u;
    SET_GPR_U32(ctx, 31, 0x1BEF28u);
    ctx->pc = 0x1BEF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF20u;
    // 0x1bef24: 0x5e3025  or          $a2, $v0, $fp (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEF20u, 0x1BEF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF28u;
label_1bef28:
    // 0x1bef28: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1bef28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1bef2c: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x1bef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1bef30: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1bef30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bef34: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1bef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1bef38: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bef38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bef3c: 0xdfa200a0  ld          $v0, 0xA0($sp)
    ctx->pc = 0x1bef3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bef40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bef40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bef44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bef44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bef48: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x1bef48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bef4c: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x1bef4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bef50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEF54u;
    SET_GPR_U32(ctx, 31, 0x1BEF5Cu);
    ctx->pc = 0x1BEF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF54u;
    // 0x1bef58: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEF54u, 0x1BEF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF5Cu;
label_1bef5c:
    // 0x1bef5c: 0x0  nop
    ctx->pc = 0x1bef5cu;
    // NOP
label_1bef60:
    // 0x1bef60: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bef60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bef64: 0x2e830008  sltiu       $v1, $s4, 0x8
    ctx->pc = 0x1bef64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bef68: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1bef68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1bef6c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1bef6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1bef70: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1bef70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1bef74: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1bef74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1bef78: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1bef78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1bef7c: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1BEF7Cu;
    {
        const bool branch_taken_0x1bef7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF7Cu;
        // 0x1bef80: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef7c) {
            ctx->pc = 0x1BEE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bee80;
        }
    }
    ctx->pc = 0x1BEF84u;
    // 0x1bef84: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1bef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1bef88: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1bef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1bef8c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x1bef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x1bef90: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1bef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bef94: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1bef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1bef98: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1bef98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1bef9c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1bef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1befa0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1befa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1befa4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1befa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1befa8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1befa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1befac: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1befacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1befb0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1befb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x1befb4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1befb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1befb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1befb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1befbc: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1befbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1befc0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1befc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1befc4: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x1befc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1befc8: 0x1460ff89  bnez        $v1, . + 4 + (-0x77 << 2)
    ctx->pc = 0x1BEFC8u;
    {
        const bool branch_taken_0x1befc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1befc8) {
            ctx->pc = 0x1BEDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bedf0;
        }
    }
    ctx->pc = 0x1BEFD0u;
    // 0x1befd0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1befd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1befd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1befd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1befd8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1befd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1befdc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1befdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1befe0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1befe0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1befe4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1befe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1befe8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1befe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1befec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1befecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1beff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1beff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1beff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFF8u;
        // 0x1beffc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF000u;
}
