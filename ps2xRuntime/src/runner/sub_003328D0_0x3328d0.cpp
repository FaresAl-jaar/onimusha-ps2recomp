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

// Function: sub_003328D0
// Address: 0x3328d0 - 0x332a5c
void sub_003328D0_0x3328d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003328D0_0x3328d0");
#endif

    switch (ctx->pc) {
        case 0x3328e4u: goto label_3328e4;
        case 0x332930u: goto label_332930;
        case 0x332958u: goto label_332958;
        case 0x332980u: goto label_332980;
        case 0x3329a8u: goto label_3329a8;
        case 0x3329d0u: goto label_3329d0;
        default: break;
    }

    ctx->pc = 0x3328d0u;

    // 0x3328d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3328d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3328d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3328d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3328d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3328d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3328dc: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3328DCu;
    SET_GPR_U32(ctx, 31, 0x3328E4u);
    ctx->pc = 0x3328E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3328DCu;
    // 0x3328e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3328DCu, 0x3328E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3328E4u;
label_3328e4:
    // 0x3328e4: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3328e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3328e8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3328E8u;
    {
        const bool branch_taken_0x3328e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3328ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3328E8u;
        // 0x3328ec: 0x3c0444fa  lui         $a0, 0x44FA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3328e8) {
            ctx->pc = 0x332908u;
            goto label_332908;
        }
    }
    ctx->pc = 0x3328F0u;
    // 0x3328f0: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3328f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3328f4: 0xaca40084  sw          $a0, 0x84($a1)
    ctx->pc = 0x3328f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 4));
    // 0x3328f8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3328f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3328fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3328fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x332900: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x332900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x332904: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x332904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_332908:
    // 0x332908: 0xa2000162  sb          $zero, 0x162($s0)
    ctx->pc = 0x332908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 354), (uint8_t)GPR_U32(ctx, 0));
    // 0x33290c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33290cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332910: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x332910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x332914: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x332914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x332918: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x332918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x33291c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x33291cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x332920: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x332920u;
    {
        const bool branch_taken_0x332920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x332924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332920u;
        // 0x332924: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332920) {
            ctx->pc = 0x3329D0u;
            goto label_3329d0;
        }
    }
    ctx->pc = 0x332928u;
    // 0x332928: 0xc053b28  jal         func_14ECA0
    ctx->pc = 0x332928u;
    SET_GPR_U32(ctx, 31, 0x332930u);
    ctx->pc = 0x33292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332928u;
    // 0x33292c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x332928u, 0x332930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332930u;
label_332930:
    // 0x332930: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x332930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x332934: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x332934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x332938: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x332938u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x33293c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x33293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x332940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332944: 0x24c6a230  addiu       $a2, $a2, -0x5DD0
    ctx->pc = 0x332944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943280));
    // 0x332948: 0x2508a240  addiu       $t0, $t0, -0x5DC0
    ctx->pc = 0x332948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943296));
    // 0x33294c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x332950: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x332950u;
    SET_GPR_U32(ctx, 31, 0x332958u);
    ctx->pc = 0x332954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332950u;
    // 0x332954: 0x24470400  addiu       $a3, $v0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x332950u, 0x332958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332958u;
label_332958:
    // 0x332958: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x332958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33295c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x33295cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x332960: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x332960u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x332964: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x332964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x332968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33296c: 0x24c6a230  addiu       $a2, $a2, -0x5DD0
    ctx->pc = 0x33296cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943280));
    // 0x332970: 0x2508a250  addiu       $t0, $t0, -0x5DB0
    ctx->pc = 0x332970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943312));
    // 0x332974: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x332974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x332978: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x332978u;
    SET_GPR_U32(ctx, 31, 0x332980u);
    ctx->pc = 0x33297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332978u;
    // 0x33297c: 0x24470400  addiu       $a3, $v0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x332978u, 0x332980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332980u;
label_332980:
    // 0x332980: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x332980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x332984: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x332984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x332988: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x332988u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x33298c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x33298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x332990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332994: 0x24c6a230  addiu       $a2, $a2, -0x5DD0
    ctx->pc = 0x332994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943280));
    // 0x332998: 0x2508a260  addiu       $t0, $t0, -0x5DA0
    ctx->pc = 0x332998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943328));
    // 0x33299c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3329a0: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3329A0u;
    SET_GPR_U32(ctx, 31, 0x3329A8u);
    ctx->pc = 0x3329A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3329A0u;
    // 0x3329a4: 0x24470400  addiu       $a3, $v0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3329A0u, 0x3329A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3329A8u;
