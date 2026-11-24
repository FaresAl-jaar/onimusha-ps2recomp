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

// Function: sub_0020E1D0
// Address: 0x20e1d0 - 0x20e2a8
void sub_0020E1D0_0x20e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E1D0_0x20e1d0");
#endif

    switch (ctx->pc) {
        case 0x20e1d0u: goto label_20e1d0;
        case 0x20e1d4u: goto label_20e1d4;
        case 0x20e1d8u: goto label_20e1d8;
        case 0x20e1dcu: goto label_20e1dc;
        case 0x20e1e0u: goto label_20e1e0;
        case 0x20e1e4u: goto label_20e1e4;
        case 0x20e1e8u: goto label_20e1e8;
        case 0x20e1ecu: goto label_20e1ec;
        case 0x20e1f0u: goto label_20e1f0;
        case 0x20e1f4u: goto label_20e1f4;
        case 0x20e1f8u: goto label_20e1f8;
        case 0x20e1fcu: goto label_20e1fc;
        case 0x20e200u: goto label_20e200;
        case 0x20e204u: goto label_20e204;
        case 0x20e208u: goto label_20e208;
        case 0x20e20cu: goto label_20e20c;
        case 0x20e210u: goto label_20e210;
        case 0x20e214u: goto label_20e214;
        case 0x20e218u: goto label_20e218;
        case 0x20e21cu: goto label_20e21c;
        case 0x20e220u: goto label_20e220;
        case 0x20e224u: goto label_20e224;
        case 0x20e228u: goto label_20e228;
        case 0x20e22cu: goto label_20e22c;
        case 0x20e230u: goto label_20e230;
        case 0x20e234u: goto label_20e234;
        case 0x20e238u: goto label_20e238;
        case 0x20e23cu: goto label_20e23c;
        case 0x20e240u: goto label_20e240;
        case 0x20e244u: goto label_20e244;
        case 0x20e248u: goto label_20e248;
        case 0x20e24cu: goto label_20e24c;
        case 0x20e250u: goto label_20e250;
        case 0x20e254u: goto label_20e254;
        case 0x20e258u: goto label_20e258;
        case 0x20e25cu: goto label_20e25c;
        case 0x20e260u: goto label_20e260;
        case 0x20e264u: goto label_20e264;
        case 0x20e268u: goto label_20e268;
        case 0x20e26cu: goto label_20e26c;
        case 0x20e270u: goto label_20e270;
        case 0x20e274u: goto label_20e274;
        case 0x20e278u: goto label_20e278;
        case 0x20e27cu: goto label_20e27c;
        case 0x20e280u: goto label_20e280;
        case 0x20e284u: goto label_20e284;
        case 0x20e288u: goto label_20e288;
        case 0x20e28cu: goto label_20e28c;
        case 0x20e290u: goto label_20e290;
        case 0x20e294u: goto label_20e294;
        case 0x20e298u: goto label_20e298;
        case 0x20e29cu: goto label_20e29c;
        case 0x20e2a0u: goto label_20e2a0;
        case 0x20e2a4u: goto label_20e2a4;
        default: break;
    }

    ctx->pc = 0x20e1d0u;

label_20e1d0:
    // 0x20e1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20e1d4:
    // 0x20e1d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e1d8:
    // 0x20e1d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20e1dc:
    // 0x20e1dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20e1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e1e0:
    // 0x20e1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20e1e4:
    // 0x20e1e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20e1e8:
    // 0x20e1e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_20e1ec:
    // 0x20e1ec: 0x8e232004  lw          $v1, 0x2004($s1)
    ctx->pc = 0x20e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8196)));
label_20e1f0:
    // 0x20e1f0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x20e1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e1f4:
    // 0x20e1f4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_20e1f8:
    if (ctx->pc == 0x20E1F8u) {
        ctx->pc = 0x20E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1F4u;
        // 0x20e1f8: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E1FCu;
        goto label_20e1fc;
    }
    ctx->pc = 0x20E1F4u;
    {
        const bool branch_taken_0x20e1f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1F4u;
        // 0x20e1f8: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1f4) {
            ctx->pc = 0x20E290u;
            goto label_20e290;
        }
    }
    ctx->pc = 0x20E1FCu;
label_20e1fc:
    // 0x20e1fc: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x20e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_20e200:
    // 0x20e200: 0x2447fb50  addiu       $a3, $v0, -0x4B0
    ctx->pc = 0x20e200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966096));
label_20e204:
    // 0x20e204: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x20e204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_20e208:
    // 0x20e208: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x20e208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_20e20c:
    // 0x20e20c: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x20e20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_20e210:
    // 0x20e210: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x20e210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_20e214:
    // 0x20e214: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x20e214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_20e218:
    // 0x20e218: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x20e218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_20e21c:
    // 0x20e21c: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x20e21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e220:
    // 0x20e220: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x20e220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e224:
    // 0x20e224: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x20e224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e228:
    // 0x20e228: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x20e228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e22c:
    // 0x20e22c: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x20e22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e230:
    // 0x20e230: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x20e230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e234:
    // 0x20e234: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x20e234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20e238:
    // 0x20e238: 0xc0876b8  jal         func_21DAE0
