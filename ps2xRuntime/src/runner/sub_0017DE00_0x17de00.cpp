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

// Function: sub_0017DE00
// Address: 0x17de00 - 0x17e1f8
void sub_0017DE00_0x17de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DE00_0x17de00");
#endif

    switch (ctx->pc) {
        case 0x17df18u: goto label_17df18;
        case 0x17df64u: goto label_17df64;
        case 0x17dfb0u: goto label_17dfb0;
        case 0x17e00cu: goto label_17e00c;
        case 0x17e050u: goto label_17e050;
        case 0x17e08cu: goto label_17e08c;
        case 0x17e0d8u: goto label_17e0d8;
        case 0x17e124u: goto label_17e124;
        case 0x17e188u: goto label_17e188;
        case 0x17e1ccu: goto label_17e1cc;
        default: break;
    }

    ctx->pc = 0x17de00u;

    // 0x17de00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17de04: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17de08: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17de0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17de10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17de14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17de14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17de1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17de1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17de20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17de20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17de24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17de28: 0x84850018  lh          $a1, 0x18($a0)
    ctx->pc = 0x17de28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17de2c: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x17de2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17de30: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17de30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17de34: 0xa4830018  sh          $v1, 0x18($a0)
    ctx->pc = 0x17de34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x17de38: 0x8485001a  lh          $a1, 0x1A($a0)
    ctx->pc = 0x17de38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x17de3c: 0x84830016  lh          $v1, 0x16($a0)
    ctx->pc = 0x17de3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x17de40: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17de40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17de44: 0xa483001a  sh          $v1, 0x1A($a0)
    ctx->pc = 0x17de44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x17de48: 0x84840018  lh          $a0, 0x18($a0)
    ctx->pc = 0x17de48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17de4c: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x17de4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
    // 0x17de50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17de50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17de54: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x17de54u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17de58: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x17de58u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x17de5c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DE5Cu;
    {
        const bool branch_taken_0x17de5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE5Cu;
        // 0x17de60: 0x3083ff00  andi        $v1, $a0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de5c) {
            ctx->pc = 0x17DE78u;
            goto label_17de78;
        }
    }
    ctx->pc = 0x17DE64u;
    // 0x17de64: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17de64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17de68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17de68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17de6c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x17de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17de70: 0xa6a30018  sh          $v1, 0x18($s5)
    ctx->pc = 0x17de70u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x17de74: 0x0  nop
    ctx->pc = 0x17de74u;
    // NOP
label_17de78:
    // 0x17de78: 0x86a4001a  lh          $a0, 0x1A($s5)
    ctx->pc = 0x17de78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
    // 0x17de7c: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x17de7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
    // 0x17de80: 0x3b43c  dsll32      $s6, $v1, 16
    ctx->pc = 0x17de80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17de84: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x17de84u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x17de88: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DE88u;
    {
        const bool branch_taken_0x17de88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE88u;
        // 0x17de8c: 0x3083ff00  andi        $v1, $a0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de88) {
            ctx->pc = 0x17DEA0u;
            goto label_17dea0;
        }
    }
    ctx->pc = 0x17DE90u;
    // 0x17de90: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17de90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17de94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17de94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17de98: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x17de98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17de9c: 0xa6a3001a  sh          $v1, 0x1A($s5)
    ctx->pc = 0x17de9cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 3));