label_3329a8:
    // 0x3329a8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3329a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3329ac: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x3329acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x3329b0: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x3329b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x3329b4: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3329b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3329b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3329b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3329bc: 0x24c6a230  addiu       $a2, $a2, -0x5DD0
    ctx->pc = 0x3329bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943280));
    // 0x3329c0: 0x2508a270  addiu       $t0, $t0, -0x5D90
    ctx->pc = 0x3329c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943344));
    // 0x3329c4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3329c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3329c8: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3329C8u;
    SET_GPR_U32(ctx, 31, 0x3329D0u);
    ctx->pc = 0x3329CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3329C8u;
    // 0x3329cc: 0x24470400  addiu       $a3, $v0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3329C8u, 0x3329D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3329D0u;
label_3329d0:
    // 0x3329d0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3329d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x3329d4: 0xae0400e8  sw          $a0, 0xE8($s0)
    ctx->pc = 0x3329d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 4));
    // 0x3329d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3329d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3329dc: 0xae0406c0  sw          $a0, 0x6C0($s0)
    ctx->pc = 0x3329dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 4));
    // 0x3329e0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3329e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3329e4: 0xa2030730  sb          $v1, 0x730($s0)
    ctx->pc = 0x3329e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1840), (uint8_t)GPR_U32(ctx, 3));
    // 0x3329e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3329e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3329ec: 0xa2040731  sb          $a0, 0x731($s0)
    ctx->pc = 0x3329ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1841), (uint8_t)GPR_U32(ctx, 4));
    // 0x3329f0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3329f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3329f4: 0xa2030732  sb          $v1, 0x732($s0)
    ctx->pc = 0x3329f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1842), (uint8_t)GPR_U32(ctx, 3));
    // 0x3329f8: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x3329f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
    // 0x3329fc: 0xae040700  sw          $a0, 0x700($s0)
    ctx->pc = 0x3329fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 4));
    // 0x332a00: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x332a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x332a04: 0xae000704  sw          $zero, 0x704($s0)
    ctx->pc = 0x332a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
    // 0x332a08: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x332a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x332a0c: 0xae030708  sw          $v1, 0x708($s0)
    ctx->pc = 0x332a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 3));
    // 0x332a10: 0xae05070c  sw          $a1, 0x70C($s0)
    ctx->pc = 0x332a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 5));
    // 0x332a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332a18: 0xae040710  sw          $a0, 0x710($s0)
    ctx->pc = 0x332a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1808), GPR_U32(ctx, 4));
    // 0x332a1c: 0xae000714  sw          $zero, 0x714($s0)
    ctx->pc = 0x332a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1812), GPR_U32(ctx, 0));
    // 0x332a20: 0xae000718  sw          $zero, 0x718($s0)
    ctx->pc = 0x332a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 0));
    // 0x332a24: 0xae05071c  sw          $a1, 0x71C($s0)
    ctx->pc = 0x332a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1820), GPR_U32(ctx, 5));
    // 0x332a28: 0xae000720  sw          $zero, 0x720($s0)
    ctx->pc = 0x332a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1824), GPR_U32(ctx, 0));
    // 0x332a2c: 0xae000724  sw          $zero, 0x724($s0)
    ctx->pc = 0x332a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1828), GPR_U32(ctx, 0));
    // 0x332a30: 0xae040728  sw          $a0, 0x728($s0)
    ctx->pc = 0x332a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1832), GPR_U32(ctx, 4));
    // 0x332a34: 0xae05072c  sw          $a1, 0x72C($s0)
    ctx->pc = 0x332a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1836), GPR_U32(ctx, 5));
    // 0x332a38: 0xa2030734  sb          $v1, 0x734($s0)
    ctx->pc = 0x332a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1844), (uint8_t)GPR_U32(ctx, 3));
    // 0x332a3c: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x332a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x332a40: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x332a40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x332a44: 0x7e032b30  sq          $v1, 0x2B30($s0)
    ctx->pc = 0x332a44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11056), GPR_VEC(ctx, 3));
    // 0x332a48: 0xa2002b20  sb          $zero, 0x2B20($s0)
    ctx->pc = 0x332a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11040), (uint8_t)GPR_U32(ctx, 0));
    // 0x332a4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x332a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332a54: 0x3e00008  jr          $ra
    ctx->pc = 0x332A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A54u;
        // 0x332a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332A5Cu;
}
