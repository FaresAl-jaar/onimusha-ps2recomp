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

// Function: sub_0020DDF0
// Address: 0x20ddf0 - 0x20dfa8
void sub_0020DDF0_0x20ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DDF0_0x20ddf0");
#endif

    switch (ctx->pc) {
        case 0x20de38u: goto label_20de38;
        case 0x20deccu: goto label_20decc;
        case 0x20dee0u: goto label_20dee0;
        case 0x20def4u: goto label_20def4;
        case 0x20df08u: goto label_20df08;
        case 0x20df18u: goto label_20df18;
        case 0x20df24u: goto label_20df24;
        case 0x20df30u: goto label_20df30;
        case 0x20df3cu: goto label_20df3c;
        case 0x20df48u: goto label_20df48;
        case 0x20df54u: goto label_20df54;
        case 0x20df60u: goto label_20df60;
        case 0x20df6cu: goto label_20df6c;
        case 0x20df78u: goto label_20df78;
        case 0x20df84u: goto label_20df84;
        case 0x20df8cu: goto label_20df8c;
        default: break;
    }

    ctx->pc = 0x20ddf0u;

    // 0x20ddf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20ddf4: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x20ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x20ddf8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x20ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20ddfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20ddfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de00: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x20de00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x20de04: 0x2448fb50  addiu       $t0, $v0, -0x4B0
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966096));
    // 0x20de08: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x20de08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x20de0c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20de0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de10: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20de14: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20de14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20de18: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x20de18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x87FB58u));
    // 0x20de1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DE1Cu;
    {
        const bool branch_taken_0x20de1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE1Cu;
        // 0x20de20: 0x34a50c06  ori         $a1, $a1, 0xC06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3078);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de1c) {
            ctx->pc = 0x20DE30u;
            goto label_20de30;
        }
    }
    ctx->pc = 0x20DE24u;
    // 0x20de24: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x20de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x20de28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DE28u;
    {
        const bool branch_taken_0x20de28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE28u;
        // 0x20de2c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de28) {
            ctx->pc = 0x20DE40u;
            goto label_20de40;
        }
    }
    ctx->pc = 0x20DE30u;
label_20de30:
    // 0x20de30: 0xc0848e0  jal         func_212380
    ctx->pc = 0x20DE30u;
    SET_GPR_U32(ctx, 31, 0x20DE38u);
    ctx->pc = 0x20DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DE30u;
    // 0x20de34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x20DE30u, 0x20DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DE38u;
label_20de38:
    // 0x20de38: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x20DE38u;
    {
        const bool branch_taken_0x20de38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE38u;
        // 0x20de3c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de38) {
            ctx->pc = 0x20DF94u;
            goto label_20df94;
        }
    }
    ctx->pc = 0x20DE40u;
label_20de40:
    // 0x20de40: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20de40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20de44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20de44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de48: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x20de48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x20de4c: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x20de4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20de50: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x20de50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20de54: 0x6909000f  ldl         $t1, 0xF($t0)
    ctx->pc = 0x20de54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x20de58: 0x6d090008  ldr         $t1, 0x8($t0)
    ctx->pc = 0x20de58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x20de5c: 0x690a0017  ldl         $t2, 0x17($t0)
    ctx->pc = 0x20de5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x20de60: 0x6d0a0010  ldr         $t2, 0x10($t0)
    ctx->pc = 0x20de60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x20de64: 0x8d0b0018  lw          $t3, 0x18($t0)
    ctx->pc = 0x20de64u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x20de68: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x20de68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20de6c: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x20de6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20de70: 0xb0e90017  sdl         $t1, 0x17($a3)
    ctx->pc = 0x20de70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20de74: 0xb4e90010  sdr         $t1, 0x10($a3)
    ctx->pc = 0x20de74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20de78: 0xb0ea001f  sdl         $t2, 0x1F($a3)
    ctx->pc = 0x20de78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20de7c: 0xb4ea0018  sdr         $t2, 0x18($a3)
    ctx->pc = 0x20de7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20de80: 0xaceb0020  sw          $t3, 0x20($a3)
    ctx->pc = 0x20de80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 11));
    // 0x20de84: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x20de84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20de88: 0xace30028  sw          $v1, 0x28($a3)
    ctx->pc = 0x20de88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 3));
    // 0x20de8c: 0x3c11000f  lui         $s1, 0xF
    ctx->pc = 0x20de8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)15 << 16));
    // 0x20de90: 0x36314240  ori         $s1, $s1, 0x4240
    ctx->pc = 0x20de90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16960);
    // 0x20de94: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x20de94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
    // 0x20de98: 0x26501020  addiu       $s0, $s2, 0x1020
    ctx->pc = 0x20de98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4128));
    // 0x20de9c: 0xace60044  sw          $a2, 0x44($a3)
    ctx->pc = 0x20de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 6));
    // 0x20dea0: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x20dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x20dea4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x20dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x20dea8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x20dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x20deac: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x20deacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
    // 0x20deb0: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x20deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x20deb4: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x20deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x20deb8: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x20deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x20debc: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x20debcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x20dec0: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x20dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x20dec4: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20DEC4u;
    SET_GPR_U32(ctx, 31, 0x20DECCu);
    ctx->pc = 0x20DEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DEC4u;
    // 0x20dec8: 0xace00048  sw          $zero, 0x48($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20DEC4u, 0x20DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DECCu;