label_17dea0:
    // 0x17dea0: 0x92a60020  lbu         $a2, 0x20($s5)
    ctx->pc = 0x17dea0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x17dea4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x17dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17dea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17deac: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x17deacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x17deb0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17deb4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17deb8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x17deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17debc: 0x90a4000b  lbu         $a0, 0xB($a1)
    ctx->pc = 0x17debcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x17dec0: 0x94b30008  lhu         $s3, 0x8($a1)
    ctx->pc = 0x17dec0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17dec4: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x17dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x17dec8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DEC8u;
    {
        const bool branch_taken_0x17dec8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x17DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEC8u;
        // 0x17decc: 0x41983  sra         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dec8) {
            ctx->pc = 0x17DED8u;
            goto label_17ded8;
        }
    }
    ctx->pc = 0x17DED0u;
    // 0x17ded0: 0x2483003f  addiu       $v1, $a0, 0x3F
    ctx->pc = 0x17ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x17ded4: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x17ded4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_17ded8:
    // 0x17ded8: 0x90b1000a  lbu         $s1, 0xA($a1)
    ctx->pc = 0x17ded8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x17dedc: 0x1280005c  beqz        $s4, . + 4 + (0x5C << 2)
    ctx->pc = 0x17DEDCu;
    {
        const bool branch_taken_0x17dedc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEDCu;
        // 0x17dee0: 0x3072ffff  andi        $s2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dedc) {
            ctx->pc = 0x17E050u;
            goto label_17e050;
        }
    }
    ctx->pc = 0x17DEE4u;
    // 0x17dee4: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x17dee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17dee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17dee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deec: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x17deecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17def0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17def0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17def4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17def4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17def8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17def8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17defc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x17defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17df00: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17df00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17df04: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17df08: 0x86a80008  lh          $t0, 0x8($s5)
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17df0c: 0x86a9000a  lh          $t1, 0xA($s5)
    ctx->pc = 0x17df0cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17df10: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17DF10u;
    SET_GPR_U32(ctx, 31, 0x17DF18u);
    ctx->pc = 0x17DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF10u;
    // 0x17df14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17DF10u, 0x17DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF18u;
label_17df18:
    // 0x17df18: 0x14843c  dsll32      $s0, $s4, 16
    ctx->pc = 0x17df18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 16));
    // 0x17df1c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x17df1cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x17df20: 0x1a000025  blez        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x17DF20u;
    {
        const bool branch_taken_0x17df20 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x17df20) {
            ctx->pc = 0x17DFB8u;
            goto label_17dfb8;
        }
    }
    ctx->pc = 0x17DF28u;
    // 0x17df28: 0xffb40000  sd          $s4, 0x0($sp)
    ctx->pc = 0x17df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 20));
    // 0x17df2c: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x17df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17df30: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17df34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17df34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17df38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17df3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17df40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df44: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17df48: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x17df48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17df4c: 0x86aa0008  lh          $t2, 0x8($s5)
    ctx->pc = 0x17df4cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17df50: 0x86ab000a  lh          $t3, 0xA($s5)
    ctx->pc = 0x17df50u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17df54: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17df54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17df58: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x17df58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17df5c: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17DF5Cu;
    SET_GPR_U32(ctx, 31, 0x17DF64u);
    ctx->pc = 0x17DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF5Cu;
    // 0x17df60: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17DF5Cu, 0x17DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF64u;
label_17df64:
    // 0x17df64: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x17df64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17df68: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x17df68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17df6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17df6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17df70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17df74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17df78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17df7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df80: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17df80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17df84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17df88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17df88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17df8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x17df8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17df90: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17df90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17df94: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17df98: 0x86a20008  lh          $v0, 0x8($s5)
    ctx->pc = 0x17df98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17df9c: 0x86ab000a  lh          $t3, 0xA($s5)
    ctx->pc = 0x17df9cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17dfa0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17dfa4: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x17dfa4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17dfa8: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17DFA8u;
    SET_GPR_U32(ctx, 31, 0x17DFB0u);
    ctx->pc = 0x17DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFA8u;
    // 0x17dfac: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17DFA8u, 0x17DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFB0u;
label_17dfb0:
    // 0x17dfb0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17DFB0u;
    {
        const bool branch_taken_0x17dfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dfb0) {
            ctx->pc = 0x17E050u;
            goto label_17e050;
        }
    }
    ctx->pc = 0x17DFB8u;
