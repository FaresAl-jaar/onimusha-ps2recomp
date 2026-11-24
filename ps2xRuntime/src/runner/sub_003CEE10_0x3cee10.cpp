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

// Function: sub_003CEE10
// Address: 0x3cee10 - 0x3cf238
void sub_003CEE10_0x3cee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CEE10_0x3cee10");
#endif

    switch (ctx->pc) {
        case 0x3cee84u: goto label_3cee84;
        case 0x3ceea0u: goto label_3ceea0;
        case 0x3ceeb0u: goto label_3ceeb0;
        case 0x3ceed0u: goto label_3ceed0;
        case 0x3cef88u: goto label_3cef88;
        case 0x3cf018u: goto label_3cf018;
        case 0x3cf028u: goto label_3cf028;
        case 0x3cf03cu: goto label_3cf03c;
        case 0x3cf048u: goto label_3cf048;
        case 0x3cf0b0u: goto label_3cf0b0;
        case 0x3cf148u: goto label_3cf148;
        case 0x3cf158u: goto label_3cf158;
        case 0x3cf178u: goto label_3cf178;
        case 0x3cf190u: goto label_3cf190;
        case 0x3cf1b8u: goto label_3cf1b8;
        case 0x3cf1c8u: goto label_3cf1c8;
        case 0x3cf1d8u: goto label_3cf1d8;
        case 0x3cf1e8u: goto label_3cf1e8;
        case 0x3cf1f0u: goto label_3cf1f0;
        default: break;
    }

    ctx->pc = 0x3cee10u;

    // 0x3cee10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3cee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3cee14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3cee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3cee18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3cee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3cee1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3cee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3cee20: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x3cee20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3cee24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3cee28: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3cee28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3cee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3cee30: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3cee30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3cee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3cee38: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x3cee38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3cee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3cee40: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3cee40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3cee48: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3cee48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cee50: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3cee50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cee58: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CEE58u;
    {
        const bool branch_taken_0x3cee58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEE58u;
        // 0x3cee5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cee58) {
            ctx->pc = 0x3CEE68u;
            goto label_3cee68;
        }
    }
    ctx->pc = 0x3CEE60u;
    // 0x3cee60: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x3CEE60u;
    {
        const bool branch_taken_0x3cee60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEE60u;
        // 0x3cee64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cee60) {
            ctx->pc = 0x3CF208u;
            goto label_3cf208;
        }
    }
    ctx->pc = 0x3CEE68u;
label_3cee68:
    // 0x3cee68: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3cee68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3cee6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3cee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cee70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cee74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee78: 0x24070610  addiu       $a3, $zero, 0x610
    ctx->pc = 0x3cee78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x3cee7c: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3CEE7Cu;
    SET_GPR_U32(ctx, 31, 0x3CEE84u);
    ctx->pc = 0x3CEE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEE7Cu;
    // 0x3cee80: 0x2508eda0  addiu       $t0, $t0, -0x1260 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3CEE7Cu, 0x3CEE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEE84u;
label_3cee84:
    // 0x3cee84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cee84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee88: 0x122000dd  beqz        $s1, . + 4 + (0xDD << 2)
    ctx->pc = 0x3CEE88u;
    {
        const bool branch_taken_0x3cee88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEE88u;
        // 0x3cee8c: 0x324700ff  andi        $a3, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cee88) {
            ctx->pc = 0x3CF200u;
            goto label_3cf200;
        }
    }
    ctx->pc = 0x3CEE90u;
    // 0x3cee90: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3cee90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3cee94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cee94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee98: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x3CEE98u;
    SET_GPR_U32(ctx, 31, 0x3CEEA0u);
    ctx->pc = 0x3CEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEE98u;
    // 0x3cee9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x3CEE98u, 0x3CEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEEA0u;
label_3ceea0:
    // 0x3ceea0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3ceea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3ceea4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3ceea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3ceea8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3CEEA8u;
    SET_GPR_U32(ctx, 31, 0x3CEEB0u);
    ctx->pc = 0x3CEEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEEA8u;
    // 0x3ceeac: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3CEEA8u, 0x3CEEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEEB0u;
