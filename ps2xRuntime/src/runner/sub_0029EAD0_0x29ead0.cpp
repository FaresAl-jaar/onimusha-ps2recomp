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

// Function: sub_0029EAD0
// Address: 0x29ead0 - 0x29f000
void sub_0029EAD0_0x29ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EAD0_0x29ead0");
#endif

    switch (ctx->pc) {
        case 0x29eb20u: goto label_29eb20;
        case 0x29eb2cu: goto label_29eb2c;
        case 0x29ec20u: goto label_29ec20;
        case 0x29ed18u: goto label_29ed18;
        case 0x29ed88u: goto label_29ed88;
        default: break;
    }

    ctx->pc = 0x29ead0u;

    // 0x29ead0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x29ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x29ead4: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x29ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x29ead8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29eadc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29eae0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29eae4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x29eae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29eae8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29eaec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29eaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29eaf0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29eaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29eaf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29eaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29eaf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29eafc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29eafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29eb00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29eb04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29eb08: 0xafa401cc  sw          $a0, 0x1CC($sp)
    ctx->pc = 0x29eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 4));
    // 0x29eb0c: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x29eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x29eb10: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x29eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x29eb14: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x29eb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x29eb18: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x29eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x29eb1c: 0x0  nop
    ctx->pc = 0x29eb1cu;
    // NOP
label_29eb20:
    // 0x29eb20: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x29eb20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x29eb24: 0xc0a79d8  jal         func_29E760
    ctx->pc = 0x29EB24u;
    SET_GPR_U32(ctx, 31, 0x29EB2Cu);
    ctx->pc = 0x29EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB24u;
    // 0x29eb28: 0x8fa401cc  lw          $a0, 0x1CC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E760u, 0x29EB24u, 0x29EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB2Cu;
label_29eb2c:
    // 0x29eb2c: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x29eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x29eb30: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x29eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x29eb34: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x29eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x29eb38: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x29eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29eb3c: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x29eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x29eb40: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x29eb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29eb44: 0x8c6500e0  lw          $a1, 0xE0($v1)
    ctx->pc = 0x29eb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x29eb48: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x29eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29eb4c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x29eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29eb50: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x29eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x29eb54: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x29eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x29eb58: 0x3213c  dsll32      $a0, $v1, 4
    ctx->pc = 0x29eb58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 4));
    // 0x29eb5c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29eb60: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x29eb60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x29eb64: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x29eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x29eb68: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x29eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x29eb6c: 0x94630068  lhu         $v1, 0x68($v1)
    ctx->pc = 0x29eb6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x29eb70: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x29eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x29eb74: 0x3c106f18  lui         $s0, 0x6F18
    ctx->pc = 0x29eb74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28440 << 16));
    // 0x29eb78: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x29eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x29eb7c: 0x36148004  ori         $s4, $s0, 0x8004
    ctx->pc = 0x29eb7cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32772);
    // 0x29eb80: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x29eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x29eb84: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x29eb84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x29eb88: 0x3c036230  lui         $v1, 0x6230
    ctx->pc = 0x29eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25136 << 16));
    // 0x29eb8c: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x29eb8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x29eb90: 0x346ac001  ori         $t2, $v1, 0xC001
    ctx->pc = 0x29eb90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49153);
    // 0x29eb94: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x29eb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x29eb98: 0x3c037818  lui         $v1, 0x7818
    ctx->pc = 0x29eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30744 << 16));
    // 0x29eb9c: 0x3c10c0c0  lui         $s0, 0xC0C0
    ctx->pc = 0x29eb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49344 << 16));
    // 0x29eba0: 0x34678001  ori         $a3, $v1, 0x8001
    ctx->pc = 0x29eba0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x29eba4: 0x3610c0c0  ori         $s0, $s0, 0xC0C0
    ctx->pc = 0x29eba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)49344);
    // 0x29eba8: 0x34af0003  ori         $t7, $a1, 0x3
    ctx->pc = 0x29eba8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x29ebac: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x29ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x29ebb0: 0x34a90012  ori         $t1, $a1, 0x12
    ctx->pc = 0x29ebb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18);
    // 0x29ebb4: 0x3c106c01  lui         $s0, 0x6C01
    ctx->pc = 0x29ebb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27649 << 16));
    // 0x29ebb8: 0x34a60006  ori         $a2, $a1, 0x6
    ctx->pc = 0x29ebb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x29ebbc: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x29ebbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x29ebc0: 0x348b0204  ori         $t3, $a0, 0x204
    ctx->pc = 0x29ebc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)516);
    // 0x29ebc4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x29ebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x29ebc8: 0x34880104  ori         $t0, $a0, 0x104
    ctx->pc = 0x29ebc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)260);
    // 0x29ebcc: 0x5803c  dsll32      $s0, $a1, 0
    ctx->pc = 0x29ebccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29ebd0: 0x348e0404  ori         $t6, $a0, 0x404
    ctx->pc = 0x29ebd0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x29ebd4: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x29ebd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x29ebd8: 0x3c046518  lui         $a0, 0x6518
    ctx->pc = 0x29ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25880 << 16));
    // 0x29ebdc: 0x7fa50110  sq          $a1, 0x110($sp)
    ctx->pc = 0x29ebdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 5));
    // 0x29ebe0: 0x240c8000  addiu       $t4, $zero, -0x8000
    ctx->pc = 0x29ebe0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x29ebe4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x29ebe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29ebe8: 0x640d0018  daddiu      $t5, $zero, 0x18
    ctx->pc = 0x29ebe8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
    // 0x29ebec: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x29ebecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x29ebf0: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x29ebf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x29ebf4: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x29ebf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x29ebf8: 0x3484c003  ori         $a0, $a0, 0xC003
    ctx->pc = 0x29ebf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49155);
    // 0x29ebfc: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x29ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x29ec00: 0x3c182000  lui         $t8, 0x2000
    ctx->pc = 0x29ec00u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)8192 << 16));
    // 0x29ec04: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x29ec04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x29ec08: 0x3c171700  lui         $s7, 0x1700
    ctx->pc = 0x29ec08u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)5888 << 16));
    // 0x29ec0c: 0x7fa500f0  sq          $a1, 0xF0($sp)
    ctx->pc = 0x29ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 5));
    // 0x29ec10: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x29ec10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x29ec14: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x29ec14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x29ec18: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x29ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x29ec1c: 0x0  nop
    ctx->pc = 0x29ec1cu;
    // NOP
