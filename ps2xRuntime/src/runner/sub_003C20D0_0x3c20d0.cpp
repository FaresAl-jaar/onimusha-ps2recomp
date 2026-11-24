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

// Function: sub_003C20D0
// Address: 0x3c20d0 - 0x3c2318
void sub_003C20D0_0x3c20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C20D0_0x3c20d0");
#endif

    switch (ctx->pc) {
        case 0x3c2138u: goto label_3c2138;
        case 0x3c2160u: goto label_3c2160;
        case 0x3c21a0u: goto label_3c21a0;
        case 0x3c21d0u: goto label_3c21d0;
        case 0x3c21ecu: goto label_3c21ec;
        case 0x3c21fcu: goto label_3c21fc;
        case 0x3c2204u: goto label_3c2204;
        case 0x3c228cu: goto label_3c228c;
        case 0x3c22b0u: goto label_3c22b0;
        case 0x3c22bcu: goto label_3c22bc;
        case 0x3c22d8u: goto label_3c22d8;
        default: break;
    }

    ctx->pc = 0x3c20d0u;

    // 0x3c20d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3c20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3c20d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3c20d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3c20d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3c20d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3c20dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3c20dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3c20e0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3c20e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c20e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c20e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3c20e8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3c20e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c20ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c20ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3c20f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3c20f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c20f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c20f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3c20f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3c20f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c20fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c20fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c2100: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3c2100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2104: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c2104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c2108: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3c2108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c210c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3c210cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2110: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c2110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c2114: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x3c2114u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x3c2118: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3c2118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c211c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c2120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c2124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2128: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x3c2128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x3c212c: 0x25082060  addiu       $t0, $t0, 0x2060
    ctx->pc = 0x3c212cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8288));
    // 0x3c2130: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3C2130u;
    SET_GPR_U32(ctx, 31, 0x3C2138u);
    ctx->pc = 0x3C2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2130u;
    // 0x3c2134: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3C2130u, 0x3C2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2138u;
label_3c2138:
    // 0x3c2138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c213c: 0x12000068  beqz        $s0, . + 4 + (0x68 << 2)
    ctx->pc = 0x3C213Cu;
    {
        const bool branch_taken_0x3c213c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C213Cu;
        // 0x3c2140: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c213c) {
            ctx->pc = 0x3C22E0u;
            goto label_3c22e0;
        }
    }
    ctx->pc = 0x3C2144u;
    // 0x3c2144: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3c2144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c214c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3c214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3c2150: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x3c2150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3c2154: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3c2154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2158: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3C2158u;
    SET_GPR_U32(ctx, 31, 0x3C2160u);
    ctx->pc = 0x3C215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2158u;
    // 0x3c215c: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3C2158u, 0x3C2160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2160u;
label_3c2160:
    // 0x3c2160: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3c2160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3c2164: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c2164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c2168: 0x3a8c0  sll         $s5, $v1, 3
    ctx->pc = 0x3c2168u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3c216c: 0x24422db8  addiu       $v0, $v0, 0x2DB8
    ctx->pc = 0x3c216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11704));
    // 0x3c2170: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3c2170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3c2174: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3c2174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3c2178: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x3c2178u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c217c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c217cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c2180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2184: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x3c2184u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x3c2188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c218c: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x3c218cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c2190: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3c2190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c2194: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3c2194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c2198: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3C2198u;
    SET_GPR_U32(ctx, 31, 0x3C21A0u);
    ctx->pc = 0x3C219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2198u;
    // 0x3c219c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3C2198u, 0x3C21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C21A0u;
label_3c21a0:
    // 0x3c21a0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3c21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3c21a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c21a8: 0xae020570  sw          $v0, 0x570($s0)
    ctx->pc = 0x3c21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 2));
    // 0x3c21ac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3c21acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c21b0: 0xa21e0574  sb          $fp, 0x574($s0)
    ctx->pc = 0x3c21b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1396), (uint8_t)GPR_U32(ctx, 30));
    // 0x3c21b4: 0x27b600b4  addiu       $s6, $sp, 0xB4
    ctx->pc = 0x3c21b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x3c21b8: 0xa2110575  sb          $s1, 0x575($s0)
    ctx->pc = 0x3c21b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1397), (uint8_t)GPR_U32(ctx, 17));
    // 0x3c21bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c21bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c21c0: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x3c21c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3c21c4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c21c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3c21c8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3C21C8u;
    SET_GPR_U32(ctx, 31, 0x3C21D0u);
    ctx->pc = 0x3C21CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C21C8u;
    // 0x3c21cc: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3C21C8u, 0x3C21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C21D0u;
label_3c21d0:
    // 0x3c21d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3c21d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3c21d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c21d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c21d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c21dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c21dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c21e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c21e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c21e4: 0xc096f00  jal         func_25BC00
    ctx->pc = 0x3C21E4u;
    SET_GPR_U32(ctx, 31, 0x3C21ECu);
    ctx->pc = 0x3C21E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C21E4u;
    // 0x3c21e8: 0x26670020  addiu       $a3, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC00u, 0x3C21E4u, 0x3C21ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C21ECu;