label_3ceeb0:
    // 0x3ceeb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ceeb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceeb4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3ceeb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceeb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ceeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceebc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3ceebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ceec0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3ceec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ceec4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3ceec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceec8: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3CEEC8u;
    SET_GPR_U32(ctx, 31, 0x3CEED0u);
    ctx->pc = 0x3CEECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEEC8u;
    // 0x3ceecc: 0x27aa00c0  addiu       $t2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3CEEC8u, 0x3CEED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEED0u;
label_3ceed0:
    // 0x3ceed0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x3ceed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3ceed4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ceed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ceed8: 0xa6230526  sh          $v1, 0x526($s1)
    ctx->pc = 0x3ceed8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ceedc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3ceedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3ceee0: 0xa6200528  sh          $zero, 0x528($s1)
    ctx->pc = 0x3ceee0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ceee4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ceee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ceee8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3ceee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ceeec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ceeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ceef0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ceef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3ceef4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ceef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ceef8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3ceef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3ceefc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEEFCu;
    {
        const bool branch_taken_0x3ceefc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3CEF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEEFCu;
        // 0x3cef00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceefc) {
            ctx->pc = 0x3CEF10u;
            goto label_3cef10;
        }
    }
    ctx->pc = 0x3CEF04u;
    // 0x3cef04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cef04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cef08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CEF08u;
    {
        const bool branch_taken_0x3cef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEF08u;
        // 0x3cef0c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cef08) {
            ctx->pc = 0x3CEF28u;
            goto label_3cef28;
        }
    }
    ctx->pc = 0x3CEF10u;
label_3cef10:
    // 0x3cef10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3cef14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cef14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3cef18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cef18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cef1c: 0x0  nop
    ctx->pc = 0x3cef1cu;
    // NOP
    // 0x3cef20: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3cef20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3cef24: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3cef24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3cef28:
    // 0x3cef28: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3cef28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x3cef2c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x3cef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x3cef30: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3cef30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3cef34: 0x3c053f40  lui         $a1, 0x3F40
    ctx->pc = 0x3cef34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16192 << 16));
    // 0x3cef38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cef38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cef3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cef3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cef40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cef40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cef44: 0x0  nop
    ctx->pc = 0x3cef44u;
    // NOP
    // 0x3cef48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3cef48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3cef4c: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x3cef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x3cef50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cef54: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x3cef54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3cef58: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cef58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cef5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cef5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cef60: 0x0  nop
    ctx->pc = 0x3cef60u;
    // NOP
    // 0x3cef64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3cef64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3cef68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cef68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3cef6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cef6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3cef70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3cef70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3cef74: 0x0  nop
    ctx->pc = 0x3cef74u;
    // NOP
    // 0x3cef78: 0xa623052a  sh          $v1, 0x52A($s1)
    ctx->pc = 0x3cef78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cef7c: 0xa2200521  sb          $zero, 0x521($s1)
    ctx->pc = 0x3cef7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cef80: 0xc0c09ac  jal         func_3026B0
    ctx->pc = 0x3CEF80u;
    SET_GPR_U32(ctx, 31, 0x3CEF88u);
    ctx->pc = 0x3CEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEF80u;
    // 0x3cef84: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3026B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3026B0u, 0x3CEF80u, 0x3CEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEF88u;