label_17dfb8:
    // 0x17dfb8: 0x6010025  bgez        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x17DFB8u;
    {
        const bool branch_taken_0x17dfb8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x17DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFB8u;
        // 0x17dfbc: 0x10a023  negu        $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfb8) {
            ctx->pc = 0x17E050u;
            goto label_17e050;
        }
    }
    ctx->pc = 0x17DFC0u;
    // 0x17dfc0: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17dfc4: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x17dfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x17dfc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17dfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17dfccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17dfd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17dfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfd4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x17dfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17dfd8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17dfd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfdc: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17dfdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17dfe0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17dfe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfe4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17dfe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfe8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17dfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17dfec: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x17dfecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17dff0: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x17dff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17dff4: 0x86ab000a  lh          $t3, 0xA($s5)
    ctx->pc = 0x17dff4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17dff8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17dffc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e000: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x17e000u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17e004: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17E004u;
    SET_GPR_U32(ctx, 31, 0x17E00Cu);
    ctx->pc = 0x17E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E004u;
    // 0x17e008: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17E004u, 0x17E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E00Cu;
label_17e00c:
    // 0x17e00c: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x17e00cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17e010: 0x14443c  dsll32      $t0, $s4, 16
    ctx->pc = 0x17e010u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) << (32 + 16));
    // 0x17e014: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x17e014u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x17e018: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x17e018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17e01c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e020: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e024: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17e024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e028: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17e02c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17e030: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17e030u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17e034: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x17e034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17e038: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17e038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17e03c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17e03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17e040: 0x86aa0008  lh          $t2, 0x8($s5)
    ctx->pc = 0x17e040u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e044: 0x86ab000a  lh          $t3, 0xA($s5)
    ctx->pc = 0x17e044u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17e048: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17E048u;
    SET_GPR_U32(ctx, 31, 0x17E050u);
    ctx->pc = 0x17E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E048u;
    // 0x17e04c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17E048u, 0x17E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E050u;
label_17e050:
    // 0x17e050: 0x12c0005f  beqz        $s6, . + 4 + (0x5F << 2)
    ctx->pc = 0x17E050u;
    {
        const bool branch_taken_0x17e050 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e050) {
            ctx->pc = 0x17E1D0u;
            goto label_17e1d0;
        }
    }
    ctx->pc = 0x17E058u;
    // 0x17e058: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x17e058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17e05c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e060: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x17e060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17e064: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e068: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17e068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e06c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17e06cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e070: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x17e070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17e074: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17e074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17e078: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17e078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17e07c: 0x86a80008  lh          $t0, 0x8($s5)
    ctx->pc = 0x17e07cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e080: 0x86a9000a  lh          $t1, 0xA($s5)
    ctx->pc = 0x17e080u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17e084: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17E084u;
    SET_GPR_U32(ctx, 31, 0x17E08Cu);
    ctx->pc = 0x17E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E084u;
    // 0x17e088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17E084u, 0x17E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E08Cu;
label_17e08c:
    // 0x17e08c: 0x16843c  dsll32      $s0, $s6, 16
    ctx->pc = 0x17e08cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22) << (32 + 16));
    // 0x17e090: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x17e090u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x17e094: 0x1a000026  blez        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x17E094u;
    {
        const bool branch_taken_0x17e094 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x17e094) {
            ctx->pc = 0x17E130u;
            goto label_17e130;
        }
    }
    ctx->pc = 0x17E09Cu;
    // 0x17e09c: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x17e09cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17e0a0: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x17e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17e0a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17e0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e0b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0b4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x17e0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17e0b8: 0xffb60008  sd          $s6, 0x8($sp)
    ctx->pc = 0x17e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 22));
    // 0x17e0bc: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17e0bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17e0c0: 0x86aa0008  lh          $t2, 0x8($s5)
    ctx->pc = 0x17e0c0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e0c4: 0x86ab000a  lh          $t3, 0xA($s5)
    ctx->pc = 0x17e0c4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17e0c8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17e0cc: 0x24c3c  dsll32      $t1, $v0, 16
    ctx->pc = 0x17e0ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17e0d0: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17E0D0u;
    SET_GPR_U32(ctx, 31, 0x17E0D8u);
    ctx->pc = 0x17E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E0D0u;
    // 0x17e0d4: 0x94c3f  dsra32      $t1, $t1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17E0D0u, 0x17E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0D8u;