label_29ec20:
    // 0x29ec20: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x29ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29ec24: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29ec24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec28: 0xaca20078  sw          $v0, 0x78($a1)
    ctx->pc = 0x29ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 2));
    // 0x29ec2c: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x29ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29ec30: 0xaca20060  sw          $v0, 0x60($a1)
    ctx->pc = 0x29ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 2));
    // 0x29ec34: 0x8fb001b0  lw          $s0, 0x1B0($sp)
    ctx->pc = 0x29ec34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29ec38: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x29ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29ec3c: 0x24b20010  addiu       $s2, $a1, 0x10
    ctx->pc = 0x29ec3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x29ec40: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x29ec40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x29ec44: 0x13893c  dsll32      $s1, $s3, 4
    ctx->pc = 0x29ec44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 4));
    // 0x29ec48: 0x11893e  dsrl32      $s1, $s1, 4
    ctx->pc = 0x29ec48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
    // 0x29ec4c: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x29ec4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x29ec50: 0x261000f0  addiu       $s0, $s0, 0xF0
    ctx->pc = 0x29ec50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x29ec54: 0x10813c  dsll32      $s0, $s0, 4
    ctx->pc = 0x29ec54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 4));
    // 0x29ec58: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x29ec58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
    // 0x29ec5c: 0x10a83c  dsll32      $s5, $s0, 0
    ctx->pc = 0x29ec5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) << (32 + 0));
    // 0x29ec60: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x29ec60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29ec64: 0x2b08025  or          $s0, $s5, $s0
    ctx->pc = 0x29ec64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
    // 0x29ec68: 0xfc500000  sd          $s0, 0x0($v0)
    ctx->pc = 0x29ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 16));
    // 0x29ec6c: 0x3c105000  lui         $s0, 0x5000
    ctx->pc = 0x29ec6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20480 << 16));
    // 0x29ec70: 0x2308825  or          $s1, $s1, $s0
    ctx->pc = 0x29ec70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x29ec74: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x29ec74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x29ec78: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x29ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x29ec7c: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x29ec7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x29ec80: 0x10a93c  dsll32      $s5, $s0, 4
    ctx->pc = 0x29ec80u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) << (32 + 4));
    // 0x29ec84: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x29ec84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29ec88: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x29ec88u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x29ec8c: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x29ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x29ec90: 0x8fb00130  lw          $s0, 0x130($sp)
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29ec94: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x29ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
    // 0x29ec98: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x29ec98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29ec9c: 0xb88025  or          $s0, $a1, $t8
    ctx->pc = 0x29ec9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 24));
    // 0x29eca0: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x29eca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29eca4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x29eca4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29eca8: 0x8fa501cc  lw          $a1, 0x1CC($sp)
    ctx->pc = 0x29eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x29ecac: 0x8cb50118  lw          $s5, 0x118($a1)
    ctx->pc = 0x29ecacu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x29ecb0: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x29ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x29ecb4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x29ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29ecb8: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x29ecb8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x29ecbc: 0xdeb50000  ld          $s5, 0x0($s5)
    ctx->pc = 0x29ecbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x29ecc0: 0xfc550010  sd          $s5, 0x10($v0)
    ctx->pc = 0x29ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 21));
    // 0x29ecc4: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x29ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x29ecc8: 0x8fb50130  lw          $s5, 0x130($sp)
    ctx->pc = 0x29ecc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29eccc: 0xaeb20088  sw          $s2, 0x88($s5)
    ctx->pc = 0x29ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 18));
    // 0x29ecd0: 0xfc510020  sd          $s1, 0x20($v0)
    ctx->pc = 0x29ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 17));
    // 0x29ecd4: 0xfc400028  sd          $zero, 0x28($v0)
    ctx->pc = 0x29ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
    // 0x29ecd8: 0xfc500030  sd          $s0, 0x30($v0)
    ctx->pc = 0x29ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 16));
    // 0x29ecdc: 0xfc400038  sd          $zero, 0x38($v0)
    ctx->pc = 0x29ecdcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 0));
    // 0x29ece0: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x29ece0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x29ece4: 0xfc500040  sd          $s0, 0x40($v0)
    ctx->pc = 0x29ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 16));
    // 0x29ece8: 0xfc400048  sd          $zero, 0x48($v0)
    ctx->pc = 0x29ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 0));
    // 0x29ecec: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29ecf0: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x29ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
    // 0x29ecf4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x29ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29ecf8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x29ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29ecfc: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x29ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x29ed00: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29ed04: 0xac530068  sw          $s3, 0x68($v0)
    ctx->pc = 0x29ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 19));
    // 0x29ed08: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x29ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29ed0c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x29ed0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x29ed10: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x29ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x29ed14: 0x0  nop
    ctx->pc = 0x29ed14u;
    // NOP