label_20decc:
    // 0x20decc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20deccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ded0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x20ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x20ded4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20ded8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20DED8u;
    SET_GPR_U32(ctx, 31, 0x20DEE0u);
    ctx->pc = 0x20DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DED8u;
    // 0x20dedc: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20DED8u, 0x20DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DEE0u;
label_20dee0:
    // 0x20dee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20dee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dee4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x20dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20dee8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x20dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x20deec: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20DEECu;
    SET_GPR_U32(ctx, 31, 0x20DEF4u);
    ctx->pc = 0x20DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DEECu;
    // 0x20def0: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20DEECu, 0x20DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DEF4u;
label_20def4:
    // 0x20def4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x20def4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x20def8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20def8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20defc: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x20defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x20df00: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20DF00u;
    SET_GPR_U32(ctx, 31, 0x20DF08u);
    ctx->pc = 0x20DF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF00u;
    // 0x20df04: 0xffb10028  sd          $s1, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20DF00u, 0x20DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF08u;
label_20df08:
    // 0x20df08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20df08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df0c: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x20df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x20df10: 0xc08890a  jal         func_222428
    ctx->pc = 0x20DF10u;
    SET_GPR_U32(ctx, 31, 0x20DF18u);
    ctx->pc = 0x20DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF10u;
    // 0x20df14: 0xffb10038  sd          $s1, 0x38($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222428u, 0x20DF10u, 0x20DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF18u;
label_20df18:
    // 0x20df18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20df18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df1c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20DF1Cu;
    SET_GPR_U32(ctx, 31, 0x20DF24u);
    ctx->pc = 0x20DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF1Cu;
    // 0x20df20: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20DF1Cu, 0x20DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF24u;
label_20df24:
    // 0x20df24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20df24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df28: 0xc088952  jal         func_222548
    ctx->pc = 0x20DF28u;
    SET_GPR_U32(ctx, 31, 0x20DF30u);
    ctx->pc = 0x20DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF28u;
    // 0x20df2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222548u, 0x20DF28u, 0x20DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF30u;
label_20df30:
    // 0x20df30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df34: 0xc088954  jal         func_222550
    ctx->pc = 0x20DF34u;
    SET_GPR_U32(ctx, 31, 0x20DF3Cu);
    ctx->pc = 0x20DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF34u;
    // 0x20df38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222550u, 0x20DF34u, 0x20DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF3Cu;
label_20df3c:
    // 0x20df3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20df3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df40: 0xc08895a  jal         func_222568
    ctx->pc = 0x20DF40u;
    SET_GPR_U32(ctx, 31, 0x20DF48u);
    ctx->pc = 0x20DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF40u;
    // 0x20df44: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222568u, 0x20DF40u, 0x20DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF48u;
label_20df48:
    // 0x20df48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20df48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df4c: 0xc088960  jal         func_222580
    ctx->pc = 0x20DF4Cu;
    SET_GPR_U32(ctx, 31, 0x20DF54u);
    ctx->pc = 0x20DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF4Cu;
    // 0x20df50: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222580u, 0x20DF4Cu, 0x20DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF54u;
label_20df54:
    // 0x20df54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20df54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df58: 0xc088966  jal         func_222598
    ctx->pc = 0x20DF58u;
    SET_GPR_U32(ctx, 31, 0x20DF60u);
    ctx->pc = 0x20DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF58u;
    // 0x20df5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222598u, 0x20DF58u, 0x20DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF60u;
label_20df60:
    // 0x20df60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df64: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20DF64u;
    SET_GPR_U32(ctx, 31, 0x20DF6Cu);
    ctx->pc = 0x20DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF64u;
    // 0x20df68: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20DF64u, 0x20DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF6Cu;
label_20df6c:
    // 0x20df6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20df6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df70: 0xc08896c  jal         func_2225B0
    ctx->pc = 0x20DF70u;
    SET_GPR_U32(ctx, 31, 0x20DF78u);
    ctx->pc = 0x20DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF70u;
    // 0x20df74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225B0u, 0x20DF70u, 0x20DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF78u;
label_20df78:
    // 0x20df78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20df78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df7c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20DF7Cu;
    SET_GPR_U32(ctx, 31, 0x20DF84u);
    ctx->pc = 0x20DF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF7Cu;
    // 0x20df80: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20DF7Cu, 0x20DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF84u;
label_20df84:
    // 0x20df84: 0xc089f88  jal         func_227E20
    ctx->pc = 0x20DF84u;
    SET_GPR_U32(ctx, 31, 0x20DF8Cu);
    ctx->pc = 0x20DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF84u;
    // 0x20df88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E20u, 0x20DF84u, 0x20DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF8Cu;
label_20df8c:
    // 0x20df8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20df8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df90: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x20df90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20df94:
    // 0x20df94: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x20df94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20df98: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x20df98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20df9c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20df9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20dfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x20DFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFA0u;
        // 0x20dfa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DFA8u;
}