label_17e0d8:
    // 0x17e0d8: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x17e0d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17e0dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17e0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0e8: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x17e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17e0ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e0ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e0f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x17e0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17e0f8: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17e0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17e0fc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17e100: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17e104: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17e104u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17e108: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17e10c: 0x86a2000a  lh          $v0, 0xA($s5)
    ctx->pc = 0x17e10cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17e110: 0x86aa0008  lh          $t2, 0x8($s5)
    ctx->pc = 0x17e110u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e114: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17e118: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x17e118u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17e11c: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17E11Cu;
    SET_GPR_U32(ctx, 31, 0x17E124u);
    ctx->pc = 0x17E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E11Cu;
    // 0x17e120: 0xb5c3f  dsra32      $t3, $t3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17E11Cu, 0x17E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E124u;
label_17e124:
    // 0x17e124: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x17E124u;
    {
        const bool branch_taken_0x17e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e124) {
            ctx->pc = 0x17E1D0u;
            goto label_17e1d0;
        }
    }
    ctx->pc = 0x17E12Cu;
    // 0x17e12c: 0x0  nop
    ctx->pc = 0x17e12cu;
    // NOP
label_17e130:
    // 0x17e130: 0x6010027  bgez        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17E130u;
    {
        const bool branch_taken_0x17e130 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x17e130) {
            ctx->pc = 0x17E1D0u;
            goto label_17e1d0;
        }
    }
    ctx->pc = 0x17E138u;
    // 0x17e138: 0x86a30010  lh          $v1, 0x10($s5)
    ctx->pc = 0x17e138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17e13c: 0x10a023  negu        $s4, $s0
    ctx->pc = 0x17e13cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x17e140: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x17e140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x17e144: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x17e144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17e148: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17e148u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17e14c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e150: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e154: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17e154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e158: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e15c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e15cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e160: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x17e160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x17e164: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17e168: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17e168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17e16c: 0x86a3000a  lh          $v1, 0xA($s5)
    ctx->pc = 0x17e16cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17e170: 0x86aa0008  lh          $t2, 0x8($s5)
    ctx->pc = 0x17e170u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e174: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17e178: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e17c: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x17e17cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17e180: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17E180u;
    SET_GPR_U32(ctx, 31, 0x17E188u);
    ctx->pc = 0x17E184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E180u;
    // 0x17e184: 0xb5c3f  dsra32      $t3, $t3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17E180u, 0x17E188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E188u;
label_17e188:
    // 0x17e188: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x17e188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17e18c: 0x144c3c  dsll32      $t1, $s4, 16
    ctx->pc = 0x17e18cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 16));
    // 0x17e190: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x17e190u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x17e194: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e198: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e19c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17e19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1a0: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x17e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17e1a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x17e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17e1a8: 0x86a20012  lh          $v0, 0x12($s5)
    ctx->pc = 0x17e1a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x17e1ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17e1b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17e1b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17e1b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17e1b8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17e1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17e1bc: 0x86aa0008  lh          $t2, 0x8($s5)
    ctx->pc = 0x17e1bcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e1c0: 0x86ab000a  lh          $t3, 0xA($s5)
    ctx->pc = 0x17e1c0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x17e1c4: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17E1C4u;
    SET_GPR_U32(ctx, 31, 0x17E1CCu);
    ctx->pc = 0x17E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1C4u;
    // 0x17e1c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17E1C4u, 0x17E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1CCu;
label_17e1cc:
    // 0x17e1cc: 0x0  nop
    ctx->pc = 0x17e1ccu;
    // NOP
label_17e1d0:
    // 0x17e1d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17e1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e1d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17e1d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e1d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17e1d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e1dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17e1dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e1e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17e1e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e1e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17e1e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e1e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e1ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1F0u;
        // 0x17e1f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E1F8u;
}
