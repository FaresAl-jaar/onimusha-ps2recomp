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

// Function: sub_0010D140
// Address: 0x10d140 - 0x10d288
void sub_0010D140_0x10d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D140_0x10d140");
#endif

    ctx->pc = 0x10d140u;

    // 0x10d140: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d144: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10d144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10d148: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10d14c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x10d14cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d150: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d150u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x10d154: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d158: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10d158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10d15c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x10d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10d160: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10d164: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x10d164u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x10d168: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10d168u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x10d16c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D16Cu;
    {
        const bool branch_taken_0x10d16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D16Cu;
        // 0x10d170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d16c) {
            ctx->pc = 0x10D18Cu;
            goto label_10d18c;
        }
    }
    ctx->pc = 0x10D174u;
    // 0x10d174: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d178: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x10d178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x10d17c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u)); // MMIO: 0x1000b000
    // 0x10d180: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x10d180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x10d184: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D184u;
    {
        const bool branch_taken_0x10d184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D184u;
        // 0x10d188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d184) {
            ctx->pc = 0x10D1A0u;
            goto label_10d1a0;
        }
    }
    ctx->pc = 0x10D18Cu;
label_10d18c:
    // 0x10d18c: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x10d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x10d190: 0xf  sync
    ctx->pc = 0x10d190u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d194: 0x42000038  ei
    ctx->pc = 0x10d194u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10d198: 0x3e00008  jr          $ra
    ctx->pc = 0x10D198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D198u;
        // 0x10d19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D1A0u;
label_10d1a0:
    // 0x10d1a0: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x10d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x10d1a4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x10d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10d1a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10d1ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10d1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10d1b0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10D1B0u;
    {
        const bool branch_taken_0x10d1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1B0u;
        // 0x10d1b4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1b0) {
            ctx->pc = 0x10D214u;
            goto label_10d214;
        }
    }
    ctx->pc = 0x10D1B8u;
    // 0x10d1b8: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x10d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10d1bc: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x10d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x10d1c0: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x10d1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x10d1c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d1c4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000b010
    // 0x10d1c8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x10d1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10d1cc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10d1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10d1d0: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x10d1d0u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x10d1d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10d1d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x10d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x10d1dc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10d1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10d1e0: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x10d1e0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5)); // MMIO: 0x1000b000
    // 0x10d1e4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x10d1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x10d1e8: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x10d1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x10d1ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10d1ecu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x10d1f0: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x10d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x10d1f4: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x10d1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x10d1f8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10d1fc: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x10d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10d200: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10d200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10d204: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10d208: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10d208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10d20c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10D20Cu;
    {
        const bool branch_taken_0x10d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D20Cu;
        // 0x10d210: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d20c) {
            ctx->pc = 0x10D278u;
            goto label_10d278;
        }
    }
    ctx->pc = 0x10D214u;
label_10d214:
    // 0x10d214: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x10d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10d218: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x10D218u;
    {
        const bool branch_taken_0x10d218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D218u;
        // 0x10d21c: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d218) {
            ctx->pc = 0x10D278u;
            goto label_10d278;
        }
    }
    ctx->pc = 0x10D220u;
    // 0x10d220: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x10d220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10d224: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d228: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x10d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10d22c: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x10d22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x10d230: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x10d230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x10d234: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x10d234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10d238: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10d238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10d23c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d240: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10d240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10d244: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x10d244u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x10d248: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x10d248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x10d24c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x10d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x10d250: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x10d250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x10d254: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x10d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10d258: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x10d258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x10d25c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10d25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10d260: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x10d260u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2)); // MMIO: 0x1000b020
    // 0x10d264: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10d264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10d268: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x10d268u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 8)); // MMIO: 0x1000b000
    // 0x10d26c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x10d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10d270: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10d270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10d274: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10d274u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_10d278:
    // 0x10d278: 0xf  sync
    ctx->pc = 0x10d278u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d27c: 0x42000038  ei
    ctx->pc = 0x10d27cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10d280: 0x3e00008  jr          $ra
    ctx->pc = 0x10D280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D280u;
        // 0x10d284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D288u;
}