label_3c21ec:
    // 0x3c21ec: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C21ECu;
    {
        const bool branch_taken_0x3c21ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21ECu;
        // 0x3c21f0: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c21ec) {
            ctx->pc = 0x3C2240u;
            goto label_3c2240;
        }
    }
    ctx->pc = 0x3C21F4u;
    // 0x3c21f4: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3C21F4u;
    SET_GPR_U32(ctx, 31, 0x3C21FCu);
    ctx->pc = 0x3C21F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C21F4u;
    // 0x3c21f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3C21F4u, 0x3C21FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C21FCu;
label_3c21fc:
    // 0x3c21fc: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3C21FCu;
    SET_GPR_U32(ctx, 31, 0x3C2204u);
    ctx->pc = 0x3C2200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C21FCu;
    // 0x3c2200: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3C21FCu, 0x3C2204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2204u;
label_3c2204:
    // 0x3c2204: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3c2204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3c2208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c2208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c220c: 0x0  nop
    ctx->pc = 0x3c220cu;
    // NOP
    // 0x3c2210: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c2210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2214: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C2214u;
    {
        const bool branch_taken_0x3c2214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2214) {
            ctx->pc = 0x3C2220u;
            goto label_3c2220;
        }
    }
    ctx->pc = 0x3C221Cu;
    // 0x3c221c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x3c221cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_3c2220:
    // 0x3c2220: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3c2220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3c2224: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c2224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c2228: 0x0  nop
    ctx->pc = 0x3c2228u;
    // NOP
    // 0x3c222c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c222cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2230: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2230u;
    {
        const bool branch_taken_0x3c2230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2230) {
            ctx->pc = 0x3C2248u;
            goto label_3c2248;
        }
    }
    ctx->pc = 0x3C2238u;
    // 0x3c2238: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2238u;
    {
        const bool branch_taken_0x3c2238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2238u;
        // 0x3c223c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2238) {
            ctx->pc = 0x3C2248u;
            goto label_3c2248;
        }
    }
    ctx->pc = 0x3C2240u;
label_3c2240:
    // 0x3c2240: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3c2240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3c2244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c2248:
    // 0x3c2248: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x3c2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x3c224c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x3c224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c2250: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3c2250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c2254: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x3c2254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c2258: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3c2258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c225c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3c225cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3c2260: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3c2260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c2264: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3c2264u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3c2268: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3c2268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3c226c: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x3c226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c2270: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x3c2270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x3c2274: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3c2274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c2278: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3c2278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c227c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c227cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c2280: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3c2280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c2284: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3C2284u;
    SET_GPR_U32(ctx, 31, 0x3C228Cu);
    ctx->pc = 0x3C2288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2284u;
    // 0x3c2288: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3C2284u, 0x3C228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C228Cu;
label_3c228c:
    // 0x3c228c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C228Cu;
    {
        const bool branch_taken_0x3c228c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c228c) {
            ctx->pc = 0x3C22A0u;
            goto label_3c22a0;
        }
    }
    ctx->pc = 0x3C2294u;
    // 0x3c2294: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x3c2294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c2298: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x3c2298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x3c229c: 0x0  nop
    ctx->pc = 0x3c229cu;
    // NOP
label_3c22a0:
    // 0x3c22a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c22a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c22a4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3c22a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3c22a8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3C22A8u;
    SET_GPR_U32(ctx, 31, 0x3C22B0u);
    ctx->pc = 0x3C22ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C22A8u;
    // 0x3c22ac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3C22A8u, 0x3C22B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C22B0u;
label_3c22b0:
    // 0x3c22b0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3c22b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3c22b4: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3C22B4u;
    SET_GPR_U32(ctx, 31, 0x3C22BCu);
    ctx->pc = 0x3C22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C22B4u;
    // 0x3c22b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3C22B4u, 0x3C22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C22BCu;
label_3c22bc:
    // 0x3c22bc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c22c0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3c22c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3c22c4: 0x24422dbc  addiu       $v0, $v0, 0x2DBC
    ctx->pc = 0x3c22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11708));
    // 0x3c22c8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3c22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3c22cc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3c22ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c22d0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3C22D0u;
    SET_GPR_U32(ctx, 31, 0x3C22D8u);
    ctx->pc = 0x3C22D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C22D0u;
    // 0x3c22d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3C22D0u, 0x3C22D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C22D8u;
label_3c22d8:
    // 0x3c22d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C22D8u;
    {
        const bool branch_taken_0x3c22d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22D8u;
        // 0x3c22dc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c22d8) {
            ctx->pc = 0x3C22E8u;
            goto label_3c22e8;
        }
    }
    ctx->pc = 0x3C22E0u;
label_3c22e0:
    // 0x3c22e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c22e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c22e4: 0x0  nop
    ctx->pc = 0x3c22e4u;
    // NOP
label_3c22e8:
    // 0x3c22e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c22e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c22ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3c22ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c22f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3c22f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c22f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c22f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c22f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c22f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c22fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c22fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c2300: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c2300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c2304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c2304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c2308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c2308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c230c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c230cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c2310: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2310u;
        // 0x3c2314: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2318u;
}