label_20e23c:
    if (ctx->pc == 0x20E23Cu) {
        ctx->pc = 0x20E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E238u;
        // 0x20e23c: 0xace40018  sw          $a0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E240u;
        goto label_20e240;
    }
    ctx->pc = 0x20E238u;
    SET_GPR_U32(ctx, 31, 0x20E240u);
    ctx->pc = 0x20E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E238u;
    // 0x20e23c: 0xace40018  sw          $a0, 0x18($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAE0u, 0x20E238u, 0x20E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E240u;
label_20e240:
    // 0x20e240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e244:
    // 0x20e244: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_20e248:
    if (ctx->pc == 0x20E248u) {
        ctx->pc = 0x20E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E244u;
        // 0x20e248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E24Cu;
        goto label_20e24c;
    }
    ctx->pc = 0x20E244u;
    {
        const bool branch_taken_0x20e244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E244u;
        // 0x20e248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e244) {
            ctx->pc = 0x20E260u;
            goto label_20e260;
        }
    }
    ctx->pc = 0x20E24Cu;
label_20e24c:
    // 0x20e24c: 0xc0838aa  jal         func_20E2A8
label_20e250:
    if (ctx->pc == 0x20E250u) {
        ctx->pc = 0x20E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E24Cu;
        // 0x20e250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E254u;
        goto label_20e254;
    }
    ctx->pc = 0x20E24Cu;
    SET_GPR_U32(ctx, 31, 0x20E254u);
    ctx->pc = 0x20E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E24Cu;
    // 0x20e250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E2A8u, 0x20E24Cu, 0x20E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E254u;
label_20e254:
    // 0x20e254: 0x10000007  b           . + 4 + (0x7 << 2)
label_20e258:
    if (ctx->pc == 0x20E258u) {
        ctx->pc = 0x20E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E254u;
        // 0x20e258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E25Cu;
        goto label_20e25c;
    }
    ctx->pc = 0x20E254u;
    {
        const bool branch_taken_0x20e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E254u;
        // 0x20e258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e254) {
            ctx->pc = 0x20E274u;
            goto label_20e274;
        }
    }
    ctx->pc = 0x20E25Cu;
label_20e25c:
    // 0x20e25c: 0x0  nop
    ctx->pc = 0x20e25cu;
    // NOP
label_20e260:
    // 0x20e260: 0xc0838c0  jal         func_20E300
label_20e264:
    if (ctx->pc == 0x20E264u) {
        ctx->pc = 0x20E268u;
        goto label_20e268;
    }
    ctx->pc = 0x20E260u;
    SET_GPR_U32(ctx, 31, 0x20E268u);
    ctx->pc = 0x20E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E300u, 0x20E260u, 0x20E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E268u;
label_20e268:
    // 0x20e268: 0xc0838b2  jal         func_20E2C8
label_20e26c:
    if (ctx->pc == 0x20E26Cu) {
        ctx->pc = 0x20E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E268u;
        // 0x20e26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E270u;
        goto label_20e270;
    }
    ctx->pc = 0x20E268u;
    SET_GPR_U32(ctx, 31, 0x20E270u);
    ctx->pc = 0x20E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E268u;
    // 0x20e26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E2C8u, 0x20E268u, 0x20E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E270u;
label_20e270:
    // 0x20e270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20e270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e274:
    // 0x20e274: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20e274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e278:
    // 0x20e278: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20e27c:
    // 0x20e27c: 0x40f809  jalr        $v0
label_20e280:
    if (ctx->pc == 0x20E280u) {
        ctx->pc = 0x20E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E27Cu;
        // 0x20e280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E284u;
        goto label_20e284;
    }
    ctx->pc = 0x20E27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E284u);
        ctx->pc = 0x20E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E27Cu;
        // 0x20e280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E27Cu, 0x20E284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E284u;
label_20e284:
    // 0x20e284: 0xc089fde  jal         func_227F78
label_20e288:
    if (ctx->pc == 0x20E288u) {
        ctx->pc = 0x20E28Cu;
        goto label_20e28c;
    }
    ctx->pc = 0x20E284u;
    SET_GPR_U32(ctx, 31, 0x20E28Cu);
    ctx->pc = 0x227F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F78u, 0x20E284u, 0x20E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E28Cu;
label_20e28c:
    // 0x20e28c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20e28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e290:
    // 0x20e290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e294:
    // 0x20e294: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e298:
    // 0x20e298: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20e298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e29c:
    // 0x20e29c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20e29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20e2a0:
    // 0x20e2a0: 0x3e00008  jr          $ra
label_20e2a4:
    if (ctx->pc == 0x20E2A4u) {
        ctx->pc = 0x20E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2A0u;
        // 0x20e2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E2A8u;
        goto label_fallthrough_0x20e2a0;
    }
    ctx->pc = 0x20E2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2A0u;
        // 0x20e2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e2a0:
    ctx->pc = 0x20E2A8u;
}