label_3cef88:
    // 0x3cef88: 0x93a60120  lbu         $a2, 0x120($sp)
    ctx->pc = 0x3cef88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3cef8c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3cef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3cef90: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3cef90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3cef94: 0x24843086  addiu       $a0, $a0, 0x3086
    ctx->pc = 0x3cef94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12422));
    // 0x3cef98: 0x24633088  addiu       $v1, $v1, 0x3088
    ctx->pc = 0x3cef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12424));
    // 0x3cef9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cefa0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3cefa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cefa4: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3cefa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cefa8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3cefa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3cefac: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x3cefacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3cefb0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3cefb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3cefb4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3cefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3cefb8: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3cefb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3cefbc: 0xa22405d2  sb          $a0, 0x5D2($s1)
    ctx->pc = 0x3cefbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1490), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cefc0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3cefc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cefc4: 0xa22305d3  sb          $v1, 0x5D3($s1)
    ctx->pc = 0x3cefc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1491), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cefc8: 0x93a30120  lbu         $v1, 0x120($sp)
    ctx->pc = 0x3cefc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3cefcc: 0xa2230600  sb          $v1, 0x600($s1)
    ctx->pc = 0x3cefccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1536), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cefd0: 0xa23205d4  sb          $s2, 0x5D4($s1)
    ctx->pc = 0x3cefd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1492), (uint8_t)GPR_U32(ctx, 18));
    // 0x3cefd4: 0xa6200604  sh          $zero, 0x604($s1)
    ctx->pc = 0x3cefd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cefd8: 0xa6200606  sh          $zero, 0x606($s1)
    ctx->pc = 0x3cefd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1542), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cefdc: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x3cefdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3cefe0: 0x7e230590  sq          $v1, 0x590($s1)
    ctx->pc = 0x3cefe0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1424), GPR_VEC(ctx, 3));
    // 0x3cefe4: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x3cefe4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3cefe8: 0x7e2305e0  sq          $v1, 0x5E0($s1)
    ctx->pc = 0x3cefe8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1504), GPR_VEC(ctx, 3));
    // 0x3cefec: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x3cefecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3ceff0: 0x7e2305f0  sq          $v1, 0x5F0($s1)
    ctx->pc = 0x3ceff0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1520), GPR_VEC(ctx, 3));
    // 0x3ceff4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3ceff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ceff8: 0xae230518  sw          $v1, 0x518($s1)
    ctx->pc = 0x3ceff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 3));
    // 0x3ceffc: 0xa22205d5  sb          $v0, 0x5D5($s1)
    ctx->pc = 0x3ceffcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1493), (uint8_t)GPR_U32(ctx, 2));
    // 0x3cf000: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3cf000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3cf004: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x3CF004u;
    {
        const bool branch_taken_0x3cf004 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF004u;
        // 0x3cf008: 0x7e2205a0  sq          $v0, 0x5A0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1440), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf004) {
            ctx->pc = 0x3CF060u;
            goto label_3cf060;
        }
    }
    ctx->pc = 0x3CF00Cu;
    // 0x3cf00c: 0x868500c2  lh          $a1, 0xC2($s4)
    ctx->pc = 0x3cf00cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x3cf010: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3CF010u;
    SET_GPR_U32(ctx, 31, 0x3CF018u);
    ctx->pc = 0x3CF014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF010u;
    // 0x3cf014: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3CF010u, 0x3CF018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF018u;
label_3cf018:
    // 0x3cf018: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3cf018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3cf01c: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3cf01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3cf020: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3CF020u;
    SET_GPR_U32(ctx, 31, 0x3CF028u);
    ctx->pc = 0x3CF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF020u;
    // 0x3cf024: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3CF020u, 0x3CF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF028u;
label_3cf028:
    // 0x3cf028: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3cf028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3cf02c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x3cf02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x3cf030: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cf030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf034: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3CF034u;
    SET_GPR_U32(ctx, 31, 0x3CF03Cu);
    ctx->pc = 0x3CF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF034u;
    // 0x3cf038: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3CF034u, 0x3CF03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF03Cu;
label_3cf03c:
    // 0x3cf03c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3cf03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3cf040: 0xc076654  jal         func_1D9950
    ctx->pc = 0x3CF040u;
    SET_GPR_U32(ctx, 31, 0x3CF048u);
    ctx->pc = 0x3CF044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF040u;
    // 0x3cf044: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x3CF040u, 0x3CF048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF048u;
label_3cf048:
    // 0x3cf048: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3cf048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cf04c: 0x0  nop
    ctx->pc = 0x3cf04cu;
    // NOP
    // 0x3cf050: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cf050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cf054: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3CF054u;
    {
        const bool branch_taken_0x3cf054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cf054) {
            ctx->pc = 0x3CF060u;
            goto label_3cf060;
        }
    }
    ctx->pc = 0x3CF05Cu;
    // 0x3cf05c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x3cf05cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cf060:
    // 0x3cf060: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF060u;
    {
        const bool branch_taken_0x3cf060 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf060) {
            ctx->pc = 0x3CF070u;
            goto label_3cf070;
        }
    }
    ctx->pc = 0x3CF068u;
    // 0x3cf068: 0x1660003f  bnez        $s3, . + 4 + (0x3F << 2)
    ctx->pc = 0x3CF068u;
    {
        const bool branch_taken_0x3cf068 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf068) {
            ctx->pc = 0x3CF168u;
            goto label_3cf168;
        }
    }
    ctx->pc = 0x3CF070u;