label_29ed18:
    // 0x29ed18: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x29ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29ed1c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x29ed1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x29ed20: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x29ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x29ed24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x29ed24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29ed28: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x29ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29ed2c: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x29ed2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29ed30: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x29ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x29ed34: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x29ed34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29ed38: 0x5113c  dsll32      $v0, $a1, 4
    ctx->pc = 0x29ed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 4));
    // 0x29ed3c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x29ed3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ed40: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x29ed40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x29ed44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29ed48: 0x4f2825  or          $a1, $v0, $t7
    ctx->pc = 0x29ed48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x29ed4c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x29ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x29ed50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed54: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x29ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x29ed58: 0xfe650000  sd          $a1, 0x0($s3)
    ctx->pc = 0x29ed58u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 5));
    // 0x29ed5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x29ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x29ed60: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x29ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x29ed64: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x29ed64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29ed68: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x29ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x29ed6c: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x29ed6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29ed70: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x29ed70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x29ed74: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x29ed74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29ed78: 0x8e59000c  lw          $t9, 0xC($s2)
    ctx->pc = 0x29ed78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x29ed7c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x29ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x29ed80: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x29ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x29ed84: 0x96520000  lhu         $s2, 0x0($s2)
    ctx->pc = 0x29ed84u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_29ed88:
    // 0x29ed88: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x29ed88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29ed8c: 0xfe750000  sd          $s5, 0x0($s3)
    ctx->pc = 0x29ed8cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 21));
    // 0x29ed90: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x29ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x29ed94: 0x2a550018  slti        $s5, $s2, 0x18
    ctx->pc = 0x29ed94u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x29ed98: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x29ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x29ed9c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x29ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x29eda0: 0xae780010  sw          $t8, 0x10($s3)
    ctx->pc = 0x29eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 24));
    // 0x29eda4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x29eda4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29eda8: 0xae750014  sw          $s5, 0x14($s3)
    ctx->pc = 0x29eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 21));
    // 0x29edac: 0xae6e0018  sw          $t6, 0x18($s3)
    ctx->pc = 0x29edacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 14));
    // 0x29edb0: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x29edb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29edb4: 0xae75001c  sw          $s5, 0x1C($s3)
    ctx->pc = 0x29edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 21));
    // 0x29edb8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x29edb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29edbc: 0xfe750020  sd          $s5, 0x20($s3)
    ctx->pc = 0x29edbcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 21));
    // 0x29edc0: 0xfe600028  sd          $zero, 0x28($s3)
    ctx->pc = 0x29edc0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 0));
    // 0x29edc4: 0x2415fff0  addiu       $s5, $zero, -0x10
    ctx->pc = 0x29edc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29edc8: 0x92760028  lbu         $s6, 0x28($s3)
    ctx->pc = 0x29edc8u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x29edcc: 0x2d5b024  and         $s6, $s6, $s5
    ctx->pc = 0x29edccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 21));
    // 0x29edd0: 0x64150002  daddiu      $s5, $zero, 0x2
    ctx->pc = 0x29edd0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x29edd4: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x29edd4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x29edd8: 0xa2750028  sb          $s5, 0x28($s3)
    ctx->pc = 0x29edd8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 21));
    // 0x29eddc: 0x92760028  lbu         $s6, 0x28($s3)
    ctx->pc = 0x29eddcu;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x29ede0: 0x2415ff0f  addiu       $s5, $zero, -0xF1
    ctx->pc = 0x29ede0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x29ede4: 0x2d5b024  and         $s6, $s6, $s5
    ctx->pc = 0x29ede4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 21));
    // 0x29ede8: 0x64150010  daddiu      $s5, $zero, 0x10
    ctx->pc = 0x29ede8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x29edec: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x29edecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x29edf0: 0xa2750028  sb          $s5, 0x28($s3)
    ctx->pc = 0x29edf0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 21));
    // 0x29edf4: 0x92760029  lbu         $s6, 0x29($s3)
    ctx->pc = 0x29edf4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x29edf8: 0x2415fff0  addiu       $s5, $zero, -0x10
    ctx->pc = 0x29edf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29edfc: 0x2d5b024  and         $s6, $s6, $s5
    ctx->pc = 0x29edfcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 21));
    // 0x29ee00: 0x64150004  daddiu      $s5, $zero, 0x4
    ctx->pc = 0x29ee00u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x29ee04: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x29ee04u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x29ee08: 0xa2750029  sb          $s5, 0x29($s3)
    ctx->pc = 0x29ee08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 21));
    // 0x29ee0c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x29ee0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29ee10: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EE10u;
    {
        const bool branch_taken_0x29ee10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ee10) {
            ctx->pc = 0x29EE30u;
            goto label_29ee30;
        }
    }
    ctx->pc = 0x29EE18u;
    // 0x29ee18: 0x96750020  lhu         $s5, 0x20($s3)
    ctx->pc = 0x29ee18u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x29ee1c: 0x2aca824  and         $s5, $s5, $t4
    ctx->pc = 0x29ee1cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 12));
    // 0x29ee20: 0x2ada825  or          $s5, $s5, $t5
    ctx->pc = 0x29ee20u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 13));
    // 0x29ee24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29EE24u;
    {
        const bool branch_taken_0x29ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE24u;
        // 0x29ee28: 0xa6750020  sh          $s5, 0x20($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee24) {
            ctx->pc = 0x29EE48u;
            goto label_29ee48;
        }
    }
    ctx->pc = 0x29EE2Cu;
    // 0x29ee2c: 0x0  nop
    ctx->pc = 0x29ee2cu;
    // NOP
