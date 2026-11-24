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

// Function: sub_00222BB8
// Address: 0x222bb8 - 0x222d14
void sub_00222BB8_0x222bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222BB8_0x222bb8");
#endif

    switch (ctx->pc) {
        case 0x222be0u: goto label_222be0;
        case 0x222c44u: goto label_222c44;
        case 0x222cd0u: goto label_222cd0;
        case 0x222ce4u: goto label_222ce4;
        case 0x222cecu: goto label_222cec;
        default: break;
    }

    ctx->pc = 0x222bb8u;

    // 0x222bb8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x222bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x222bbc: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x222bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x222bc0: 0x24638ce0  addiu       $v1, $v1, -0x7320
    ctx->pc = 0x222bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937824));
    // 0x222bc4: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x222bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x222bc8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x222bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x222bcc: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x222bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x222bd0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x222bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x222bd4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x222BD4u;
    {
        const bool branch_taken_0x222bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BD4u;
        // 0x222bd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bd4) {
            ctx->pc = 0x222C40u;
            goto label_222c40;
        }
    }
    ctx->pc = 0x222BDCu;
    // 0x222bdc: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x222bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_222be0:
    // 0x222be0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x222be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x222be4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x222be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x222be8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x222be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x222bec: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x222becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x222bf0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x222bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x222bf4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x222bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x222bf8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x222bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x222bfc: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x222bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x222c00: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x222c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c04: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x222c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c08: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x222c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c0c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x222c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c10: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x222c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c14: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x222c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c18: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x222c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c1c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x222c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c20: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x222c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x222c24: 0x0  nop
    ctx->pc = 0x222c24u;
    // NOP
    // 0x222c28: 0x0  nop
    ctx->pc = 0x222c28u;
    // NOP
    // 0x222c2c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x222C2Cu;
    {
        const bool branch_taken_0x222c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C2Cu;
        // 0x222c30: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c2c) {
            ctx->pc = 0x222BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222be0;
        }
    }
    ctx->pc = 0x222C34u;
    // 0x222c34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x222C34u;
    {
        const bool branch_taken_0x222c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222c34) {
            ctx->pc = 0x222C78u;
            goto label_222c78;
        }
    }
    ctx->pc = 0x222C3Cu;
    // 0x222c3c: 0x0  nop
    ctx->pc = 0x222c3cu;
    // NOP
label_222c40:
    // 0x222c40: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x222c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_222c44:
    // 0x222c44: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x222c44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222c48: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x222c48u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x222c4c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x222c4cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x222c50: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x222c50u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x222c54: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x222c54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x222c58: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x222c58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x222c5c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x222c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x222c60: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x222c60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x222c64: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x222c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x222c68: 0x0  nop
    ctx->pc = 0x222c68u;
    // NOP
    // 0x222c6c: 0x0  nop
    ctx->pc = 0x222c6cu;
    // NOP
    // 0x222c70: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x222C70u;
    {
        const bool branch_taken_0x222c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C70u;
        // 0x222c74: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c70) {
            ctx->pc = 0x222C44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222c44;
        }
    }
    ctx->pc = 0x222C78u;
label_222c78:
    // 0x222c78: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x222c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x222c7c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x222c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x222c80: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x222c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x222c84: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x222c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x222c88: 0x80670010  lb          $a3, 0x10($v1)
    ctx->pc = 0x222c88u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x222c8c: 0x80680011  lb          $t0, 0x11($v1)
    ctx->pc = 0x222c8cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x222c90: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x222c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c94: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x222c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c98: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x222c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222c9c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x222c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222ca0: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x222ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x222ca4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x222ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x222ca8: 0x2451a234  addiu       $s1, $v0, -0x5DCC
    ctx->pc = 0x222ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943284));
    // 0x222cac: 0xa0880011  sb          $t0, 0x11($a0)
    ctx->pc = 0x222cacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 8));
    // 0x222cb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x222cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BA234u));
    // 0x222cb4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x222CB4u;
    {
        const bool branch_taken_0x222cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CB4u;
        // 0x222cb8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cb4) {
            ctx->pc = 0x222D00u;
            goto label_222d00;
        }
    }
    ctx->pc = 0x222CBCu;
    // 0x222cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cc0: 0x8c46a230  lw          $a2, -0x5DD0($v0)
    ctx->pc = 0x222cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943280)));
    // 0x222cc4: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x222cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x222cc8: 0xc049590  jal         func_125640
    ctx->pc = 0x222CC8u;
    SET_GPR_U32(ctx, 31, 0x222CD0u);
    ctx->pc = 0x222CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CC8u;
    // 0x222ccc: 0x2610a23c  addiu       $s0, $s0, -0x5DC4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x222CC8u, 0x222CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CD0u;
label_222cd0:
    // 0x222cd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x222cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x222cd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x222cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x222cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x222cdc: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x222CDCu;
    SET_GPR_U32(ctx, 31, 0x222CE4u);
    ctx->pc = 0x222CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CDCu;
    // 0x222ce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x222CDCu, 0x222CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CE4u;
label_222ce4:
    // 0x222ce4: 0xc049f18  jal         func_127C60
    ctx->pc = 0x222CE4u;
    SET_GPR_U32(ctx, 31, 0x222CECu);
    ctx->pc = 0x222CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CE4u;
    // 0x222ce8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x222CE4u, 0x222CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CECu;
label_222cec:
    // 0x222cec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x222cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222cf0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x222cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x222cf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222cf8: 0xac83a240  sw          $v1, -0x5DC0($a0)
    ctx->pc = 0x222cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BA240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA240u, _value); } while (0);
    // 0x222cfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x222cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_222d00:
    // 0x222d00: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x222d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x222d04: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x222d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222d08: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x222d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x222d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x222D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D0Cu;
        // 0x222d10: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222D14u;
}
