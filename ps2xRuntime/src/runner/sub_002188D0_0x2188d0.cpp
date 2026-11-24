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

// Function: sub_002188D0
// Address: 0x2188d0 - 0x2189e8
void sub_002188D0_0x2188d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002188D0_0x2188d0");
#endif

    switch (ctx->pc) {
        case 0x218940u: goto label_218940;
        case 0x218954u: goto label_218954;
        case 0x218970u: goto label_218970;
        default: break;
    }

    ctx->pc = 0x2188d0u;

    // 0x2188d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2188d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2188d4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2188d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2188d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2188d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188dc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2188dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2188e0: 0x26110e48  addiu       $s1, $s0, 0xE48
    ctx->pc = 0x2188e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3656));
    // 0x2188e4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2188e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2188e8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2188e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2188ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2188ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2188f0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2188F0u;
    {
        const bool branch_taken_0x2188f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2188F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188F0u;
        // 0x2188f4: 0x26120d6c  addiu       $s2, $s0, 0xD6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188f0) {
            ctx->pc = 0x2189D0u;
            goto label_2189d0;
        }
    }
    ctx->pc = 0x2188F8u;
    // 0x2188f8: 0x6a020dfb  ldl         $v0, 0xDFB($s0)
    ctx->pc = 0x2188f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2188fc: 0x6e020df4  ldr         $v0, 0xDF4($s0)
    ctx->pc = 0x2188fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3572); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x218900: 0x6a030e03  ldl         $v1, 0xE03($s0)
    ctx->pc = 0x218900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x218904: 0x6e030dfc  ldr         $v1, 0xDFC($s0)
    ctx->pc = 0x218904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x218908: 0x6a060e0b  ldl         $a2, 0xE0B($s0)
    ctx->pc = 0x218908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21890c: 0x6e060e04  ldr         $a2, 0xE04($s0)
    ctx->pc = 0x21890cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x218910: 0x6a070e13  ldl         $a3, 0xE13($s0)
    ctx->pc = 0x218910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3603); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x218914: 0x6e070e0c  ldr         $a3, 0xE0C($s0)
    ctx->pc = 0x218914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3596); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x218918: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x218918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21891c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x21891cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218920: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x218920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218924: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x218924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218928: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x218928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21892c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x21892cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218930: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x218930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218934: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x218934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218938: 0xc085f2c  jal         func_217CB0
    ctx->pc = 0x218938u;
    SET_GPR_U32(ctx, 31, 0x218940u);
    ctx->pc = 0x21893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218938u;
    // 0x21893c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217CB0u, 0x218938u, 0x218940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218940u;
label_218940:
    // 0x218940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218944: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x218944u;
    {
        const bool branch_taken_0x218944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218944u;
        // 0x218948: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218944) {
            ctx->pc = 0x218960u;
            goto label_218960;
        }
    }
    ctx->pc = 0x21894Cu;
    // 0x21894c: 0xc085f9a  jal         func_217E68
    ctx->pc = 0x21894Cu;
    SET_GPR_U32(ctx, 31, 0x218954u);
    ctx->pc = 0x217E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E68u, 0x21894Cu, 0x218954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218954u;
label_218954:
    // 0x218954: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x218954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218958: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x218958u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x21895c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x21895cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_218960:
    // 0x218960: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x218960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218964: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x218964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x218968: 0xc0883ea  jal         func_220FA8
    ctx->pc = 0x218968u;
    SET_GPR_U32(ctx, 31, 0x218970u);
    ctx->pc = 0x21896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218968u;
    // 0x21896c: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220FA8u, 0x218968u, 0x218970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218970u;
label_218970:
    // 0x218970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x218970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218974: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x218974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x218978: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x218978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21897c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x21897cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x218980: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x218980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x218984: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x218984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x218988: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x218988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21898c: 0x6ba6001f  ldl         $a2, 0x1F($sp)
    ctx->pc = 0x21898cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x218990: 0x6fa60018  ldr         $a2, 0x18($sp)
    ctx->pc = 0x218990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x218994: 0xb2020e53  sdl         $v0, 0xE53($s0)
    ctx->pc = 0x218994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218998: 0xb6020e4c  sdr         $v0, 0xE4C($s0)
    ctx->pc = 0x218998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3660); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21899c: 0xb2030e5b  sdl         $v1, 0xE5B($s0)
    ctx->pc = 0x21899cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3675); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2189a0: 0xb6030e54  sdr         $v1, 0xE54($s0)
    ctx->pc = 0x2189a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3668); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2189a4: 0xb2040e63  sdl         $a0, 0xE63($s0)
    ctx->pc = 0x2189a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3683); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2189a8: 0xb6040e5c  sdr         $a0, 0xE5C($s0)
    ctx->pc = 0x2189a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3676); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2189ac: 0xb2060e6b  sdl         $a2, 0xE6B($s0)
    ctx->pc = 0x2189acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2189b0: 0xb6060e64  sdr         $a2, 0xE64($s0)
    ctx->pc = 0x2189b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3684); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2189b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2189b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2189b8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2189b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2189bc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2189bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2189c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2189c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2189c4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2189c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2189c8: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2189c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x2189cc: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x2189ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_2189d0:
    // 0x2189d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2189d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2189d4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2189d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2189d8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2189d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2189dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2189dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2189e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2189E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2189E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189E0u;
        // 0x2189e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2189E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2189E8u;
}