label_29ee30:
    // 0x29ee30: 0x96750020  lhu         $s5, 0x20($s3)
    ctx->pc = 0x29ee30u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x29ee34: 0x32567fff  andi        $s6, $s2, 0x7FFF
    ctx->pc = 0x29ee34u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32767);
    // 0x29ee38: 0x2aca824  and         $s5, $s5, $t4
    ctx->pc = 0x29ee38u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 12));
    // 0x29ee3c: 0x2b6a825  or          $s5, $s5, $s6
    ctx->pc = 0x29ee3cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 22));
    // 0x29ee40: 0xa6750020  sh          $s5, 0x20($s3)
    ctx->pc = 0x29ee40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 21));
    // 0x29ee44: 0x0  nop
    ctx->pc = 0x29ee44u;
    // NOP
label_29ee48:
    // 0x29ee48: 0x5a93c  dsll32      $s5, $a1, 4
    ctx->pc = 0x29ee48u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) << (32 + 4));
    // 0x29ee4c: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x29ee4cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x29ee50: 0x11b13c  dsll32      $s6, $s1, 4
    ctx->pc = 0x29ee50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) << (32 + 4));
    // 0x29ee54: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x29ee54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29ee58: 0x16b13e  dsrl32      $s6, $s6, 4
    ctx->pc = 0x29ee58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 4));
    // 0x29ee5c: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x29ee5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x29ee60: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x29ee60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29ee64: 0xfe750030  sd          $s5, 0x30($s3)
    ctx->pc = 0x29ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 21));
    // 0x29ee68: 0x2652ffe8  addiu       $s2, $s2, -0x18
    ctx->pc = 0x29ee68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
    // 0x29ee6c: 0x2c9a825  or          $s5, $s6, $t1
    ctx->pc = 0x29ee6cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 9));
    // 0x29ee70: 0xae6b0038  sw          $t3, 0x38($s3)
    ctx->pc = 0x29ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 11));
    // 0x29ee74: 0x19b13c  dsll32      $s6, $t9, 4
    ctx->pc = 0x29ee74u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 25) << (32 + 4));
    // 0x29ee78: 0xae6a003c  sw          $t2, 0x3C($s3)
    ctx->pc = 0x29ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 10));
    // 0x29ee7c: 0x16b13e  dsrl32      $s6, $s6, 4
    ctx->pc = 0x29ee7cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 4));
    // 0x29ee80: 0xfe750040  sd          $s5, 0x40($s3)
    ctx->pc = 0x29ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 21));
    // 0x29ee84: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x29ee84u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29ee88: 0xae680048  sw          $t0, 0x48($s3)
    ctx->pc = 0x29ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 8));
    // 0x29ee8c: 0x2c6a825  or          $s5, $s6, $a2
    ctx->pc = 0x29ee8cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 6));
    // 0x29ee90: 0xae67004c  sw          $a3, 0x4C($s3)
    ctx->pc = 0x29ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 7));
    // 0x29ee94: 0x10b13c  dsll32      $s6, $s0, 4
    ctx->pc = 0x29ee94u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 4));
    // 0x29ee98: 0xfe750050  sd          $s5, 0x50($s3)
    ctx->pc = 0x29ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 80), GPR_U64(ctx, 21));
    // 0x29ee9c: 0x16b13e  dsrl32      $s6, $s6, 4
    ctx->pc = 0x29ee9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 4));
    // 0x29eea0: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x29eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
    // 0x29eea4: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x29eea4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29eea8: 0xae64005c  sw          $a0, 0x5C($s3)
    ctx->pc = 0x29eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 4));
    // 0x29eeac: 0x2c9a825  or          $s5, $s6, $t1
    ctx->pc = 0x29eeacu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 9));
    // 0x29eeb0: 0x26310120  addiu       $s1, $s1, 0x120
    ctx->pc = 0x29eeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x29eeb4: 0x2b13c  dsll32      $s6, $v0, 4
    ctx->pc = 0x29eeb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 4));
    // 0x29eeb8: 0xfe750060  sd          $s5, 0x60($s3)
    ctx->pc = 0x29eeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 21));
    // 0x29eebc: 0x16b13e  dsrl32      $s6, $s6, 4
    ctx->pc = 0x29eebcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 4));
    // 0x29eec0: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x29eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x29eec4: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x29eec4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29eec8: 0xae63006c  sw          $v1, 0x6C($s3)
    ctx->pc = 0x29eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 3));
    // 0x29eecc: 0x2cfa825  or          $s5, $s6, $t7
    ctx->pc = 0x29eeccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 15));
    // 0x29eed0: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x29eed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x29eed4: 0x26760090  addiu       $s6, $s3, 0x90
    ctx->pc = 0x29eed4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x29eed8: 0xfe750070  sd          $s5, 0x70($s3)
    ctx->pc = 0x29eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 21));
    // 0x29eedc: 0x16b13c  dsll32      $s6, $s6, 4
    ctx->pc = 0x29eedcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 4));
    // 0x29eee0: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x29eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x29eee4: 0x16b13e  dsrl32      $s6, $s6, 4
    ctx->pc = 0x29eee4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 4));
    // 0x29eee8: 0xae74007c  sw          $s4, 0x7C($s3)
    ctx->pc = 0x29eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 20));
    // 0x29eeec: 0x16a83c  dsll32      $s5, $s6, 0
    ctx->pc = 0x29eeecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29eef0: 0x27390060  addiu       $t9, $t9, 0x60
    ctx->pc = 0x29eef0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 96));
    // 0x29eef4: 0x2b8a825  or          $s5, $s5, $t8
    ctx->pc = 0x29eef4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 24));
    // 0x29eef8: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x29eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x29eefc: 0xfe750080  sd          $s5, 0x80($s3)
    ctx->pc = 0x29eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 128), GPR_U64(ctx, 21));
    // 0x29ef00: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x29ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29ef04: 0xae770088  sw          $s7, 0x88($s3)
    ctx->pc = 0x29ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 23));
    // 0x29ef08: 0xae6e008c  sw          $t6, 0x8C($s3)
    ctx->pc = 0x29ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 14));
    // 0x29ef0c: 0x1e40ff9e  bgtz        $s2, . + 4 + (-0x62 << 2)
    ctx->pc = 0x29EF0Cu;
    {
        const bool branch_taken_0x29ef0c = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x29EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF0Cu;
        // 0x29ef10: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef0c) {
            ctx->pc = 0x29ED88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ed88;
        }
    }
    ctx->pc = 0x29EF14u;
    // 0x29ef14: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x29ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x29ef18: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x29ef18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x29ef1c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x29ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x29ef20: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x29ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x29ef24: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x29ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x29ef28: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x29ef28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29ef2c: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x29EF2Cu;
    {
        const bool branch_taken_0x29ef2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF2Cu;
        // 0x29ef30: 0x3c026000  lui         $v0, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef2c) {
            ctx->pc = 0x29ED18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ed18;
        }
    }
    ctx->pc = 0x29EF34u;
    // 0x29ef34: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x29ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x29ef38: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x29ef38u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x29ef3c: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x29ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x29ef40: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x29ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29ef44: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x29ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x29ef48: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x29ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x29ef4c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x29ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x29ef50: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x29ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29ef54: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x29ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x29ef58: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x29ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
    // 0x29ef5c: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x29ef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x29ef60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29ef64: 0xafa50190  sw          $a1, 0x190($sp)
    ctx->pc = 0x29ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
    // 0x29ef68: 0x8fb00190  lw          $s0, 0x190($sp)
    ctx->pc = 0x29ef68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x29ef6c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x29ef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x29ef70: 0x205282b  sltu        $a1, $s0, $a1
    ctx->pc = 0x29ef70u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x29ef74: 0x14a0ff2a  bnez        $a1, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x29EF74u;
    {
        const bool branch_taken_0x29ef74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF74u;
        // 0x29ef78: 0x26620010  addiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef74) {
            ctx->pc = 0x29EC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ec20;
        }
    }
    ctx->pc = 0x29EF7Cu;
    // 0x29ef7c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x29ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x29ef80: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x29ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29ef84: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x29ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29ef88: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x29ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29ef8c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x29ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x29ef90: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x29ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x29ef94: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x29ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x29ef98: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29ef9c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x29ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x29efa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29efa4: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x29efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x29efa8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x29efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x29efac: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x29efacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x29efb0: 0x2c640002  sltiu       $a0, $v1, 0x2
    ctx->pc = 0x29efb0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29efb4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x29efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29efb8: 0xac6200e8  sw          $v0, 0xE8($v1)
    ctx->pc = 0x29efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 2));
    // 0x29efbc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x29efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29efc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29efc4: 0x1480fed6  bnez        $a0, . + 4 + (-0x12A << 2)
    ctx->pc = 0x29EFC4u;
    {
        const bool branch_taken_0x29efc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFC4u;
        // 0x29efc8: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29efc4) {
            ctx->pc = 0x29EB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29eb20;
        }
    }
    ctx->pc = 0x29EFCCu;
    // 0x29efcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29efccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29efd0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29efd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29efd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29efd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29efd8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29efd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29efdc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29efdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29efe0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29efe0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29efe4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29efe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29efe8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29efe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29efec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29efecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29eff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29eff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29eff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29eff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eff8: 0x3e00008  jr          $ra
    ctx->pc = 0x29EFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFF8u;
        // 0x29effc: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F000u;
}
