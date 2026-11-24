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

// Function: sub_001FEB88
// Address: 0x1feb88 - 0x1fec8c
void sub_001FEB88_0x1feb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB88_0x1feb88");
#endif

    switch (ctx->pc) {
        case 0x1feba4u: goto label_1feba4;
        case 0x1febe0u: goto label_1febe0;
        case 0x1fec40u: goto label_1fec40;
        default: break;
    }

    ctx->pc = 0x1feb88u;

    // 0x1feb88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1feb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1feb8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1feb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1feb90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1feb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1feb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1feb98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1feb9c: 0xc080496  jal         func_201258
    ctx->pc = 0x1FEB9Cu;
    SET_GPR_U32(ctx, 31, 0x1FEBA4u);
    ctx->pc = 0x1FEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB9Cu;
    // 0x1feba0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FEB9Cu, 0x1FEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBA4u;
label_1feba4:
    // 0x1feba4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEBA4u;
    {
        const bool branch_taken_0x1feba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBA4u;
        // 0x1feba8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feba4) {
            ctx->pc = 0x1FEBC8u;
            goto label_1febc8;
        }
    }
    ctx->pc = 0x1FEBACu;
    // 0x1febac: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1febacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1febb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1febb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1febb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1febb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1febb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1febb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1febbc: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x1febbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x1febc0: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FEBC0u;
    ctx->pc = 0x1FEBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBC0u;
    // 0x1febc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEBC8u;
label_1febc8:
    // 0x1febc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1febc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1febcc: 0x260301d0  addiu       $v1, $s0, 0x1D0
    ctx->pc = 0x1febccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x1febd0: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1febd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1febd4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1febd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1febd8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FEBD8u;
    {
        const bool branch_taken_0x1febd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBD8u;
        // 0x1febdc: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febd8) {
            ctx->pc = 0x1FEC40u;
            goto label_1fec40;
        }
    }
    ctx->pc = 0x1FEBE0u;
label_1febe0:
    // 0x1febe0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1febe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1febe4: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1febe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1febe8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1febe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1febec: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1febecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1febf0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1febf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1febf4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1febf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1febf8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1febf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1febfc: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1febfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1fec00: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x1fec00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fec04: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x1fec04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fec08: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x1fec08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fec0c: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x1fec0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fec10: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x1fec10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fec14: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x1fec14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fec18: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x1fec18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fec1c: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x1fec1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fec20: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1fec24: 0x0  nop
    ctx->pc = 0x1fec24u;
    // NOP
    // 0x1fec28: 0x0  nop
    ctx->pc = 0x1fec28u;
    // NOP
    // 0x1fec2c: 0x1464ffec  bne         $v1, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FEC2Cu;
    {
        const bool branch_taken_0x1fec2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FEC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC2Cu;
        // 0x1fec30: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec2c) {
            ctx->pc = 0x1FEBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1febe0;
        }
    }
    ctx->pc = 0x1FEC34u;
    // 0x1fec34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FEC34u;
    {
        const bool branch_taken_0x1fec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC34u;
        // 0x1fec38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec34) {
            ctx->pc = 0x1FEC78u;
            goto label_1fec78;
        }
    }
    ctx->pc = 0x1FEC3Cu;
    // 0x1fec3c: 0x0  nop
    ctx->pc = 0x1fec3cu;
    // NOP
label_1fec40:
    // 0x1fec40: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1fec40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fec44: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1fec44u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fec48: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1fec48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fec4c: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1fec4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1fec50: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1fec50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1fec54: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x1fec54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x1fec58: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1fec58u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x1fec5c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x1fec5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x1fec60: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1fec64: 0x0  nop
    ctx->pc = 0x1fec64u;
    // NOP
    // 0x1fec68: 0x0  nop
    ctx->pc = 0x1fec68u;
    // NOP
    // 0x1fec6c: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FEC6Cu;
    {
        const bool branch_taken_0x1fec6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC6Cu;
        // 0x1fec70: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec6c) {
            ctx->pc = 0x1FEC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fec40;
        }
    }
    ctx->pc = 0x1FEC74u;
    // 0x1fec74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fec74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fec78:
    // 0x1fec78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fec78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fec7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fec80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fec80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fec84: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC84u;
        // 0x1fec88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC8Cu;
}
