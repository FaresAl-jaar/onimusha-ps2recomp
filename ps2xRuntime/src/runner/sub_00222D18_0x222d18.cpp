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

// Function: sub_00222D18
// Address: 0x222d18 - 0x222ef0
void sub_00222D18_0x222d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222D18_0x222d18");
#endif

    switch (ctx->pc) {
        case 0x222d70u: goto label_222d70;
        case 0x222d84u: goto label_222d84;
        case 0x222e74u: goto label_222e74;
        case 0x222e8cu: goto label_222e8c;
        default: break;
    }

    ctx->pc = 0x222d18u;

    // 0x222d18: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x222d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x222d1c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x222d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x222d20: 0xffbe0200  sd          $fp, 0x200($sp)
    ctx->pc = 0x222d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 30));
    // 0x222d24: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x222d24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d28: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x222d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x222d2c: 0x2463a234  addiu       $v1, $v1, -0x5DCC
    ctx->pc = 0x222d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943284));
    // 0x222d30: 0xffb101c8  sd          $s1, 0x1C8($sp)
    ctx->pc = 0x222d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 17));
    // 0x222d34: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x222d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x222d38: 0xffb301d8  sd          $s3, 0x1D8($sp)
    ctx->pc = 0x222d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 19));
    // 0x222d3c: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x222d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x222d40: 0xffb501e8  sd          $s5, 0x1E8($sp)
    ctx->pc = 0x222d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 21));
    // 0x222d44: 0xffb601f0  sd          $s6, 0x1F0($sp)
    ctx->pc = 0x222d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 22));
    // 0x222d48: 0xffb701f8  sd          $s7, 0x1F8($sp)
    ctx->pc = 0x222d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 23));
    // 0x222d4c: 0xffbf0208  sd          $ra, 0x208($sp)
    ctx->pc = 0x222d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 31));
    // 0x222d50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222d50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BA234u));
    // 0x222d54: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x222D54u;
    {
        const bool branch_taken_0x222d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D54u;
        // 0x222d58: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d54) {
            ctx->pc = 0x222EC0u;
            goto label_222ec0;
        }
    }
    ctx->pc = 0x222D5Cu;
    // 0x222d5c: 0x8fc60120  lw          $a2, 0x120($fp)
    ctx->pc = 0x222d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x222d60: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x222d60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x222d64: 0x8fc50118  lw          $a1, 0x118($fp)
    ctx->pc = 0x222d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x222d68: 0xc080568  jal         func_2015A0
    ctx->pc = 0x222D68u;
    SET_GPR_U32(ctx, 31, 0x222D70u);
    ctx->pc = 0x222D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D68u;
    // 0x222d6c: 0x26108df8  addiu       $s0, $s0, -0x7208 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x222D68u, 0x222D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D70u;
label_222d70:
    // 0x222d70: 0xdfd10118  ld          $s1, 0x118($fp)
    ctx->pc = 0x222d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x222d74: 0xdfc50120  ld          $a1, 0x120($fp)
    ctx->pc = 0x222d74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x222d78: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x222d78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d7c: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x222D7Cu;
    SET_GPR_U32(ctx, 31, 0x222D84u);
    ctx->pc = 0x222D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D7Cu;
    // 0x222d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x222D7Cu, 0x222D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D84u;