label_3cf070:
    // 0x3cf070: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3cf070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3cf074: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3cf074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3cf078: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3cf078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3cf07c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3cf07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3cf080: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3cf080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3cf084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cf084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3cf088: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3cf088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3cf08c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3cf08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3cf090: 0x868300c2  lh          $v1, 0xC2($s4)
    ctx->pc = 0x3cf090u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x3cf094: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3cf094u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3cf098: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x3cf098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x3cf09c: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x3cf09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x3cf0a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3cf0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3cf0a4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3cf0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3cf0a8: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3CF0A8u;
    SET_GPR_U32(ctx, 31, 0x3CF0B0u);
    ctx->pc = 0x3CF0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF0A8u;
    // 0x3cf0ac: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3CF0A8u, 0x3CF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF0B0u;
label_3cf0b0:
    // 0x3cf0b0: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3cf0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3cf0b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3cf0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3cf0b8: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x3cf0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3cf0bc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cf0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cf0c0: 0x24423078  addiu       $v0, $v0, 0x3078
    ctx->pc = 0x3cf0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12408));
    // 0x3cf0c4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3cf0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3cf0c8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cf0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cf0cc: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x3cf0ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3cf0d0: 0x2442307c  addiu       $v0, $v0, 0x307C
    ctx->pc = 0x3cf0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12412));
    // 0x3cf0d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3cf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3cf0d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cf0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cf0dc: 0xaf8480e0  sw          $a0, -0x7F20($gp)
    ctx->pc = 0x3cf0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 4));
    // 0x3cf0e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cf0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf0e4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3cf0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3cf0e8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3cf0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3cf0ec: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3cf0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3cf0f0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CF0F0u;
    {
        const bool branch_taken_0x3cf0f0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3CF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF0F0u;
        // 0x3cf0f4: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf0f0) {
            ctx->pc = 0x3CF104u;
            goto label_3cf104;
        }
    }
    ctx->pc = 0x3CF0F8u;
    // 0x3cf0f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cf0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cf0fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CF0FCu;
    {
        const bool branch_taken_0x3cf0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF0FCu;
        // 0x3cf100: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf0fc) {
            ctx->pc = 0x3CF120u;
            goto label_3cf120;
        }
    }
    ctx->pc = 0x3CF104u;
label_3cf104:
    // 0x3cf104: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3cf104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3cf108: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cf108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3cf10c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cf10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3cf110: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cf110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cf114: 0x0  nop
    ctx->pc = 0x3cf114u;
    // NOP
    // 0x3cf118: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3cf118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3cf11c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3cf11cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3cf120:
    // 0x3cf120: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x3cf120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x3cf124: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3cf124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3cf128: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3cf128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3cf12c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cf12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cf130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cf134: 0x0  nop
    ctx->pc = 0x3cf134u;
    // NOP
    // 0x3cf138: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cf138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3cf13c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3cf13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3cf140: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3CF140u;
    SET_GPR_U32(ctx, 31, 0x3CF148u);
    ctx->pc = 0x3CF144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF140u;
    // 0x3cf144: 0x46001b00  add.s       $f12, $f3, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3CF140u, 0x3CF148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF148u;
label_3cf148:
    // 0x3cf148: 0x262405a0  addiu       $a0, $s1, 0x5A0
    ctx->pc = 0x3cf148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
    // 0x3cf14c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3cf14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3cf150: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3CF150u;
    SET_GPR_U32(ctx, 31, 0x3CF158u);
    ctx->pc = 0x3CF154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF150u;
    // 0x3cf154: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3CF150u, 0x3CF158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF158u;
label_3cf158:
    // 0x3cf158: 0x868200c2  lh          $v0, 0xC2($s4)
    ctx->pc = 0x3cf158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x3cf15c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3CF15Cu;
    {
        const bool branch_taken_0x3cf15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF15Cu;
        // 0x3cf160: 0xa6220602  sh          $v0, 0x602($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1538), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf15c) {
            ctx->pc = 0x3CF1F8u;
            goto label_3cf1f8;
        }
    }
    ctx->pc = 0x3CF164u;
    // 0x3cf164: 0x0  nop
    ctx->pc = 0x3cf164u;
    // NOP