label_222d84:
    // 0x222d84: 0x3c0b7fff  lui         $t3, 0x7FFF
    ctx->pc = 0x222d84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32767 << 16));
    // 0x222d88: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x222d88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x222d8c: 0xdfc40188  ld          $a0, 0x188($fp)
    ctx->pc = 0x222d8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x222d90: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x222d90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d94: 0xdfc30128  ld          $v1, 0x128($fp)
    ctx->pc = 0x222d94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 296)));
    // 0x222d98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x222d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d9c: 0xffa401a0  sd          $a0, 0x1A0($sp)
    ctx->pc = 0x222d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 4));
    // 0x222da0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x222da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222da4: 0x11483f  dsra32      $t1, $s1, 0
    ctx->pc = 0x222da4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x222da8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x222da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222dac: 0xdfd20108  ld          $s2, 0x108($fp)
    ctx->pc = 0x222dacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 30), 264)));
    // 0x222db0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x222db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222db4: 0x14b5824  and         $t3, $t2, $t3
    ctx->pc = 0x222db4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x222db8: 0xffb201a8  sd          $s2, 0x1A8($sp)
    ctx->pc = 0x222db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 18));
    // 0x222dbc: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x222dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x222dc0: 0x8fc401ac  lw          $a0, 0x1AC($fp)
    ctx->pc = 0x222dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 428)));
    // 0x222dc4: 0x243b82f  dsubu       $s7, $s2, $v1
    ctx->pc = 0x222dc4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) - GPR_U64(ctx, 3));
    // 0x222dc8: 0xffa401b0  sd          $a0, 0x1B0($sp)
    ctx->pc = 0x222dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 4));
    // 0x222dcc: 0xdfa401a8  ld          $a0, 0x1A8($sp)
    ctx->pc = 0x222dccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x222dd0: 0x8fcd0198  lw          $t5, 0x198($fp)
    ctx->pc = 0x222dd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 408)));
    // 0x222dd4: 0x83902f  dsubu       $s2, $a0, $v1
    ctx->pc = 0x222dd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x222dd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x222dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222ddc: 0x8fce01a4  lw          $t6, 0x1A4($fp)
    ctx->pc = 0x222ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 420)));
    // 0x222de0: 0x8fd901b0  lw          $t9, 0x1B0($fp)
    ctx->pc = 0x222de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 432)));
    // 0x222de4: 0x8fd801b4  lw          $t8, 0x1B4($fp)
    ctx->pc = 0x222de4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 436)));
    // 0x222de8: 0x8fcf01a0  lw          $t7, 0x1A0($fp)
    ctx->pc = 0x222de8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 416)));
    // 0x222dec: 0x8fcc0194  lw          $t4, 0x194($fp)
    ctx->pc = 0x222decu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 404)));
    // 0x222df0: 0x8fd101a8  lw          $s1, 0x1A8($fp)
    ctx->pc = 0x222df0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 424)));
    // 0x222df4: 0x8fd0019c  lw          $s0, 0x19C($fp)
    ctx->pc = 0x222df4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 412)));
    // 0x222df8: 0x8fc20190  lw          $v0, 0x190($fp)
    ctx->pc = 0x222df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 400)));
    // 0x222dfc: 0x8fd501b8  lw          $s5, 0x1B8($fp)
    ctx->pc = 0x222dfcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 440)));
    // 0x222e00: 0x9fd40004  lwu         $s4, 0x4($fp)
    ctx->pc = 0x222e00u;
    SET_GPR_ZE32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x222e04: 0x9fd30008  lwu         $s3, 0x8($fp)
    ctx->pc = 0x222e04u;
    SET_GPR_ZE32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x222e08: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x222e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
    // 0x222e0c: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x222e0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x222e10: 0xffb00058  sd          $s0, 0x58($sp)
    ctx->pc = 0x222e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 16));
    // 0x222e14: 0xffb20028  sd          $s2, 0x28($sp)
    ctx->pc = 0x222e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 18));
    // 0x222e18: 0xffa20068  sd          $v0, 0x68($sp)
    ctx->pc = 0x222e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 2));
    // 0x222e1c: 0xffb70020  sd          $s7, 0x20($sp)
    ctx->pc = 0x222e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 23));
    // 0x222e20: 0xffb90030  sd          $t9, 0x30($sp)
    ctx->pc = 0x222e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 25));
    // 0x222e24: 0xffb80038  sd          $t8, 0x38($sp)
    ctx->pc = 0x222e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 24));
    // 0x222e28: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x222e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x222e2c: 0xffb40048  sd          $s4, 0x48($sp)
    ctx->pc = 0x222e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 20));
    // 0x222e30: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x222e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x222e34: 0xffaf0060  sd          $t7, 0x60($sp)
    ctx->pc = 0x222e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 15));
    // 0x222e38: 0xffac0070  sd          $t4, 0x70($sp)
    ctx->pc = 0x222e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 12));
    // 0x222e3c: 0xdfa201a0  ld          $v0, 0x1A0($sp)
    ctx->pc = 0x222e3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x222e40: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x222e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x222e44: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x222e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x222e48: 0xdfb201a8  ld          $s2, 0x1A8($sp)
    ctx->pc = 0x222e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x222e4c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x222e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x222e50: 0x8c629fa8  lw          $v0, -0x6058($v1)
    ctx->pc = 0x222e50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B9FA8u));
    // 0x222e54: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x222e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x222e58: 0x3c12004c  lui         $s2, 0x4C
    ctx->pc = 0x222e58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
    // 0x222e5c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x222e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x222e60: 0x2652a234  addiu       $s2, $s2, -0x5DCC
    ctx->pc = 0x222e60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943284));
    // 0x222e64: 0xffad0078  sd          $t5, 0x78($sp)
    ctx->pc = 0x222e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 13));
    // 0x222e68: 0xffae0080  sd          $t6, 0x80($sp)
    ctx->pc = 0x222e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 14));
    // 0x222e6c: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x222E6Cu;
    SET_GPR_U32(ctx, 31, 0x222E74u);
    ctx->pc = 0x222E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E6Cu;
    // 0x222e70: 0xffa20090  sd          $v0, 0x90($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x222E6Cu, 0x222E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E74u;
label_222e74:
    // 0x222e74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e78: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x222e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x222e7c: 0x2451a23c  addiu       $s1, $v0, -0x5DC4
    ctx->pc = 0x222e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943292));
    // 0x222e80: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x222e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222e84: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x222E84u;
    SET_GPR_U32(ctx, 31, 0x222E8Cu);
    ctx->pc = 0x222E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E84u;
    // 0x222e88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x222E84u, 0x222E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E8Cu;
label_222e8c:
    // 0x222e8c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x222e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x222e90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x222e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222e94: 0x8c85a230  lw          $a1, -0x5DD0($a0)
    ctx->pc = 0x222e94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BA230u));
    // 0x222e98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x222e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x222e9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x222e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x222ea0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x222ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x222ea4: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x222ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x222ea8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x222ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x222eac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x222EACu;
    {
        const bool branch_taken_0x222eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EACu;
        // 0x222eb0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222eac) {
            ctx->pc = 0x222EC0u;
            goto label_222ec0;
        }
    }
    ctx->pc = 0x222EB4u;
    // 0x222eb4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x222eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x222eb8: 0x8c43a240  lw          $v1, -0x5DC0($v0)
    ctx->pc = 0x222eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BA240u));
    // 0x222ebc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x222ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_222ec0:
    // 0x222ec0: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x222ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x222ec4: 0xdfb101c8  ld          $s1, 0x1C8($sp)
    ctx->pc = 0x222ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x222ec8: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x222ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x222ecc: 0xdfb301d8  ld          $s3, 0x1D8($sp)
    ctx->pc = 0x222eccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x222ed0: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x222ed0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x222ed4: 0xdfb501e8  ld          $s5, 0x1E8($sp)
    ctx->pc = 0x222ed4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x222ed8: 0xdfb601f0  ld          $s6, 0x1F0($sp)
    ctx->pc = 0x222ed8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x222edc: 0xdfb701f8  ld          $s7, 0x1F8($sp)
    ctx->pc = 0x222edcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x222ee0: 0xdfbe0200  ld          $fp, 0x200($sp)
    ctx->pc = 0x222ee0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x222ee4: 0xdfbf0208  ld          $ra, 0x208($sp)
    ctx->pc = 0x222ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x222ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x222EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EE8u;
        // 0x222eec: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222EF0u;
}