label_3cf168:
    // 0x3cf168: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3cf168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3cf16c: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3cf16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3cf170: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3CF170u;
    SET_GPR_U32(ctx, 31, 0x3CF178u);
    ctx->pc = 0x3CF174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF170u;
    // 0x3cf174: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3CF170u, 0x3CF178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF178u;
label_3cf178:
    // 0x3cf178: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3cf178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3cf17c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3cf17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3cf180: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cf180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cf184: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cf184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf188: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3CF188u;
    SET_GPR_U32(ctx, 31, 0x3CF190u);
    ctx->pc = 0x3CF18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF188u;
    // 0x3cf18c: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3CF188u, 0x3CF190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF190u;
label_3cf190:
    // 0x3cf190: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3cf190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3cf194: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cf194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cf198: 0x24633078  addiu       $v1, $v1, 0x3078
    ctx->pc = 0x3cf198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12408));
    // 0x3cf19c: 0x2442307c  addiu       $v0, $v0, 0x307C
    ctx->pc = 0x3cf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12412));
    // 0x3cf1a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3cf1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3cf1a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3cf1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3cf1a8: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x3cf1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3cf1ac: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x3cf1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3cf1b0: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3CF1B0u;
    SET_GPR_U32(ctx, 31, 0x3CF1B8u);
    ctx->pc = 0x3CF1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1B0u;
    // 0x3cf1b4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3CF1B0u, 0x3CF1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1B8u;
label_3cf1b8:
    // 0x3cf1b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3cf1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3cf1bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3cf1bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3cf1c0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3CF1C0u;
    SET_GPR_U32(ctx, 31, 0x3CF1C8u);
    ctx->pc = 0x3CF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1C0u;
    // 0x3cf1c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3CF1C0u, 0x3CF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1C8u;
label_3cf1c8:
    // 0x3cf1c8: 0x262405a0  addiu       $a0, $s1, 0x5A0
    ctx->pc = 0x3cf1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
    // 0x3cf1cc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3cf1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3cf1d0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3CF1D0u;
    SET_GPR_U32(ctx, 31, 0x3CF1D8u);
    ctx->pc = 0x3CF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1D0u;
    // 0x3cf1d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3CF1D0u, 0x3CF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1D8u;
label_3cf1d8:
    // 0x3cf1d8: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3cf1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3cf1dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3cf1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3cf1e0: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3CF1E0u;
    SET_GPR_U32(ctx, 31, 0x3CF1E8u);
    ctx->pc = 0x3CF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1E0u;
    // 0x3cf1e4: 0x262605a0  addiu       $a2, $s1, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3CF1E0u, 0x3CF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1E8u;
label_3cf1e8:
    // 0x3cf1e8: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3CF1E8u;
    SET_GPR_U32(ctx, 31, 0x3CF1F0u);
    ctx->pc = 0x3CF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1E8u;
    // 0x3cf1ec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3CF1E8u, 0x3CF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1F0u;
label_3cf1f0:
    // 0x3cf1f0: 0xa6220602  sh          $v0, 0x602($s1)
    ctx->pc = 0x3cf1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1538), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cf1f4: 0x0  nop
    ctx->pc = 0x3cf1f4u;
    // NOP
label_3cf1f8:
    // 0x3cf1f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF1F8u;
    {
        const bool branch_taken_0x3cf1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1F8u;
        // 0x3cf1fc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf1f8) {
            ctx->pc = 0x3CF208u;
            goto label_3cf208;
        }
    }
    ctx->pc = 0x3CF200u;
label_3cf200:
    // 0x3cf200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cf200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf204: 0x0  nop
    ctx->pc = 0x3cf204u;
    // NOP
label_3cf208:
    // 0x3cf208: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3cf208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3cf20c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3cf20cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cf210: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3cf210u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cf214: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3cf214u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cf218: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3cf218u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cf21c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3cf21cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cf220: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cf220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cf224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cf224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cf228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cf228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cf22c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cf22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cf230: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF230u;
        // 0x3cf234: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF238u;
}
